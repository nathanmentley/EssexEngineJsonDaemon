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

EssexEngine::UniquePointer<EssexEngine::Daemons::Json::IJsonDocument> EssexEngine::Daemons::Json::JsonDaemon::GetJsonDocument(SmartPointer<Daemons::FileSystem::IFileBuffer> data) {
    return GetDriver()->GetJsonDocument(data);
}

EssexEngine::UniquePointer<EssexEngine::Daemons::Json::IJsonNode> EssexEngine::Daemons::Json::JsonDaemon::GetJsonNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> doc, std::string key) {
    return GetDriver()->GetJsonNode(doc, key);
}

EssexEngine::UniquePointer<EssexEngine::Daemons::Json::IJsonNode> EssexEngine::Daemons::Json::JsonDaemon::GetJsonNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetJsonNode(node, key);
}

std::list<EssexEngine::UniquePointer<EssexEngine::Daemons::Json::IJsonNode>> EssexEngine::Daemons::Json::JsonDaemon::GetJsonNodeArray(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> doc, std::string key) {
    return GetDriver()->GetJsonNodeArray(doc, key);
}

std::list<EssexEngine::UniquePointer<EssexEngine::Daemons::Json::IJsonNode>> EssexEngine::Daemons::Json::JsonDaemon::GetJsonNodeArray(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetJsonNodeArray(node, key);
}

EssexEngine::Nullable<std::string> EssexEngine::Daemons::Json::JsonDaemon::GetStringFromNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> document, std::string key) {
    return GetDriver()->GetStringFromNode(document, key);
}

EssexEngine::Nullable<int> EssexEngine::Daemons::Json::JsonDaemon::GetIntFromNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> document, std::string key) {
    return GetDriver()->GetIntFromNode(document, key);
}

EssexEngine::Nullable<bool> EssexEngine::Daemons::Json::JsonDaemon::GetBoolFromNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> document, std::string key) {
    return GetDriver()->GetBoolFromNode(document, key);
}

EssexEngine::Nullable<std::string> EssexEngine::Daemons::Json::JsonDaemon::GetStringFromNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetStringFromNode(node, key);
}

EssexEngine::Nullable<int> EssexEngine::Daemons::Json::JsonDaemon::GetIntFromNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetIntFromNode(node, key);
}

EssexEngine::Nullable<bool> EssexEngine::Daemons::Json::JsonDaemon::GetBoolFromNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    return GetDriver()->GetBoolFromNode(node, key);
}

EssexEngine::Nullable<std::string> EssexEngine::Daemons::Json::JsonDaemon::GetStringFromNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node) {
    return GetDriver()->GetStringFromNode(node);
}

EssexEngine::Nullable<int> EssexEngine::Daemons::Json::JsonDaemon::GetIntFromNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node) {
    return GetDriver()->GetIntFromNode(node);
}

EssexEngine::Nullable<bool> EssexEngine::Daemons::Json::JsonDaemon::GetBoolFromNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node) {
    return GetDriver()->GetBoolFromNode(node);
}

EssexEngine::UniquePointer<EssexEngine::Daemons::Json::IJsonNode> EssexEngine::Daemons::Json::JsonDaemon::CreateNode() {
    return GetDriver()->CreateNode();
}

void EssexEngine::Daemons::Json::JsonDaemon::RemoveNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> doc, std::string key) {
    GetDriver()->RemoveNode(doc, key);
}
void EssexEngine::Daemons::Json::JsonDaemon::RemoveNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->RemoveNode(node, key);
}

void EssexEngine::Daemons::Json::JsonDaemon::AppendNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> target, EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->AppendNode(target, node, key);
}
void EssexEngine::Daemons::Json::JsonDaemon::AppendNode(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> target, EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->AppendNode(target, node, key);
}

void EssexEngine::Daemons::Json::JsonDaemon::AppendToArray(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> target, EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->AppendToArray(target, node, key);
}
void EssexEngine::Daemons::Json::JsonDaemon::AppendToArray(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> target, EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, std::string key) {
    GetDriver()->AppendToArray(target, node, key);
}

void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToString(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> document, EssexEngine::Nullable<std::string> value) {
    GetDriver()->SetNodeToString(document, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToInt(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> document, EssexEngine::Nullable<int> value) {
    GetDriver()->SetNodeToInt(document, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToBool(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> document, EssexEngine::Nullable<bool> value) {
    GetDriver()->SetNodeToBool(document, value);
}

void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToString(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, EssexEngine::Nullable<std::string> value) {
    GetDriver()->SetNodeToString(node, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToInt(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, EssexEngine::Nullable<int> value) {
    GetDriver()->SetNodeToInt(node, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToBool(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node, EssexEngine::Nullable<bool> value) {
    GetDriver()->SetNodeToBool(node, value);
}
void EssexEngine::Daemons::Json::JsonDaemon::SetNodeToArray(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonNode> node) {
    GetDriver()->SetNodeToArray(node);
}

std::string EssexEngine::Daemons::Json::JsonDaemon::SerializeDocument(EssexEngine::SmartPointer<EssexEngine::Daemons::Json::IJsonDocument> doc) {
    return GetDriver()->SerializeDocument(doc);
}
