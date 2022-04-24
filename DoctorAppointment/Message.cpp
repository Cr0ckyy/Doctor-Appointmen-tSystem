#include "Message.h"

#include <utility>

Message::Message() : ID(0), Content("No Message"), SentAt("0000000") {
}

Message::Message(int id, string content, Patient snder, string sentAt) :
        ID(id), Content(std::move(content)), Sender(std::move(snder)), SentAt(std::move(sentAt)) {
}

int Message::getID() const {
    return this->ID;
}

string Message::getContent() {
    return this->Content;
}

string Message::getPatientName() {
    return this->Sender.getUsername();
}

string Message::getTimeSend() {
    return this->SentAt;
}
