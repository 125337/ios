@interface RingToneHomePageActionReporter_23612 : KvReportBaseItem
{
    unsigned long long _action; // +0x8
    NSString * _feedID; // +0x10
    unsigned long long _feedType; // +0x18
    NSString * _toUserName; // +0x20
    unsigned long long _usageRange; // +0x28
    unsigned long long _valid; // +0x30
    unsigned long long _vibrateType; // +0x38
}
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)report:(unsigned long long)arg1 withRing:(id)arg2;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (unsigned long long)feedType;
- (void)setFeedType:(unsigned long long)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (unsigned long long)usageRange;
- (void)setUsageRange:(unsigned long long)arg1;
- (unsigned long long)valid;
- (void)setValid:(unsigned long long)arg1;
- (unsigned long long)vibrateType;
- (void)setVibrateType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

