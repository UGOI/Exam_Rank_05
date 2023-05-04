#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {
    std::map<std::string, ATarget *>::iterator it = map.begin();
    std::map<std::string, ATarget *>::iterator end = map.end();
    
    while (it != end) {
        delete it->second;
        it++;
    }
    map.clear();
}

void TargetGenerator::learnTargetType(ATarget* target) {
    if (target)
        map.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &name) {
    std::map<std::string, ATarget *>::iterator it = map.find(name);
    std::map<std::string, ATarget *>::iterator end = map.end();
    
    if (it != end) {
        delete it->second;
        map.erase(name);
    }
}

ATarget* TargetGenerator::createTarget(std::string const &name) {
    ATarget *target = map[name];
    return target;
}

