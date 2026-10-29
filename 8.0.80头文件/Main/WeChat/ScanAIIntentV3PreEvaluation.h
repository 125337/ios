@interface ScanAIIntentV3PreEvaluation : NSObject
{
    ScanAIIntentCandidate * _candidate; // +0x8
    double _rankScore; // +0x10
    long long _priority; // +0x18
    unsigned long long _baseRank; // +0x20
}
- (id)candidate;
- (void)setCandidate:(id)arg1;
- (double)rankScore;
- (void)setRankScore:(double)arg1;
- (long long)priority;
- (void)setPriority:(long long)arg1;
- (unsigned long long)baseRank;
- (void)setBaseRank:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
