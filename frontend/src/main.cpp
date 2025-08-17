#include <iostream>
#include <format>
#include <lifexp/Player.h>

int main(){
    Player player("Sven", 18, 1, 0);
    std::cout << std::format("Welcome Player: {}\n", player.getName());
    return 0;
}
