@interface MMAnchoredMenuHeaderView : UICollectionReusableView
{
    BOOL _showsCollapseIndicator; // +0x8
    UIView * _highlightBackdropView; // +0x10
    UIButton * _interactionButton; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UIView * _arrowContainerView; // +0x28
    UIImageView * _arrowView; // +0x30
    UIView * _dividerView; // +0x38
    double _arrowContainerLeftMargin; // +0x40
    double _titleLeftMargin; // +0x48
    double _dividerLeftMargin; // +0x50
    double _rightMargin; // +0x58
    id /* block */ _tapHandler; // +0x60
}
+ (double)heightForTitle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithTitle:(id)arg1 arrowContainerLeftMargin:(double)arg2 titleLeftMargin:(double)arg3 dividerLeftMargin:(double)arg4 rightMargin:(double)arg5 showsCollapseIndicator:(BOOL)arg6 tapHandler:(id /* block */)arg7;
- (void)prepareForExpansionAnimationWithTitleTranslation:(CGPoint)arg1 arrowTranslation:(CGPoint)arg2 dividerTranslation:(CGPoint)arg3 collapsedDividerAlpha:(double)arg4;
- (void)applyExpandedVisualState;
- (void)applyCollapsedVisualStateWithTitleTranslation:(CGPoint)arg1 arrowTranslation:(CGPoint)arg2 dividerTranslation:(CGPoint)arg3 collapsedDividerAlpha:(double)arg4;
- (void)onTouchDown;
- (void)onTouchCancelled;
- (void)onTouchUpInside;
- (id)highlightBackdropView;
- (void)setHighlightBackdropView:(id)arg1;
- (id)interactionButton;
- (void)setInteractionButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowContainerView;
- (void)setArrowContainerView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)dividerView;
- (void)setDividerView:(id)arg1;
- (double)arrowContainerLeftMargin;
- (void)setArrowContainerLeftMargin:(double)arg1;
- (double)titleLeftMargin;
- (void)setTitleLeftMargin:(double)arg1;
- (double)dividerLeftMargin;
- (void)setDividerLeftMargin:(double)arg1;
- (double)rightMargin;
- (void)setRightMargin:(double)arg1;
- (BOOL)showsCollapseIndicator;
- (void)setShowsCollapseIndicator:(BOOL)arg1;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
