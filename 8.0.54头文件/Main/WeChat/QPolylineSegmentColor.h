@interface QPolylineSegmentColor : NSObject
{
    int _startIndex; // +0x8
    int _endIndex; // +0xc
    UIColor * _color; // +0x10
    UIColor * _borderColor; // +0x18
    unsigned long long _indexOfColorPair; // +0x20
}
- (int)startIndex;
- (void)setStartIndex:(int)arg1;
- (int)endIndex;
- (void)setEndIndex:(int)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (unsigned long long)indexOfColorPair;
- (void)setIndexOfColorPair:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

