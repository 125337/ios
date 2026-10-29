@interface StandardButtonConfiguration : NSObject
{
    BOOL _isAutoAdjustFont; // +0x8
    BOOL _inverse; // +0x9
    long long _buttonSize; // +0x10
    double _maxWidth; // +0x18
}
- (long long)buttonSize;
- (void)setButtonSize:(long long)arg1;
- (BOOL)isAutoAdjustFont;
- (void)setIsAutoAdjustFont:(BOOL)arg1;
- (BOOL)inverse;
- (void)setInverse:(BOOL)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
@end

