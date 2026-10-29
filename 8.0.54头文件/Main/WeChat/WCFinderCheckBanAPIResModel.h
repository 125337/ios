@interface WCFinderCheckBanAPIResModel : NSObject
{
    BOOL _isPenalized; // +0x8
    NSString * _path; // +0x10
    unsigned long long _businessType; // +0x18
    unsigned long long _penalizedReasonType; // +0x20
    long long _willPenaltyGapCount; // +0x28
    long long _willFreeGapCount; // +0x30
    long long _limitCtrlInfoReceiveTs; // +0x38
}
- (id)initWithRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (BOOL)isPenalized;
- (void)setIsPenalized:(BOOL)arg1;
- (unsigned long long)penalizedReasonType;
- (void)setPenalizedReasonType:(unsigned long long)arg1;
- (long long)willPenaltyGapCount;
- (void)setWillPenaltyGapCount:(long long)arg1;
- (long long)willFreeGapCount;
- (void)setWillFreeGapCount:(long long)arg1;
- (long long)limitCtrlInfoReceiveTs;
- (void)setLimitCtrlInfoReceiveTs:(long long)arg1;
- (void).cxx_destruct;
@end

