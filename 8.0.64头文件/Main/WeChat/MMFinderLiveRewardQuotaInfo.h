@interface MMFinderLiveRewardQuotaInfo : NSObject <PBCoding>
{
    BOOL _lastFaceVaried; // +0x8
    unsigned int _lastExceedRewardQuotaRemindMsgTime; // +0xc
    unsigned long long _lastRewardQuota; // +0x10
    unsigned long long _lastWecoinBalance; // +0x18
    unsigned long long _lastExceedRewardQuota; // +0x20
}
+ (void)PBArrayAdd_lastExceedRewardQuotaRemindMsgTime;
+ (void)PBArrayAdd_lastRewardQuota;
+ (void)PBArrayAdd_lastWecoinBalance;
+ (void)PBArrayAdd_lastFaceVaried;
+ (void)PBArrayAdd_lastExceedRewardQuota;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)lastExceedRewardQuotaRemindMsgTime;
- (void)setLastExceedRewardQuotaRemindMsgTime:(unsigned int)arg1;
- (unsigned long long)lastRewardQuota;
- (void)setLastRewardQuota:(unsigned long long)arg1;
- (unsigned long long)lastWecoinBalance;
- (void)setLastWecoinBalance:(unsigned long long)arg1;
- (BOOL)lastFaceVaried;
- (void)setLastFaceVaried:(BOOL)arg1;
- (unsigned long long)lastExceedRewardQuota;
- (void)setLastExceedRewardQuota:(unsigned long long)arg1;
@end
