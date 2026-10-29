@interface WCActionAreaElementWrap : NSObject
{
    double _realWidth; // +0x8
    double _maxWidth; // +0x10
    double _minWidth; // +0x18
    double _adjustedWidth; // +0x20
    unsigned long long _displayLine; // +0x28
    NSArray * _subElements; // +0x30
    double _subElementSpacing; // +0x38
}
- (id)initWithSubElements:(id)arg1 subElementSpacing:(double)arg2;
- (double)realWidth;
- (double)maxWidth;
- (double)minWidth;
- (void)adjustSubElementsWidthFromBackToFront;
- (void)setRealWidth:(double)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setMinWidth:(double)arg1;
- (double)adjustedWidth;
- (void)setAdjustedWidth:(double)arg1;
- (unsigned long long)displayLine;
- (void)setDisplayLine:(unsigned long long)arg1;
- (id)subElements;
- (void)setSubElements:(id)arg1;
- (double)subElementSpacing;
- (void)setSubElementSpacing:(double)arg1;
- (void).cxx_destruct;
@end
