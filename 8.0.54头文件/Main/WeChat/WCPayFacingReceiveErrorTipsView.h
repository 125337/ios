@interface WCPayFacingReceiveErrorTipsView : UIView
{
    long long _state; // +0x8
    MMUIView * _loadingView; // +0x10
    MMLoadingIndicatorView * _loadingIcon; // +0x18
    MMUILabel * _loadingLabel; // +0x20
    UIImageView * _iconImageView; // +0x28
    MMUILabel * _errorLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateTipsViewWithState:(long long)arg1 hasMchCode:(BOOL)arg2;
- (void)updateTipsViewWithState:(long long)arg1 withErrorMsg:(id)arg2 hasMchCode:(BOOL)arg3;
- (void)setupContentView;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)loadingIcon;
- (void)setLoadingIcon:(id)arg1;
- (id)loadingLabel;
- (void)setLoadingLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)errorLabel;
- (void)setErrorLabel:(id)arg1;
- (void).cxx_destruct;
@end

