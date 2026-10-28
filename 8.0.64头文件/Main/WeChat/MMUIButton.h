@interface MMUIButton : UIButton
{
    BOOL _autoExpandHitArea; // +0x8
    BOOL _absorbAction; // +0x9
    BOOL _wantsExtendedDynamicRangeContent; // +0xa
    long long _expandHitWidth; // +0x10
    long long _expandHitHeight; // +0x18
    id _customObject; // +0x20
    double _edrHeadroom; // +0x28
    double _intrinsicContentHorizontalMargin; // +0x30
    double _intrinsicContentVerticalMargin; // +0x38
    NSMutableDictionary * _imageDict; // +0x40
    UIEdgeInsets _touchInsets; // +0x48
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
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (double)edrHeadroom;
- (id)imageDict;
- (void)setWantsExtendedDynamicRangeContent:(BOOL)arg1;
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
- (BOOL)absorbAction;
- (void)setAbsorbAction:(BOOL)arg1;
- (BOOL)wantsExtendedDynamicRangeContent;
- (void)setEdrHeadroom:(double)arg1;
- (double)intrinsicContentHorizontalMargin;
- (void)setIntrinsicContentHorizontalMargin:(double)arg1;
- (double)intrinsicContentVerticalMargin;
- (void)setIntrinsicContentVerticalMargin:(double)arg1;
- (void)setImageDict:(id)arg1;
- (void).cxx_destruct;
@end
