@interface PreloadInfo : NSObject
{
    BOOL _exclusive; // +0x8
    BOOL _keepAlive; // +0x9
    unsigned int _appUuid; // +0xc
    unsigned long long _engineId; // +0x10
    NSString * _pkgPath; // +0x18
    NSString * _signatureKey; // +0x20
    NSString * _sessionId; // +0x28
}
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (unsigned long long)engineId;
- (void)setEngineId:(unsigned long long)arg1;
- (id)pkgPath;
- (void)setPkgPath:(id)arg1;
- (id)signatureKey;
- (void)setSignatureKey:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)exclusive;
- (void)setExclusive:(BOOL)arg1;
- (BOOL)keepAlive;
- (void)setKeepAlive:(BOOL)arg1;
- (void).cxx_destruct;
@end
