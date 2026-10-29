@interface WCAdInteractionResourceLayoutInfo : NSObject <NSCoding>
{
    double _oriWidth; // +0x8
    double _oriHeight; // +0x10
    double _oriPaddingLeft; // +0x18
    double _oriPaddingRight; // +0x20
    double _oriPaddingTop; // +0x28
    double _oriPaddingBottom; // +0x30
    unsigned long long _safeAreaTypeTop; // +0x38
    unsigned long long _safeAreaTypeBottom; // +0x40
    unsigned long long _safeAreaTypeLeft; // +0x48
    unsigned long long _safeAreaTypeRight; // +0x50
    unsigned long long _verticalAlignType; // +0x58
    unsigned long long _horizontalAlignType; // +0x60
    double _absolutePositionX; // +0x68
    double _absolutePositionY; // +0x70
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)width;
- (double)height;
- (double)paddingLeft;
- (double)paddingRight;
- (double)paddingTop;
- (double)paddingBottom;
- (double)oriWidth;
- (void)setOriWidth:(double)arg1;
- (double)oriHeight;
- (void)setOriHeight:(double)arg1;
- (double)oriPaddingLeft;
- (void)setOriPaddingLeft:(double)arg1;
- (double)oriPaddingRight;
- (void)setOriPaddingRight:(double)arg1;
- (double)oriPaddingTop;
- (void)setOriPaddingTop:(double)arg1;
- (double)oriPaddingBottom;
- (void)setOriPaddingBottom:(double)arg1;
- (unsigned long long)safeAreaTypeTop;
- (void)setSafeAreaTypeTop:(unsigned long long)arg1;
- (unsigned long long)safeAreaTypeBottom;
- (void)setSafeAreaTypeBottom:(unsigned long long)arg1;
- (unsigned long long)safeAreaTypeLeft;
- (void)setSafeAreaTypeLeft:(unsigned long long)arg1;
- (unsigned long long)safeAreaTypeRight;
- (void)setSafeAreaTypeRight:(unsigned long long)arg1;
- (unsigned long long)verticalAlignType;
- (void)setVerticalAlignType:(unsigned long long)arg1;
- (unsigned long long)horizontalAlignType;
- (void)setHorizontalAlignType:(unsigned long long)arg1;
- (double)absolutePositionX;
- (void)setAbsolutePositionX:(double)arg1;
- (double)absolutePositionY;
- (void)setAbsolutePositionY:(double)arg1;
@end
