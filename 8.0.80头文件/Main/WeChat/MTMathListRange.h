@interface MTMathListRange : NSObject
{
    MTMathListIndex * _start; // +0x8
    unsigned long long _length; // +0x10
}
+ (id)makeRange:(id)arg1 length:(unsigned long long)arg2;
+ (id)makeRange:(id)arg1;
+ (id)makeRangeForIndex:(unsigned long long)arg1;
+ (id)makeRangeForRange:(_NSRange)arg1;
+ (id)unionRanges:(id)arg1;
- (id)initWithStart:(id)arg1 length:(unsigned long long)arg2;
- (id)description;
- (id)subIndexRange;
- (_NSRange)finalRange;
- (id)unionRange:(id)arg1;
- (id)start;
- (unsigned long long)length;
- (void).cxx_destruct;
@end
