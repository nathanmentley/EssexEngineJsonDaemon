/* 
 * Essex Engine
 * 
 * Copyright (C) 2017 Nathan Mentley - All Rights Reserved
 * You may use, distribute and modify this code under the
 * terms of the BSD license.
 *
 * You should have received a copy of the BSD license with
 * this file. If not, please visit: https://github.com/nathanmentley/EssexEngine
 */
 
#include <EssexEngineJsonDaemon/JsonDaemon.h>

EssexEngine::Daemons::Json::JsonDaemon::JsonDaemon(WeakPointer<Context> _context):BaseDaemon(_context) {}

EssexEngine::Daemons::Json::JsonDaemon::~JsonDaemon() { }

std::unique_ptr<EssexEngine::Daemons::Json::IJsonDocument> EssexEngine::Daemons::Json::JsonDaemon::GetJsonDocument(WeakPointer<Daemons::FileSystem::IFileBuffer> data) {
    //WeakPointer<char> rawdata = WeakPointer<char>();
    char* rawdata = new char[data->GetSize() + 1];
    
    strncpy(rawdata, (char*)data->GetBuffer(), data->GetSize());

    return GetDriver()->GetJsonDocument(rawdata);

    //delete[] rawdata;
}

std::unique_ptr<EssexEngine::Daemons::Json::IJsonNode> EssexEngine::Daemons::Json::JsonDaemon::GetJsonNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> doc, std::string key) {
    return GetDriver()->GetJsonNode(doc, key);
}

std::unique_ptr<EssexEngine::Daemons::Json::IJsonNode> EssexEngine::Daemons::Json::JsonDaemon::GetJsonNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetJsonNode(node, key);
}

std::list<std::unique_ptr<EssexEngine::Daemons::Json::IJsonNode>> EssexEngine::Daemons::Json::JsonDaemon::GetJsonNodeArray(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> doc, std::string key) {
    return GetDriver()->GetJsonNodeArray(doc, key);
}

std::list<std::unique_ptr<EssexEngine::Daemons::Json::IJsonNode>> EssexEngine::Daemons::Json::JsonDaemon::GetJsonNodeArray(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetJsonNodeArray(node, key);
}

EssexEngine::Nullable<std::string> EssexEngine::Daemons::Json::JsonDaemon::GetStringFromNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> document, std::string key) {
    return GetDriver()->GetStringFromNode(document, key);
}

EssexEngine::Nullable<int> EssexEngine::Daemons::Json::JsonDaemon::GetIntFromNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> document, std::string key) {
    return GetDriver()->GetIntFromNode(document, key);
}

EssexEngine::Nullable<bool> EssexEngine::Daemons::Json::JsonDaemon::GetBoolFromNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> document, std::string key) {
    return GetDriver()->GetBoolFromNode(document, key);
}

EssexEngine::Nullable<std::string> EssexEngine::Daemons::Json::JsonDaemon::GetStringFromNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetStringFromNode(node, key);
}

EssexEngine::Nullable<int> EssexEngine::Daemons::Json::JsonDaemon::GetIntFromNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetIntFromNode(node, key);
}

EssexEngine::Nullable<bool> EssexEngine::Daemons::Json::JsonDaemon::GetBoolFromNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetBoolFromNode(node, key);
}

EssexEngine::Nullable<std::string> EssexEngine::Daemons::Json::JsonDaemon::GetStringFromNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node) {
    return GetDriver()->GetStringFromNode(node);
}

EssexEngine::Nullable<int> EssexEngine::Daemons::Json::JsonDaemon::GetIntFromNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node) {
    return GetDriver()->GetIntFromNode(node);
}

EssexEngine::Nullable<bool> EssexEngine::Daemons::Json::JsonDaemon::GetBoolFromNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node) {
    return GetDriver()->GetBoolFromNode(node);
}

std::unique_ptr<EssexEngine::Daemons::Json::IJsonNode> EssexEngine::Daemons::Json::JsonDaemon::CreateNode() {
    return GetDriver()->CreateNode();
}

void EssexEngine::Daemons::Json::JsonDaemon::RemoveNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> doc, std::string key) {
    GetDriver()->RemoveNode(doc, key);
}
void EssexEngine::Daemons::Json::JsonDaemon::RemoveNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->RemoveNode(node, key);
}

void EssexEngine::Daemons::Json::JsonDaemon::AppendNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> target, EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->AppendNode(target, node, key);
}
void EssexEngine::Daemons::Json::JsonDaemon::AppendNode(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> target, EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->AppendNode(target, node, key);
}

void EssexEngine::Daemons::Json::JsonDaemon::AppendToArray(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> target, EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->AppendToArray(target, node, key);
}
void EssexEngine::Daemons::Json::JsonDaemon::AppendToArray(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> target, EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->AppendToArray(target, node, key);
}

void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToString(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> document, EssexEngine::Nullable<std::string> value) {
    GetDriver()->SetNodeToString(document, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToInt(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> document, EssexEngine::Nullable<int> value) {
    GetDriver()->SetNodeToInt(document, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToBool(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> document, EssexEngine::Nullable<bool> value) {
    GetDriver()->SetNodeToBool(document, value);
}

void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToString(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, EssexEngine::Nullable<std::string> value) {
    GetDriver()->SetNodeToString(node, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToInt(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, EssexEngine::Nullable<int> value) {
    GetDriver()->SetNodeToInt(node, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToBool(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node, EssexEngine::Nullable<bool> value) {
    GetDriver()->SetNodeToBool(node, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToArray(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonNode> node) {
    GetDriver()->SetNodeToArray(node);
}

std::string EssexEngine::Daemons::Json::JsonDaemon::SerializeDocument(EssexEngine::WeakPointer<EssexEngine::Daemons::Json::IJsonDocument> doc) {
    return GetDriver()->SerializeDocument(doc);
}
