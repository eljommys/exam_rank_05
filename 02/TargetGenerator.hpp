#pragma once

#include <vector>

class ATarget;

class TargetGenerator
{
    private:
        std::vector<ATarget *> targets;

    public:
        ~TargetGenerator();
        void learnTargetType(ATarget *);
        void forgetTargetType(const std::string &);
        ATarget* createTarget(std::string const &);
};

#include "ATarget.hpp"