@interface MMUIButton : UIButton
{
    BOOL _autoExpandHitArea; // +0x8
    long long _expandHitWidth; // +0x10
    long long _expandHitHeight; // +0x18
    id _customObject; // +0x20
    double _intrinsicContentHorizontalMargin; // +0x28
    double _intrinsicContentVerticalMargin; // +0x30
    UIEdgeInsets _touchInsets; // +0x38
}
+ (id /* block */)zz_create;
- (id)zz_setup;
- (void)updateWithDirection:(unsigned long long)arg1 spacing:(double)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)fitHoverStyle;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setNormalImage:(id)arg1 selectedImage:(id)arg2;
- (void)adjustTrimmedTextWhenBoldByClipping;
- (void)adjustTrimmedTextWhenBoldByAutoFont;
- (CGSize)intrinsicContentSize;
- (UIEdgeInsets)touchInsets;
- (void)setTouchInsets:(UIEdgeInsets)arg1;
- (long long)expandHitWidth;
- (void)setExpandHitWidth:(long long)arg1;
- (long long)expandHitHeight;
- (void)setExpandHitHeight:(long long)arg1;
- (BOOL)autoExpandHitArea;
- (void)setAutoExpandHitArea:(BOOL)arg1;
- (id)customObject;
- (void)setCustomObject:(id)arg1;
- (double)intrinsicContentHorizontalMargin;
- (void)setIntrinsicContentHorizontalMargin:(double)arg1;
- (double)intrinsicContentVerticalMargin;
- (void)setIntrinsicContentVerticalMargin:(double)arg1;
- (void).cxx_destruct;
@end

