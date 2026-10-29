@interface WCFinderLeftOvalTipsView : UIView
{
    BOOL _fixAtRightOfParentView; // +0x8
    BOOL _isShowAnimating; // +0x9
    BOOL _isDismissAnimating; // +0xa
    id /* block */ _action; // +0x10
    UIButton * _backgroundButton; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    MMUIActivityIndicatorView * _loadingView; // +0x30
    CGSize _measuredSize; // +0x38
}
+ (double)animationDuration;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)relayoutUI;
- (CGSize)intrinsicContentSize;
- (void)resetRoundCornersLayer;
- (void)onBackgroundButtonClick;
- (void)showTitle:(id)arg1 arrowUp:(BOOL)arg2;
- (void)showLoadingView;
- (void)hideLoadingViewAndShowPreArrow;
- (BOOL)isLoading;
- (void)showAnimated:(BOOL)arg1 atRightOfParentView:(id)arg2 completion:(id /* block */)arg3;
- (void)dismissAnimated:(BOOL)arg1 fromRightOfParentView:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (BOOL)fixAtRightOfParentView;
- (void)setFixAtRightOfParentView:(BOOL)arg1;
- (CGSize)measuredSize;
- (void)setMeasuredSize:(CGSize)arg1;
- (BOOL)isShowAnimating;
- (void)setIsShowAnimating:(BOOL)arg1;
- (BOOL)isDismissAnimating;
- (void)setIsDismissAnimating:(BOOL)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end
