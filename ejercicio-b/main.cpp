#include <iostream>
#include <string>
#include <unordered_map>

class Configuration {
public:
    Configuration(); // Constructor
    void addExtension(const std::string& extensionName, const std::string& extensionPath);
    std::string getExtensionPath(const std::string& extensionName) const;

private:
    std::unordered_map<std::string, std::string> extensions;
};

configuration::Configuration() {
    // Constructor, inicializa la configuración si es necesario
}

void configuration::addExtension(const std::string& extensionName, const std::string& extensionPath) {
    // Agregar una extensión a la configuración
    extensions[extensionName] = extensionPath;
}

std::string configuration::getExtensionPath(const std::string& extensionName) const {
    // Obtener el path de una extensión según su nombre
    if (extensions.find(extensionName) != extensions.end()) {
        return extensions.at(extensionName);
    }
    return ""; // Devuelve una cadena vacía si no se encuentra la extensión
}
#include "configuration.h"

int main() {
    Configuration config;
    config.addExtension("extension1", "path/to/extension1");
    config.addExtension("extension2", "path/to/extension2");

    std::string extensionName = "extension1";
    std::string extensionPath = config.getExtensionPath(extensionName);

    if (!extensionPath.empty()) {
        std::cout << "La extensión " << extensionName << " está en: " << extensionPath << std::endl;
    } else {
        std::cout << "La extensión " << extensionName << " no se encontró." << std::endl;
    }

    return 0;
}

