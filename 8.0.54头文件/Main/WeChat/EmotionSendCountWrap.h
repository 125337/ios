@interface EmotionSendCountWrap : MMObject <PBCoding>
{
    BOOL _hasRewarded; // +0x8
    unsigned int _totalSendTimes; // +0xc
    unsigned int _lastShowTipsTime; // +0x10
    int _retryTimes; // +0x14
}
+ (void)PBArrayAdd_totalSendTimes;
+ (void)PBArrayAdd_lastShowTipsTime;
+ (void)PBArrayAdd_retryTimes;
+ (void)PBArrayAdd_hasRewarded;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)needShowTips;
- (id)description;
- (unsigned int)totalSendTimes;
- (void)setTotalSendTimes:(unsigned int)arg1;
- (unsigned int)lastShowTipsTime;
- (void)setLastShowTipsTime:(unsigned int)arg1;
- (int)retryTimes;
- (void)setRetryTimes:(int)arg1;
- (BOOL)hasRewarded;
- (void)setHasRewarded:(BOOL)arg1;
@end

