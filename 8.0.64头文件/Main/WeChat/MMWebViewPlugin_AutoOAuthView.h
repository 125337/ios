@interface MMWebViewPlugin_AutoOAuthView : MMWebViewPluginBase
{
    UIView * _bgView; // +0x8
    MMWebImageView * _headImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    IndicatorAnimationBallBeatView * _indicatorView; // +0x20
    UILabel * _descLabel; // +0x28
    UIButton * _backAppBtn; // +0x30
    BOOL _bIsSuccessView; // +0x38
}
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)showAutoOAuthLoadingViewWithSchemeUrl:(id)arg1 Success:(BOOL)arg2 Wording:(id)arg3 HeadImgUrl:(id)arg4;
- (void)initViewWithWording:(id)arg1 HeadImgUrl:(id)arg2;
- (void)layoutAutoOAuthView;
- (void)onBackToApp;
- (void)hideAutoOAuthLoadingView;
- (void).cxx_destruct;
@end
