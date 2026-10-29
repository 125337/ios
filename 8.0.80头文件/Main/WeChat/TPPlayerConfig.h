@interface TPPlayerConfig : NSObject
{
    BOOL _userIsVip; // +0x8
    BOOL _dataReportEnable; // +0x9
    BOOL _playerReportEnable; // +0xa
    BOOL _newReportEnable; // +0xb
    BOOL _enableCheckLocalServer; // +0xc
    BOOL _enableCheckLocalServerOnCreate; // +0xd
    int _checkServerTimeoutMs; // +0x10
    int _serverCheckTimeInterval; // +0x14
    NSString * _guid; // +0x18
    long long _proxyPlatform; // +0x20
    NSString * _proxyOutNetIP; // +0x28
    NSString * _userUin; // +0x30
    NSString * _abUserId; // +0x38
    NSString * _appName; // +0x40
    NSString * _appVersion; // +0x48
    NSString * _appBuildVersion; // +0x50
    NSString * _userUpc; // +0x58
    long long _userUpcState; // +0x60
    long long _platform; // +0x68
}
+ (id)sharedInstance;
- (id)guid;
- (void)setGuid:(id)arg1;
- (long long)proxyPlatform;
- (void)setProxyPlatform:(long long)arg1;
- (id)proxyOutNetIP;
- (void)setProxyOutNetIP:(id)arg1;
- (id)userUin;
- (void)setUserUin:(id)arg1;
- (BOOL)userIsVip;
- (void)setUserIsVip:(BOOL)arg1;
- (id)abUserId;
- (void)setAbUserId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)appVersion;
- (void)setAppVersion:(id)arg1;
- (id)appBuildVersion;
- (void)setAppBuildVersion:(id)arg1;
- (id)userUpc;
- (void)setUserUpc:(id)arg1;
- (long long)userUpcState;
- (void)setUserUpcState:(long long)arg1;
- (long long)platform;
- (void)setPlatform:(long long)arg1;
- (BOOL)dataReportEnable;
- (void)setDataReportEnable:(BOOL)arg1;
- (BOOL)playerReportEnable;
- (void)setPlayerReportEnable:(BOOL)arg1;
- (BOOL)newReportEnable;
- (void)setNewReportEnable:(BOOL)arg1;
- (int)checkServerTimeoutMs;
- (void)setCheckServerTimeoutMs:(int)arg1;
- (int)serverCheckTimeInterval;
- (void)setServerCheckTimeInterval:(int)arg1;
- (BOOL)enableCheckLocalServer;
- (void)setEnableCheckLocalServer:(BOOL)arg1;
- (BOOL)enableCheckLocalServerOnCreate;
- (void)setEnableCheckLocalServerOnCreate:(BOOL)arg1;
- (void).cxx_destruct;
@end
