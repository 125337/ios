@interface TextStatePublishIconButton : UIControl
{
    BOOL _hideDescription; // +0x8
    BOOL _hideArrow; // +0x9
    BOOL _autoExpandHitArea; // +0xa
    BOOL _showingRedDot; // +0xb
    BOOL _showBackground; // +0xc
    BOOL _profileClusterMode; // +0xd
    unsigned int _redDotStyle; // +0x10
    UIColor * _tintColor; // +0x18
    TextStateIcon * _iconWrap; // +0x20
    NSString * _customIconDescription; // +0x28
    TextStateModel * _textStateModel; // +0x30
    NSString * _forceDescription; // +0x38
    double _iconSideLength; // +0x40
    MMWebImageView * _iconImageView; // +0x48
    MMUILabel * _iconDescriptionLabel; // +0x50
    UIImageView * _arrowImageView; // +0x58
    UIView * _redDotView; // +0x60
    UIView * _backgroundView; // +0x68
    UIImageView * _profileTextIconBackgroundView; // +0x70
    UIView * _profileTextIconMaskView; // +0x78
    MMUILabel * _profileTextIconLabel; // +0x80
    MMWebImageView * _profileTrailingIconView; // +0x88
    CGSize _arrowImageSize; // +0x90
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
- (void)configureProfileClusterTextIcon:(id)arg1 trailingIcon:(id)arg2;
- (void)setIconSideLength:(double)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)addShadowEffect;
- (void)showRedDot;
- (void)hideRedDot;
- (void)showBackground;
- (void)hideBackground;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (unsigned int)redDotStyle;
- (id)iconWrap;
- (id)customIconDescription;
- (id)textStateModel;
- (void)setTextStateModel:(id)arg1;
- (id)forceDescription;
- (double)iconSideLength;
- (CGSize)arrowImageSize;
- (void)setArrowImageSize:(CGSize)arg1;
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
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)isShowingRedDot;
- (void)setShowingRedDot:(BOOL)arg1;
- (BOOL)isShowBackground;
- (void)setShowBackground:(BOOL)arg1;
- (id)profileTextIconBackgroundView;
- (void)setProfileTextIconBackgroundView:(id)arg1;
- (id)profileTextIconMaskView;
- (void)setProfileTextIconMaskView:(id)arg1;
- (id)profileTextIconLabel;
- (void)setProfileTextIconLabel:(id)arg1;
- (id)profileTrailingIconView;
- (void)setProfileTrailingIconView:(id)arg1;
- (BOOL)profileClusterMode;
- (void)setProfileClusterMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
