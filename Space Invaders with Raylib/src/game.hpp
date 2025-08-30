#pragma once
#include "spaceship.hpp"
#include "obstacles.hpp"
#include "alien.hpp"
#include "mysteryship.hpp"
#include "laser.hpp"


class game{
    public:
        game();
        ~game();
        void Draw();
        void HandleInput();
        void Update();
        bool run;
        int lives;
        int score;
        int highScore;
        Music music;

    private:
    void DeleteInactiveLasers();
    std::vector<Obstacle> CreateObstacles();
    std::vector<Alien> CreateAliens();
    void MoveAliens();
    void MoveDownAliens(int Distance);
    void AlienShootLaser();
    Spaceship spaceship;
    std::vector<Obstacle> obstacles;    //causing issue
    std::vector<Alien> aliens;
    int AliensDirection;
    std::vector<Laser> alienLasers;
    void CheckForCollisions();
    void CheckForHighScore();
    void saveHighScoreToFile(int highScore);
    int loadHighScoreFromFile();
    void GameOver();
    void Reset();
    void InitGame();
    constexpr static float alienLaserShootInterval = 0.35;
    float timeLastAlienFired;
    MysteryShip mysteryship;
    float mysteryShipSpawnInterval;
    float timeLastSpawn;
    Sound explosionSound;
    
};