@interface ILinkEngineParams : NSObject
{
    NSString * _appId; // +0x8
    NSString * _subAppId; // +0x10
    ConfAppInfo * _appInfo; // +0x18
    NSString * _sessionKey; // +0x20
    NSString * _idcInfo; // +0x28
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)subAppId;
- (void)setSubAppId:(id)arg1;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (id)idcInfo;
- (void)setIdcInfo:(id)arg1;
- (void).cxx_destruct;
@end
