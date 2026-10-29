@interface MMFinderLiveConnectMicUserAnchorPkNotificationView : UIView
{
    unsigned long long _direction; // +0x8
    id /* block */ _actionBlock; // +0x10
    UIView * _containerView; // +0x18
    CAGradientLayer * _gradientLayer; // +0x20
    double _gradientLayerTransparentLocation; // +0x28
    UILabel * _pkLabel; // +0x30
    UILabel * _pkSubLabel; // +0x38
    UIButton * _pkButton; // +0x40
    MMUIActivityIndicatorView * _pkLoadingView; // +0x48
    unsigned long long _pkState; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)setDirection:(unsigned long long)arg1;
- (void)updateWithPkInfo:(id)arg1;
- (void)refreshGradient;
- (void)showButtonLoading:(BOOL)arg1;
- (unsigned long long)direction;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (double)gradientLayerTransparentLocation;
- (void)setGradientLayerTransparentLocation:(double)arg1;
- (id)pkLabel;
- (void)setPkLabel:(id)arg1;
- (id)pkSubLabel;
- (void)setPkSubLabel:(id)arg1;
- (id)pkButton;
- (void)setPkButton:(id)arg1;
- (id)pkLoadingView;
- (void)setPkLoadingView:(id)arg1;
- (unsigned long long)pkState;
- (void)setPkState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

