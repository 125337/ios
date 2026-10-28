@interface WCFinderLeftOvalTipsView : UIView
{
    id /* block */ _action; // +0x8
    UIButton * _backgroundButton; // +0x10
    UILabel * _titleLabel; // +0x18
    UIImageView * _arrowImageView; // +0x20
    MMUIActivityIndicatorView * _loadingView; // +0x28
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)relayoutUI;
- (void)resetRoundCornersLayer;
- (void)onBackgroundButtonClick;
- (void)showTitle:(id)arg1 arrowUp:(BOOL)arg2;
- (void)showLoadingView;
- (void)hideLoadingViewAndShowPreArrow;
- (BOOL)isLoading;
- (id /* block */)action;
- (void)setAction:(id /* block */)arg1;
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
