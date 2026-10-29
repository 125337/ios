@interface WATransferParamsModel : NSObject
{
    unsigned int _debugMode; // +0x8
    NSString * _appid; // +0x10
    NSString * _args; // +0x18
    NSString * _name; // +0x20
    NSString * _jsapiType; // +0x28
    NSString * _path; // +0x30
    unsigned long long _version; // +0x38
    NSString * _instanceId; // +0x40
    NSString * _sessionId; // +0x48
    NSString * _title; // +0x50
}
- (id)toData;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)args;
- (void)setArgs:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)jsapiType;
- (void)setJsapiType:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned int)debugMode;
- (void)setDebugMode:(unsigned int)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void).cxx_destruct;
@end

