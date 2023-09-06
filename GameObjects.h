#pragma once

#include <string>
#include <list>

class AdventureStrategy {
public:
    virtual void EmbarkOnAdventure() = 0;
};

class SpacefaringAdventureStrategy : public AdventureStrategy {
public:
    void EmbarkOnAdventure() override;
};

class UnderwaterAdventureStrategy : public AdventureStrategy {
public:
    void EmbarkOnAdventure() override;
};

class Player {
private:
    std::string Username;
    int PlayerID;
    AdventureStrategy* adventureStrategy;

public:
    // Getters
    std::string GetUsername() const { return Username; }
    int GetPlayerID() const { return PlayerID; }
    AdventureStrategy* GetAdventureStrategy() const { return adventureStrategy; }

    // Setters
    void SetUsername(const std::string& username) { Username = username; }
    void SetPlayerID(int playerId) { PlayerID = playerId; }
    void SetAdventureStrategy(AdventureStrategy* strategy);

    // Other methods
    void CustomizeAvatar();
    void CustomizeHome();
    void HostStargazingParty();
    void ParticipateInTrade();
    void ReceivePromotion(const std::string& PromotionContent);
    void EmbarkOnAdventure();
};

class CosmicNeighborhood {
private:
    std::list<Location> Locations;

public:
    void Explore();
};

class AstronautAvatar {
private:
    std::string Name;
    std::string Appearance;

public:
    // Getters
    std::string GetName() const { return Name; }
    std::string GetAppearance() const { return Appearance; }

    // Setters
    void SetName(const std::string& name) { Name = name; }
    void SetAppearance(const std::string& appearance) { Appearance = appearance; }

    // Other methods
    void Customize();
};

class SpaceThemedHome {
private:
    std::string Theme;
    std::string Decoration;

public:
    // Getters
    std::string GetTheme() const { return Theme; }
    std::string GetDecoration() const { return Decoration; }

    // Setters
    void SetTheme(const std::string& theme) { Theme = theme; }
    void SetDecoration(const std::string& decoration) { Decoration = decoration; }

    // Other methods
    void Customize();
};

class StargazingParty {
private:
    std::list<Player> Participants;
    std::string Theme;

public:
    // Getters
    std::string GetTheme() const { return Theme; }

    // Setters
    void SetTheme(const std::string& theme) { Theme = theme; }

    // Other methods
    void HostParty();
};

class InterGalacticTrade {
private:
    std::list<Item> TradeItems;

public:
    void InitiateTrade();
};

class WorldTheme {
private:
    std::string ThemeName;
    std::string Setting;

public:
    void CustomizeTheme();
};

class WeatherSettings {
private:
    int Temperature;
    std::string Climate;

public:
    // Getters
    int GetTemperature() const { return Temperature; }
    std::string GetClimate() const { return Climate; }

    // Setters
    void SetTemperature(int temperature) { Temperature = temperature; }
    void SetClimate(const std::string& climate) { Climate = climate; }

    // Other methods
    void AdjustSettings();
};

class Assets {
private:
    std::string Quality;
    int Size;

public:
    void Download();
};

class CachingMechanism {
public:
    void CacheAssets();
};

class Element {
private:
    std::string ElementName;
    std::string Characteristics;

public:
    // Getters
    std::string GetElementName() const { return ElementName; }
    std::string GetCharacteristics() const { return Characteristics; }

    // Setters
    void SetElementName(const std::string& elementName) { ElementName = elementName; }
    void SetCharacteristics(const std::string& characteristics) { Characteristics = characteristics; }

    // Other methods
    void Describe();
};

class Mode {
private:
    std::string ModeName;
    std::string Rules;

public:
    // Getters
    std::string GetModeName() const { return ModeName; }
    std::string GetRules() const { return Rules; }

    // Setters
    void SetModeName(const std::string& modeName) { ModeName = modeName; }
    void SetRules(const std::string& rules) { Rules = rules; }

    // Other methods
    void ExplainRules();
};

class MoviePromotionSystem {
private:
    std::string PromotionalContent;
    Date ReleaseDate;
    std::string Director;
    std::string Genre;

public:
    void PromoteContent();
    Date GetReleaseDate();
    std::string GetDirector();
    std::string GetGenre();
};

class VideoGamePromotionSystem {
private:
    std::string PromotionalContent;
    Date ReleaseDate;
    std::string Publisher;
    std::string Genre;

public:
    void PromoteContent();
    Date GetReleaseDate();
    std::string GetPublisher();
    std::string GetGenre();
};

class Team;

class Element;
class InterWorldCompetition;
class Mode;
class InvasionModes;

class Team {
public:
    Player* BelongsToTeam;
};

class Element {
public:
    InterWorldCompetition* BelongsToCompetition;
};

class Mode {
public:
    InvasionModes* BelongsToInvasion;
};

class MoviePromotionSystem;
class VideoGamePromotionSystem;
