@interface WAReportSplashAdItem : WAReportBaseItem
{
    BOOL _serviceInjectReady; // +0x8
    int _isPreloaded; // +0xc
    int _isWorker; // +0x10
    unsigned int _displayMode; // +0x14
    unsigned long long _costTimeMs; // +0x18
    unsigned long long _startTimeStampMs; // +0x20
    unsigned long long _endTimeStampMs; // +0x28
    unsigned long long _showAdState; // +0x30
    unsigned long long _shouldShowTimeStamp; // +0x38
    unsigned long long _willLayoutFirstStepViewTimeStamp; // +0x40
    unsigned long long _willLayoutAllViewTimeStamp; // +0x48
    unsigned long long _showTimeStamp; // +0x50
    unsigned long long _didLayoutFirstStepViewTimeStamp; // +0x58
    unsigned long long _didLayoutAllViewTimeStamp; // +0x60
    unsigned long long _checkStageTimeCost; // +0x68
    unsigned long long _layoutFirstStepViewTimeCost; // +0x70
    unsigned long long _layoutAllViewTimeCost; // +0x78
    unsigned long long _jsReceiveShouldShowTimeStamp; // +0x80
    unsigned long long _jsCallShowTimeStamp; // +0x88
    unsigned long long _shouldShowEventTimeCost; // +0x90
    unsigned long long _showEventTimeCost; // +0x98
    unsigned long long _checkShowAdTimeThreshold; // +0xa0
    unsigned long long _notShowAdErrorCode; // +0xa8
    unsigned long long _adOperateCallTime; // +0xb0
    unsigned long long _adOperateCallReceivedTime; // +0xb8
    unsigned long long _adOperateCallbackTime; // +0xc0
    unsigned long long _adOperateCallbackReceivedTime; // +0xc8
    unsigned long long _adOperrateCallCostTime; // +0xd0
    unsigned long long _adOperateCallClientCostTime; // +0xd8
    unsigned long long _codeBlockTimeThreshold; // +0xe0
    unsigned long long _publicLibVersion; // +0xe8
}
- (int)reportID;
- (id)reportString;
- (unsigned long long)costTimeMs;
- (void)setCostTimeMs:(unsigned long long)arg1;
- (unsigned long long)startTimeStampMs;
- (void)setStartTimeStampMs:(unsigned long long)arg1;
- (unsigned long long)endTimeStampMs;
- (void)setEndTimeStampMs:(unsigned long long)arg1;
- (unsigned long long)showAdState;
- (void)setShowAdState:(unsigned long long)arg1;
- (unsigned long long)shouldShowTimeStamp;
- (void)setShouldShowTimeStamp:(unsigned long long)arg1;
- (unsigned long long)willLayoutFirstStepViewTimeStamp;
- (void)setWillLayoutFirstStepViewTimeStamp:(unsigned long long)arg1;
- (unsigned long long)willLayoutAllViewTimeStamp;
- (void)setWillLayoutAllViewTimeStamp:(unsigned long long)arg1;
- (unsigned long long)showTimeStamp;
- (void)setShowTimeStamp:(unsigned long long)arg1;
- (unsigned long long)didLayoutFirstStepViewTimeStamp;
- (void)setDidLayoutFirstStepViewTimeStamp:(unsigned long long)arg1;
- (unsigned long long)didLayoutAllViewTimeStamp;
- (void)setDidLayoutAllViewTimeStamp:(unsigned long long)arg1;
- (unsigned long long)checkStageTimeCost;
- (void)setCheckStageTimeCost:(unsigned long long)arg1;
- (unsigned long long)layoutFirstStepViewTimeCost;
- (void)setLayoutFirstStepViewTimeCost:(unsigned long long)arg1;
- (unsigned long long)layoutAllViewTimeCost;
- (void)setLayoutAllViewTimeCost:(unsigned long long)arg1;
- (unsigned long long)jsReceiveShouldShowTimeStamp;
- (void)setJsReceiveShouldShowTimeStamp:(unsigned long long)arg1;
- (unsigned long long)jsCallShowTimeStamp;
- (void)setJsCallShowTimeStamp:(unsigned long long)arg1;
- (unsigned long long)shouldShowEventTimeCost;
- (void)setShouldShowEventTimeCost:(unsigned long long)arg1;
- (unsigned long long)showEventTimeCost;
- (void)setShowEventTimeCost:(unsigned long long)arg1;
- (unsigned long long)checkShowAdTimeThreshold;
- (void)setCheckShowAdTimeThreshold:(unsigned long long)arg1;
- (unsigned long long)notShowAdErrorCode;
- (void)setNotShowAdErrorCode:(unsigned long long)arg1;
- (unsigned long long)adOperateCallTime;
- (void)setAdOperateCallTime:(unsigned long long)arg1;
- (unsigned long long)adOperateCallReceivedTime;
- (void)setAdOperateCallReceivedTime:(unsigned long long)arg1;
- (unsigned long long)adOperateCallbackTime;
- (void)setAdOperateCallbackTime:(unsigned long long)arg1;
- (unsigned long long)adOperateCallbackReceivedTime;
- (void)setAdOperateCallbackReceivedTime:(unsigned long long)arg1;
- (unsigned long long)adOperrateCallCostTime;
- (void)setAdOperrateCallCostTime:(unsigned long long)arg1;
- (unsigned long long)adOperateCallClientCostTime;
- (void)setAdOperateCallClientCostTime:(unsigned long long)arg1;
- (unsigned long long)codeBlockTimeThreshold;
- (void)setCodeBlockTimeThreshold:(unsigned long long)arg1;
- (BOOL)serviceInjectReady;
- (void)setServiceInjectReady:(BOOL)arg1;
- (unsigned long long)publicLibVersion;
- (void)setPublicLibVersion:(unsigned long long)arg1;
- (int)isPreloaded;
- (void)setIsPreloaded:(int)arg1;
- (int)isWorker;
- (void)setIsWorker:(int)arg1;
- (unsigned int)displayMode;
- (void)setDisplayMode:(unsigned int)arg1;
@end

