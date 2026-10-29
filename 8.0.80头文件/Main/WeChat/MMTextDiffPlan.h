@interface MMTextDiffPlan : NSObject
{
    BOOL _wholeRewrite; // +0x8
    BOOL _timedOut; // +0x9
    NSArray * _operations; // +0x10
    unsigned long long _lcsLength; // +0x18
    unsigned long long _changedCount; // +0x20
    double _changedRatio; // +0x28
}
- (id)operations;
- (void)setOperations:(id)arg1;
- (BOOL)wholeRewrite;
- (void)setWholeRewrite:(BOOL)arg1;
- (BOOL)timedOut;
- (void)setTimedOut:(BOOL)arg1;
- (unsigned long long)lcsLength;
- (void)setLcsLength:(unsigned long long)arg1;
- (unsigned long long)changedCount;
- (void)setChangedCount:(unsigned long long)arg1;
- (double)changedRatio;
- (void)setChangedRatio:(double)arg1;
- (void).cxx_destruct;
@end
