@interface LogFileRange : NSObject
{
    unsigned long long _startPos; // +0x8
    unsigned long long _endPos; // +0x10
}
- (id)initWithStartPos:(unsigned long long)arg1 endPos:(unsigned long long)arg2;
- (id)init;
- (unsigned long long)startPos;
- (void)setStartPos:(unsigned long long)arg1;
- (unsigned long long)endPos;
- (void)setEndPos:(unsigned long long)arg1;
@end
