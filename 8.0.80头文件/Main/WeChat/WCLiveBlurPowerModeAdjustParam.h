@interface WCLiveBlurPowerModeAdjustParam : NSObject
{
    BOOL _isSilenceHandle; // +0x8
    double _staticBlurPersistBadScoreTime; // +0x10
    double _staticBlurPersistGoodScoreTime; // +0x18
    unsigned long long _staticBlurPersistBadScoreMaxCnt; // +0x20
    unsigned long long _staticBlurPersistOrdinaryScoreMaxCnt; // +0x28
    NSArray * _staticBlurEnterCheckNumAdjustList; // +0x30
    unsigned long long _realTimeBlurEnterConstrastCheckCnt; // +0x38
    unsigned long long _realTimeBlurEnterColorDisCheckCnt; // +0x40
    double _similarContrastRatio; // +0x48
    double _similarColorDistance; // +0x50
    double _similarStandardRate; // +0x58
    double _monitorScheduleInterval; // +0x60
}
+ (id)createDefaultPowerModeAdjustParam;
+ (id)createZerothGearPowerModeAdjustParam;
+ (id)createFirstGearPowerModeAdjustParam;
+ (id)createSecondGearPowerModeAdjustParam;
+ (id)createThirdGearPowerModeAdjustParam;
+ (id)createFourthGearPowerModeAdjustParam;
- (double)staticBlurPersistBadScoreTime;
- (void)setStaticBlurPersistBadScoreTime:(double)arg1;
- (double)staticBlurPersistGoodScoreTime;
- (void)setStaticBlurPersistGoodScoreTime:(double)arg1;
- (unsigned long long)staticBlurPersistBadScoreMaxCnt;
- (void)setStaticBlurPersistBadScoreMaxCnt:(unsigned long long)arg1;
- (unsigned long long)staticBlurPersistOrdinaryScoreMaxCnt;
- (void)setStaticBlurPersistOrdinaryScoreMaxCnt:(unsigned long long)arg1;
- (id)staticBlurEnterCheckNumAdjustList;
- (void)setStaticBlurEnterCheckNumAdjustList:(id)arg1;
- (unsigned long long)realTimeBlurEnterConstrastCheckCnt;
- (void)setRealTimeBlurEnterConstrastCheckCnt:(unsigned long long)arg1;
- (unsigned long long)realTimeBlurEnterColorDisCheckCnt;
- (void)setRealTimeBlurEnterColorDisCheckCnt:(unsigned long long)arg1;
- (double)similarContrastRatio;
- (void)setSimilarContrastRatio:(double)arg1;
- (double)similarColorDistance;
- (void)setSimilarColorDistance:(double)arg1;
- (double)similarStandardRate;
- (void)setSimilarStandardRate:(double)arg1;
- (double)monitorScheduleInterval;
- (void)setMonitorScheduleInterval:(double)arg1;
- (BOOL)isSilenceHandle;
- (void)setIsSilenceHandle:(BOOL)arg1;
- (void).cxx_destruct;
@end
