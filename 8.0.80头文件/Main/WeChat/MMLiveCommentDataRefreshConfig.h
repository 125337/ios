@interface MMLiveCommentDataRefreshConfig : NSObject
{
    BOOL _isSpeedDifference; // +0x8
    BOOL _isCustomAppendDelay; // +0x9
    unsigned int _maxMsgTempCacheCnt; // +0xc
    unsigned int _maxRefreshMsgCntOnce; // +0x10
    unsigned int _maxRefreshHistoryMsgCntOnce; // +0x14
    unsigned int _refreshHistoryMsgInterval; // +0x18
    unsigned int _refreshMsgIntervalMs; // +0x1c
    unsigned int _minimunShowMsgLikeCnt; // +0x20
    unsigned int _customRefreshFastMsgCntOnce; // +0x24
    unsigned int _customRefreshSlowMsgCntOnce; // +0x28
    unsigned int _customAppendMsgCntOnce; // +0x2c
    unsigned int _customAppendMsgCntOnceInSmoothMode; // +0x30
    unsigned int _customAppendMsgCntOnceInLowPowerMode; // +0x34
    unsigned int _maxFloatMsgTrackNum; // +0x38
    double _appendBeginDelayDuration; // +0x40
    double _linearAppendScrollSpeed; // +0x48
    double _appendBeginDelayDurationInSmoothMode; // +0x50
    double _appendBeginDelayDurationInLowPowerMode; // +0x58
    double _landscapeBarrageMoveDuration; // +0x60
    double _landscapeBarrageTriggerInterval; // +0x68
}
+ (unsigned int)defaultMaxMsgTempCacheCntForTaskId:(id)arg1;
+ (unsigned int)defaultMaxMsgTempCacheCntForTaskId:(id)arg1 boxId:(id)arg2;
+ (unsigned int)defaultMaxRefreshMsgCntOnceForTaskId:(id)arg1;
+ (unsigned int)defaultRefreshMsgIntervalMsForTaskId:(id)arg1;
+ (unsigned int)defaultMaxRefreshHistoryMsgCntOnceForTaskId:(id)arg1;
+ (unsigned int)defaultRefreshHistoryMsgIntervalForTaskId:(id)arg1;
+ (BOOL)defaultSpeedDifferenceForTaskId:(id)arg1;
+ (BOOL)defaultCustomAppendDelayForTaskId:(id)arg1;
+ (unsigned int)defaultCustomAppendMsgCntOnceForTaskId:(id)arg1;
+ (double)defaultAppendBeginDelayDurationForTaskId:(id)arg1;
+ (double)defaultLinearAppendScrollSpeedForTaskId:(id)arg1;
+ (unsigned int)defaultCustomAppendMsgCntOnceInSmoothModeForTaskId:(id)arg1;
+ (double)defaultAppendBeginDelayDurationInSmoothModeForTaskId:(id)arg1;
+ (unsigned int)defaultCustomAppendMsgCntOnceInLowPowerModeForTaskId:(id)arg1;
+ (double)defaultAppendBeginDelayDurationInLowPowerModeForTaskId:(id)arg1;
+ (double)defaultLandscapeBarrageMoveDurationForTaskId:(id)arg1;
+ (double)defaultLandscapeBarrageTriggerIntervalForTaskId:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)setMaxMsgTempCacheCnt:(unsigned int)arg1;
- (void)setMaxRefreshMsgCntOnce:(unsigned int)arg1;
- (void)setMaxRefreshHistoryMsgCntOnce:(unsigned int)arg1;
- (void)setRefreshMsgIntervalMs:(unsigned int)arg1;
- (void)setIsSpeedDifference:(BOOL)arg1;
- (void)setIsCustomAppendDelay:(BOOL)arg1;
- (void)setCustomAppendMsgCntOnce:(unsigned int)arg1;
- (void)setAppendBeginDelayDuration:(double)arg1;
- (void)setLinearAppendScrollSpeed:(double)arg1;
- (void)setCustomAppendMsgCntOnceInSmoothMode:(unsigned int)arg1;
- (void)setAppendBeginDelayDurationInSmoothMode:(double)arg1;
- (void)setCustomAppendMsgCntOnceInLowPowerMode:(unsigned int)arg1;
- (void)setAppendBeginDelayDurationInLowPowerMode:(double)arg1;
- (void)setLandscapeBarrageMoveDuration:(double)arg1;
- (void)setLandscapeBarrageTriggerInterval:(double)arg1;
- (unsigned int)maxMsgTempCacheCnt;
- (unsigned int)maxRefreshMsgCntOnce;
- (unsigned int)maxRefreshHistoryMsgCntOnce;
- (unsigned int)refreshHistoryMsgInterval;
- (void)setRefreshHistoryMsgInterval:(unsigned int)arg1;
- (unsigned int)refreshMsgIntervalMs;
- (unsigned int)minimunShowMsgLikeCnt;
- (void)setMinimunShowMsgLikeCnt:(unsigned int)arg1;
- (unsigned int)customRefreshFastMsgCntOnce;
- (void)setCustomRefreshFastMsgCntOnce:(unsigned int)arg1;
- (unsigned int)customRefreshSlowMsgCntOnce;
- (void)setCustomRefreshSlowMsgCntOnce:(unsigned int)arg1;
- (BOOL)isSpeedDifference;
- (BOOL)isCustomAppendDelay;
- (unsigned int)customAppendMsgCntOnce;
- (double)appendBeginDelayDuration;
- (double)linearAppendScrollSpeed;
- (unsigned int)customAppendMsgCntOnceInSmoothMode;
- (double)appendBeginDelayDurationInSmoothMode;
- (unsigned int)customAppendMsgCntOnceInLowPowerMode;
- (double)appendBeginDelayDurationInLowPowerMode;
- (double)landscapeBarrageMoveDuration;
- (double)landscapeBarrageTriggerInterval;
- (unsigned int)maxFloatMsgTrackNum;
- (void)setMaxFloatMsgTrackNum:(unsigned int)arg1;
@end
