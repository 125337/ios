@interface WAMemStatInfo : NSObject
{
    BOOL _isCache; // +0x8
    unsigned int _appVersion; // +0xc
    unsigned int _openSeq; // +0x10
    unsigned int _lastTimeEnterBg; // +0x14
    NSString * _appID; // +0x18
    long long _processMemUsedWhenLaunch; // +0x20
}
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (BOOL)isCache;
- (void)setIsCache:(BOOL)arg1;
- (unsigned int)openSeq;
- (void)setOpenSeq:(unsigned int)arg1;
- (unsigned int)lastTimeEnterBg;
- (void)setLastTimeEnterBg:(unsigned int)arg1;
- (long long)processMemUsedWhenLaunch;
- (void)setProcessMemUsedWhenLaunch:(long long)arg1;
- (void).cxx_destruct;
@end
