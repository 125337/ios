@interface WCMemoryStatRecordBaseInfo : MatrixBaseModel
{
    BOOL _isValid; // +0x8
    unsigned long long _launchTime; // +0x10
    NSString * _userScene; // +0x18
    NSString * _systemVersion; // +0x20
    NSString * _appUUID; // +0x28
    NSData * _vmRegionsData; // +0x30
}
- (id)init;
- (unsigned long long)launchTime;
- (void)setLaunchTime:(unsigned long long)arg1;
- (id)userScene;
- (void)setUserScene:(id)arg1;
- (id)systemVersion;
- (void)setSystemVersion:(id)arg1;
- (id)appUUID;
- (void)setAppUUID:(id)arg1;
- (id)vmRegionsData;
- (void)setVmRegionsData:(id)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (void).cxx_destruct;
@end
