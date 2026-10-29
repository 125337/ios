@interface MixNumber : NSObject
{
    unsigned long long _end; // +0x8
    unsigned long long _start; // +0x10
}
- (unsigned long long)end;
- (void)setEnd:(unsigned long long)arg1;
- (unsigned long long)start;
- (void)setStart:(unsigned long long)arg1;
@end

