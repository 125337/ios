@interface WCFinderProfileJustWatchTipsView : UIView
{
    long long _style; // +0x8
    id <WCFinderProfileJustWatchTipsViewDelegate> _delegate; // +0x10
    id /* block */ _action; // +0x18
    UIButton * _backgroundButton; // +0x20
    UIImageView * _arrowImageView; // +0x28
    MMUIActivityIndicatorView * _loadingView; // +0x30
    UILabel * _titleLabel; // +0x38
}
- (id)init;
- (void)setStyle:(long long)arg1;
- (void)setupSubViews;
- (void)showTitleLabel:(id)arg1;
- (void)showLoadingView;
- (void)doLayoutSubviews;
- (BOOL)isLoadingViewShowing;
- (void)reCreateRoundCornersLayer;
- (void)onBackgroundButtonClick;
- (long long)style;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
