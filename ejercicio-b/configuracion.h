#ifndef CONFIGURATION_H
#define CONFIGURATION_H

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

#endif
