@interface MMPageSheetNavigationBar : UIView
{
    BOOL _isChildPage; // +0x8
    BOOL _preferredCenterAlignment; // +0x9
    BOOL _isTranslucent; // +0xa
    BOOL _isNavAddDragDown; // +0xb
    id <MMPageSheetNavigationBarDelegate> _delegate; // +0x10
    MMPageSheetConfig * _config; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _subTitleLabel; // +0x28
    MMUIButton * _dragDownButton; // +0x30
    UIImageView * _iconImageView; // +0x38
    UIView * _leftNavButton; // +0x40
    UIView * _rightNavButton; // +0x48
    NSArray * _leftBarButtonItems; // +0x50
    NSArray * _rightBarButtonItems; // +0x58
    UIView * _customTitleView; // +0x60
    UIView * _titleRightIconView; // +0x68
    UIStackView * _leftButtonStackView; // +0x70
    UIStackView * _rightButtonStackView; // +0x78
    UIView * _navSepLine; // +0x80
    MMPageSheetProgressiveDragView * _progressiveDragDownView; // +0x88
    MMPageSheetProgressiveAnimationView * _progressiveStickDragDownView; // +0x90
    long long _navType; // +0x98
    double _leftSideLeftMargin; // +0xa0
    double _titleOffset; // +0xa8
}
- (void)updateConfig:(id)arg1 isChildPage:(BOOL)arg2;
- (id)extractConstrainedCsutomViewFromButtonItem:(id)arg1;
- (void)addPressedEventsForButton:(id)arg1;
- (void)buttonDidGetPressed:(id)arg1;
- (void)buttonDidGetReleased:(id)arg1;
- (void)layoutSubviews;
- (void)clickCloseButton:(id)arg1;
- (void)clickDragDownButton:(id)arg1;
- (id)makeCloseButtonWithImageColor:(id)arg1 style:(unsigned int)arg2;
- (id)makeBackButtonWithImageColor:(id)arg1;
- (void)applyGradientMaskToLabel:(id)arg1;
- (void)applyLeftGradientMaskToLabel:(id)arg1;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)iconImageView;
- (id)dragDownButton;
- (id)progressiveDragDownView;
- (id)progressiveStickDragDownView;
- (id)leftButtonStackView;
- (id)rightButtonStackView;
- (void)setLeftNavButton:(id)arg1;
- (void)setRightNavButton:(id)arg1;
- (void)setCustomTitleView:(id)arg1;
- (id)navSepLine;
- (void)onPageSheetDidAppear;
- (void)onPageSheetDragToDismissOffset:(double)arg1;
- (void)onPageSheetDragToDismissOffset:(double)arg1 animated:(BOOL)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)fixSizeAndAddArrangedSubview:(id)arg1 onStackView:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isChildPage;
- (void)setIsChildPage:(BOOL)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setDragDownButton:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (id)leftNavButton;
- (id)rightNavButton;
- (id)leftBarButtonItems;
- (void)setLeftBarButtonItems:(id)arg1;
- (id)rightBarButtonItems;
- (void)setRightBarButtonItems:(id)arg1;
- (id)customTitleView;
- (id)titleRightIconView;
- (void)setTitleRightIconView:(id)arg1;
- (void)setLeftButtonStackView:(id)arg1;
- (void)setRightButtonStackView:(id)arg1;
- (void)setNavSepLine:(id)arg1;
- (void)setProgressiveDragDownView:(id)arg1;
- (void)setProgressiveStickDragDownView:(id)arg1;
- (long long)navType;
- (void)setNavType:(long long)arg1;
- (BOOL)preferredCenterAlignment;
- (void)setPreferredCenterAlignment:(BOOL)arg1;
- (BOOL)isTranslucent;
- (void)setIsTranslucent:(BOOL)arg1;
- (double)leftSideLeftMargin;
- (void)setLeftSideLeftMargin:(double)arg1;
- (double)titleOffset;
- (void)setTitleOffset:(double)arg1;
- (BOOL)isNavAddDragDown;
- (void)setIsNavAddDragDown:(BOOL)arg1;
- (void).cxx_destruct;
@end
