@interface ScanAIIntentTextFilterDecision : NSObject
{
    BOOL _cacheable; // +0x8
    ScanAIIntentCandidate * _candidate; // +0x10
    long long _sourceState; // +0x18
    NSString * _reasonCode; // +0x20
}
- (id)candidate;
- (void)setCandidate:(id)arg1;
- (long long)sourceState;
- (void)setSourceState:(long long)arg1;
- (id)reasonCode;
- (void)setReasonCode:(id)arg1;
- (BOOL)cacheable;
- (void)setCacheable:(BOOL)arg1;
- (void).cxx_destruct;
@end
