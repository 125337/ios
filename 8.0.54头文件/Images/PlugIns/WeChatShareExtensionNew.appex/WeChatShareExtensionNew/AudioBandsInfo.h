@interface AudioBandsInfo : NSObject
{
    int _startIndex; // +0x8
    int _endIndex; // +0xc
}
+ (id)createWith:(float)arg1 upperFrequency:(float)arg2 bandWidth:(float)arg3;
- (float)getMaxAmplitude:(float *)arg1 length:(int)arg2;
- (int)startIndex;
- (void)setStartIndex:(int)arg1;
- (int)endIndex;
- (void)setEndIndex:(int)arg1;
@end

