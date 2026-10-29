@interface WCActionAreaElement : NSObject
{
    unsigned long long _elementType; // +0x8
    double _realWidth; // +0x10
    double _maxWidth; // +0x18
    double _minWidth; // +0x20
    double _adjustedWidth; // +0x28
    unsigned long long _displayLine; // +0x30
}
- (id)initWithType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)hashString;
- (unsigned long long)elementType;
- (void)setElementType:(unsigned long long)arg1;
- (double)realWidth;
- (void)setRealWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (double)minWidth;
- (void)setMinWidth:(double)arg1;
- (double)adjustedWidth;
- (void)setAdjustedWidth:(double)arg1;
- (unsigned long long)displayLine;
- (void)setDisplayLine:(unsigned long long)arg1;
@end

