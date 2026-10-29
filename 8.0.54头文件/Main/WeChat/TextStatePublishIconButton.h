@interface TextStatePublishIconButton : UIControl
{
    BOOL _hideDescription; // +0x8
    BOOL _hideArrow; // +0x9
    BOOL _autoExpandHitArea; // +0xa
    BOOL _showingRedDot; // +0xb
    unsigned int _redDotStyle; // +0xc
    UIColor * _tintColor; // +0x10
    TextStateIcon * _iconWrap; // +0x18
    NSString * _customIconDescription; // +0x20
    NSString * _forceDescription; // +0x28
    double _iconSideLength; // +0x30
    MMWebImageView * _iconImageView; // +0x38
    MMUILabel * _iconDescriptionLabel; // +0x40
    UIImageView * _arrowImageView; // +0x48
    UIView * _redDotView; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initDefaultValues;
- (void)initSubviews;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setRedDotStyle:(unsigned int)arg1;
- (void)setIconWrap:(id)arg1;
- (void)setCustomIconDescription:(id)arg1;
- (void)setForceDescription:(id)arg1;
- (void)refreshIconDescriptionLabel;
- (void)setIconSideLength:(double)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)addShadowEffect;
- (void)showRedDot;
- (void)hideRedDot;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (unsigned int)redDotStyle;
- (id)iconWrap;
- (id)customIconDescription;
- (id)forceDescription;
- (double)iconSideLength;
- (BOOL)hideDescription;
- (void)setHideDescription:(BOOL)arg1;
- (BOOL)hideArrow;
- (void)setHideArrow:(BOOL)arg1;
- (BOOL)autoExpandHitArea;
- (void)setAutoExpandHitArea:(BOOL)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)iconDescriptionLabel;
- (void)setIconDescriptionLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (BOOL)isShowingRedDot;
- (void)setShowingRedDot:(BOOL)arg1;
- (void).cxx_destruct;
@end

