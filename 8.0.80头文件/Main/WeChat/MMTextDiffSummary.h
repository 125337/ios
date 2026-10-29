@interface MMTextDiffSummary : NSObject
{
    BOOL _wholeRewrite; // +0x8
    NSArray * _segments; // +0x10
    unsigned long long _targetLength; // +0x18
}
- (BOOL)wholeRewrite;
- (void)setWholeRewrite:(BOOL)arg1;
- (id)segments;
- (void)setSegments:(id)arg1;
- (unsigned long long)targetLength;
- (void)setTargetLength:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
