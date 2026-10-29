@interface WAReportTaskClosedItem : WAReportBaseItem
{
    unsigned int _costTime; // +0x8
    unsigned int _isTriggerDownload; // +0xc
    unsigned int _preloadType; // +0x10
    unsigned int _isSyncUpdateContact; // +0x14
    unsigned int _isSyncLaunchCgi; // +0x18
    unsigned int _phase; // +0x1c
    unsigned int _splashADState; // +0x20
    unsigned int _isSyncJsApiInfoCgi; // +0x24
    unsigned int _isSyncABTestInfoCgi; // +0x28
    unsigned int _reason; // +0x2c
    unsigned int _subReason; // +0x30
    long long _startTimeStamp; // +0x38
    long long _endTimeStamp; // +0x40
}
- (int)reportID;
- (id)reportString;
- (long long)startTimeStamp;
- (void)setStartTimeStamp:(long long)arg1;
- (long long)endTimeStamp;
- (void)setEndTimeStamp:(long long)arg1;
- (unsigned int)costTime;
- (void)setCostTime:(unsigned int)arg1;
- (unsigned int)isTriggerDownload;
- (void)setIsTriggerDownload:(unsigned int)arg1;
- (unsigned int)preloadType;
- (void)setPreloadType:(unsigned int)arg1;
- (unsigned int)isSyncUpdateContact;
- (void)setIsSyncUpdateContact:(unsigned int)arg1;
- (unsigned int)isSyncLaunchCgi;
- (void)setIsSyncLaunchCgi:(unsigned int)arg1;
- (unsigned int)phase;
- (void)setPhase:(unsigned int)arg1;
- (unsigned int)splashADState;
- (void)setSplashADState:(unsigned int)arg1;
- (unsigned int)isSyncJsApiInfoCgi;
- (void)setIsSyncJsApiInfoCgi:(unsigned int)arg1;
- (unsigned int)isSyncABTestInfoCgi;
- (void)setIsSyncABTestInfoCgi:(unsigned int)arg1;
- (unsigned int)reason;
- (void)setReason:(unsigned int)arg1;
- (unsigned int)subReason;
- (void)setSubReason:(unsigned int)arg1;
@end

