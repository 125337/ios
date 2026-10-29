@interface MMTextDiffSegment : NSObject
{
    unsigned long long _kind; // +0x8
    unsigned long long _oldLength; // +0x10
    unsigned long long _targetLength; // +0x18
}
- (unsigned long long)kind;
- (void)setKind:(unsigned long long)arg1;
- (unsigned long long)oldLength;
- (void)setOldLength:(unsigned long long)arg1;
- (unsigned long long)targetLength;
- (void)setTargetLength:(unsigned long long)arg1;
@end
