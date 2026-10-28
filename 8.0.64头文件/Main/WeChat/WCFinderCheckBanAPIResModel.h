@interface WCFinderCheckBanAPIResModel : NSObject
{
    BOOL _isPenalized; // +0x8
    BOOL _isFreqIgnoreLimit; // +0x9
    BOOL _isExemptNMControl; // +0xa
    NSString * _path; // +0x10
    unsigned long long _businessType; // +0x18
    unsigned long long _ctrlInfoBusinessType; // +0x20
    long long _lastTimeStamp; // +0x28
    unsigned long long _penalizedReasonType; // +0x30
    long long _willPenaltyGapCount; // +0x38
    long long _willFreeGapCount; // +0x40
    long long _limitCtrlInfoReceiveTs; // +0x48
    long long _winType; // +0x50
}
- (id)initWithRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (unsigned long long)ctrlInfoBusinessType;
- (void)setCtrlInfoBusinessType:(unsigned long long)arg1;
- (long long)lastTimeStamp;
- (void)setLastTimeStamp:(long long)arg1;
- (BOOL)isPenalized;
- (void)setIsPenalized:(BOOL)arg1;
- (BOOL)isFreqIgnoreLimit;
- (void)setIsFreqIgnoreLimit:(BOOL)arg1;
- (BOOL)isExemptNMControl;
- (void)setIsExemptNMControl:(BOOL)arg1;
- (unsigned long long)penalizedReasonType;
- (void)setPenalizedReasonType:(unsigned long long)arg1;
- (long long)willPenaltyGapCount;
- (void)setWillPenaltyGapCount:(long long)arg1;
- (long long)willFreeGapCount;
- (void)setWillFreeGapCount:(long long)arg1;
- (long long)limitCtrlInfoReceiveTs;
- (void)setLimitCtrlInfoReceiveTs:(long long)arg1;
- (long long)winType;
- (void)setWinType:(long long)arg1;
- (void).cxx_destruct;
@end
