@interface CBTSourceRangeEntry : NSObject
{
    unsigned long long _contentStart; // +0x8
    unsigned long long _contentEnd; // +0x10
    unsigned long long _fullStart; // +0x18
    unsigned long long _fullEnd; // +0x20
    _NSRange _physicalRange; // +0x28
}
- (_NSRange)physicalRange;
- (void)setPhysicalRange:(_NSRange)arg1;
- (unsigned long long)contentStart;
- (void)setContentStart:(unsigned long long)arg1;
- (unsigned long long)contentEnd;
- (void)setContentEnd:(unsigned long long)arg1;
- (unsigned long long)fullStart;
- (void)setFullStart:(unsigned long long)arg1;
- (unsigned long long)fullEnd;
- (void)setFullEnd:(unsigned long long)arg1;
@end
