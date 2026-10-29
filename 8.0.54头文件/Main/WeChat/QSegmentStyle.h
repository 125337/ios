@interface QSegmentStyle : NSObject
{
    int _startIndex; // +0x8
    int _endIndex; // +0xc
    int _colorImageIndex; // +0x10
}
- (int)startIndex;
- (void)setStartIndex:(int)arg1;
- (int)endIndex;
- (void)setEndIndex:(int)arg1;
- (int)colorImageIndex;
- (void)setColorImageIndex:(int)arg1;
@end

