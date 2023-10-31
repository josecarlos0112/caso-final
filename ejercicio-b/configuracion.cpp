#include "Configuration.h"

Configuration::Configuration() {
    // Constructor, inicializa la configuración si es necesario
}

void Configuration::addExtension(const std::string& extensionName, const std::string& extensionPath) {
    // Agregar una extensión a la configuración
    extensions[extensionName] = extensionPath;
}

std::string Configuration::getExtensionPath(const std::string& extensionName) const {
    // Obtener el path de una extensión según su nombre
    if (extensions.find(extensionName) != extensions.end()) {
        return extensions.at(extensionName);
    }
    return ""; // Devuelve una cadena vacía si no se encuentra la extensión
}
