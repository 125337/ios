@interface WCAgreementCheckBox : UIView <ILinkEventExt>
{
    BOOL _selected; // +0x8
    BOOL _autoExpandHitArea; // +0x9
    BOOL _isEnable; // +0xa
    BOOL _isOverlay; // +0xb
    BOOL _needsUpdateAccessibility; // +0xc
    id /* block */ _selectBlock; // +0x10
    id /* block */ _tapLinkBlock; // +0x18
    NSString * _agreement; // +0x20
    UIColor * _textColor; // +0x28
    UIFont * _font; // +0x30
    double _iconLength; // +0x38
    UIImageView * _iconView; // +0x40
    RichTextView * _richTextView; // +0x48
    UITapGestureRecognizer * _tapGesture; // +0x50
    UIColor * _selectedIconColor; // +0x58
    UIColor * _unselectedIconColor; // +0x60
    unsigned long long _sizeType; // +0x68
    NSMutableArray * _accessibilityElements; // +0x70
    UIEdgeInsets _expandHitAreaInsets; // +0x78
}
- (id)initWithSizeType:(unsigned long long)arg1 isEnable:(BOOL)arg2 isOverlay:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initGestures;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (double)richTextViewMaxWidthFromWidth:(double)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)callSelectBlockIfNeeded;
- (void)setAgreement:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setAutoExpandHitArea:(BOOL)arg1;
- (double)iconLength;
- (void)doSelect;
- (void)shake;
- (void)adjustExpandHitAreaInsetsIfNeeded;
- (void)updateAccessibilityIfNeeded;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onTapCheckBox:(id)arg1;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)isSelected;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (id /* block */)tapLinkBlock;
- (void)setTapLinkBlock:(id /* block */)arg1;
- (id)agreement;
- (id)textColor;
- (id)font;
- (void)setIconLength:(double)arg1;
- (BOOL)autoExpandHitArea;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)selectedIconColor;
- (void)setSelectedIconColor:(id)arg1;
- (id)unselectedIconColor;
- (void)setUnselectedIconColor:(id)arg1;
- (BOOL)isEnable;
- (void)setIsEnable:(BOOL)arg1;
- (unsigned long long)sizeType;
- (void)setSizeType:(unsigned long long)arg1;
- (BOOL)isOverlay;
- (void)setIsOverlay:(BOOL)arg1;
- (UIEdgeInsets)expandHitAreaInsets;
- (void)setExpandHitAreaInsets:(UIEdgeInsets)arg1;
- (id)accessibilityElements;
- (void)setAccessibilityElements:(id)arg1;
- (BOOL)needsUpdateAccessibility;
- (void)setNeedsUpdateAccessibility:(BOOL)arg1;
- (void).cxx_destruct;
@end
