@interface WAReportSkylineOpConfigItem : WAReportBaseItem
{
    unsigned int _exptGroupId; // +0x8
    unsigned int _hitSrcType; // +0xc
    unsigned int _appUin; // +0x10
    unsigned int _jsDataType; // +0x14
    NSString * _libVersion; // +0x18
    NSString * _libUpdateTime; // +0x20
    NSString * _exptParam; // +0x28
}
+ (id)createWithAppId:(id)arg1 appVersion:(unsigned long long)arg2 appState:(unsigned long long)arg3 libVersion:(id)arg4 libUpdateTime:(id)arg5 exptGroupId:(unsigned int)arg6 exptParam:(id)arg7 hitSrcType:(unsigned int)arg8 appUin:(unsigned int)arg9 jsDataType:(unsigned int)arg10;
- (int)reportID;
- (id)reportString;
- (id)libVersion;
- (void)setLibVersion:(id)arg1;
- (id)libUpdateTime;
- (void)setLibUpdateTime:(id)arg1;
- (unsigned int)exptGroupId;
- (void)setExptGroupId:(unsigned int)arg1;
- (id)exptParam;
- (void)setExptParam:(id)arg1;
- (unsigned int)hitSrcType;
- (void)setHitSrcType:(unsigned int)arg1;
- (unsigned int)appUin;
- (void)setAppUin:(unsigned int)arg1;
- (unsigned int)jsDataType;
- (void)setJsDataType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

