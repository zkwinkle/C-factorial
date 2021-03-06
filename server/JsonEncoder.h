#ifndef JSONENCODER_H
#define JSONENCODER_H

#include <nlohmann/json.hpp>
#include "UpdateInfo.h"
#include <string>

using json = nlohmann::json;

//! Class that encode a UpdateInfo object to a jsonString
class JsonEncoder
{

private:
    //! json file
    json jFile;

    //! UpdateInfo object
    UpdateInfo data;

public:
    //! Constructor of the JsonEncoder Class
    JsonEncoder(const UpdateInfo &data);

    std::string encode();
};

#endif //JSONENCODER_H
