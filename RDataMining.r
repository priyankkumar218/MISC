read.csv("E:/houses.csv")->houses
str(houses)
summary(houses)

# Data Cleaning
library(dplyr)
houses %>% select(c(-1, -2))->houses
houses $air_cond<-factor(houses$air_cond, labels = c("No", "Yes"))
houses $construction<-factor(houses$construction, labels = c("No", "Yes"))
houses $waterfront<-factor(houses$waterfront, labels = c("No", "Yes"))
houses $fuel<-factor(houses$fuel, labels = c("Gas", "Electric", "Oil"))
houses $sewer<-factor(houses$sewer, labels = c("None", "Private", "Public"))

#Data Vizualization
library(ggplot2)
ggplot(data = houses, aes(x=price))+geom_histogram(bins=40)
ggplot(data = houses, aes(y=price, x=waterfront, fill=waterfront))+geom_boxplot()
ggplot(data = houses, aes(x=age, y=price))+geom_point(col="purple")+geom_smooth(method="lm", se=F)
ggplot(data = houses, aes(x=living_area, y=price, col=factor(rooms)))+geom_point()+geom_smooth(method="lm", se=F)

#Splitting Data
library(caTools)
sample.split(houses$price, SplitRatio = 0.65)->split_index
train<-subset(houses, split_index==T)
test<-subset(houses, split_index==F)
nrow(train)
nrow(test)

#Model Building
lm(price~., data=train)->modl
predict(modl, test) -> result
print(result)
cbind(actual=test$price, predicted=result)->compare_result
as.data.frame(compare_result)->compare_result
compare_result$actual - compare_result$predicted -> error
cbind(compare_result, error)
sqrt(mean(compare_result$error^2))->rmse1
print(rmse1)


#Another model
lm(price~.-fireplaces-sewer-fuel, data=train)->mod2
predict(mod2, test) -> result2
cbind(actual=test$price, predicted=result2)->compare_result2
as.data.frame(compare_result2)->compare_result2
compare_result2$actual - compare_result2$predicted -> error2
cbind(compare_result2, error2)
sqrt(mean(compare_result2$error2^2))->rmse2
print(rmse2)

#Summary of both the models
summary(modl)
summary(mod2)