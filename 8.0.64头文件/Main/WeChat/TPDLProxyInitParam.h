@interface TPDLProxyInitParam : NSObject
{
    BOOL _enableCheckLocalServer; // +0x8
    BOOL _enableCheckLocalServerOnCreate; // +0x9
    int _platform; // +0xc
    int _checkTimeout; // +0x10
    int _localServerCheckTimeInterval; // +0x14
    NSString * _appVer; // +0x18
    NSString * _guid; // +0x20
    NSString * _cacheDir; // +0x28
    NSString * _dataDir; // +0x30
    NSString * _configStr; // +0x38
}
- (id)initWithPlatform:(int)arg1 appVer:(id)arg2 guid:(id)arg3;
- (id)initWithPlatform:(int)arg1 appVer:(id)arg2 guid:(id)arg3 dataDir:(id)arg4;
- (id)initWithPlatform:(int)arg1 appVer:(id)arg2 guid:(id)arg3 cacheDir:(id)arg4 dataDir:(id)arg5 configStr:(id)arg6;
- (int)platform;
- (void)setPlatform:(int)arg1;
- (id)appVer;
- (void)setAppVer:(id)arg1;
- (id)guid;
- (void)setGuid:(id)arg1;
- (id)cacheDir;
- (void)setCacheDir:(id)arg1;
- (id)dataDir;
- (void)setDataDir:(id)arg1;
- (id)configStr;
- (void)setConfigStr:(id)arg1;
- (int)checkTimeout;
- (void)setCheckTimeout:(int)arg1;
- (int)localServerCheckTimeInterval;
- (void)setLocalServerCheckTimeInterval:(int)arg1;
- (BOOL)enableCheckLocalServer;
- (void)setEnableCheckLocalServer:(BOOL)arg1;
- (BOOL)enableCheckLocalServerOnCreate;
- (void)setEnableCheckLocalServerOnCreate:(BOOL)arg1;
- (void).cxx_destruct;
@end
