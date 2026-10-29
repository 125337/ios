@interface ScanAIIntentQualityContext : NSObject
{
    long long _decisionState; // +0x8
    long long _mode; // +0x10
    ScanAIIntentCanonicalFrame * _frame; // +0x18
    NSDictionary * _globalMetrics; // +0x20
}
- (long long)decisionState;
- (void)setDecisionState:(long long)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)frame;
- (void)setFrame:(id)arg1;
- (id)globalMetrics;
- (void)setGlobalMetrics:(id)arg1;
- (void).cxx_destruct;
@end
