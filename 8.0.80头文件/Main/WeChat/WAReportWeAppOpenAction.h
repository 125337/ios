@interface WAReportWeAppOpenAction : WAReportBaseItem
{
    unsigned int _isLaunch; // +0x8
    unsigned int _loadingType; // +0xc
    unsigned int _runningState; // +0x10
    unsigned int _userType; // +0x14
    unsigned int _launchMode; // +0x18
    unsigned int _coldStartMode; // +0x1c
    unsigned int _wxProcessColdStartTimeStamp; // +0x20
    unsigned long long _costTimeInMs; // +0x28
    unsigned long long _startTimeStampInMs; // +0x30
    unsigned long long _endTimeStampInMs; // +0x38
    NSString * _sceneData; // +0x40
    NSString * _reloadReferer; // +0x48
    NSString * _reloadReason; // +0x50
    NSString * _shortLink; // +0x58
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned long long)costTimeInMs;
- (void)setCostTimeInMs:(unsigned long long)arg1;
- (unsigned long long)startTimeStampInMs;
- (void)setStartTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)endTimeStampInMs;
- (void)setEndTimeStampInMs:(unsigned long long)arg1;
- (unsigned int)isLaunch;
- (void)setIsLaunch:(unsigned int)arg1;
- (unsigned int)loadingType;
- (void)setLoadingType:(unsigned int)arg1;
- (id)sceneData;
- (void)setSceneData:(id)arg1;
- (unsigned int)runningState;
- (void)setRunningState:(unsigned int)arg1;
- (id)reloadReferer;
- (void)setReloadReferer:(id)arg1;
- (id)reloadReason;
- (void)setReloadReason:(id)arg1;
- (unsigned int)userType;
- (void)setUserType:(unsigned int)arg1;
- (unsigned int)launchMode;
- (void)setLaunchMode:(unsigned int)arg1;
- (unsigned int)coldStartMode;
- (void)setColdStartMode:(unsigned int)arg1;
- (id)shortLink;
- (void)setShortLink:(id)arg1;
- (unsigned int)wxProcessColdStartTimeStamp;
- (void)setWxProcessColdStartTimeStamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end
