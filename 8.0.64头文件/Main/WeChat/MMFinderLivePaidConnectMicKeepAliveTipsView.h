@interface MMFinderLivePaidConnectMicKeepAliveTipsView : MMRectTriangleArrowView
{
    id /* block */ _onTapKeepAlive; // +0x8
    MMFinderLiveConnectMicUser * _micUser; // +0x10
    UILabel * _tipsLabel; // +0x18
    MMUIButton * _keepAliveButton; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 orientation:(long long)arg2;
- (void)initUI;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (void)sizeToFitWidth:(double)arg1;
- (void)layoutSubviews;
- (void)onClickKeepAliveButton;
- (id /* block */)onTapKeepAlive;
- (void)setOnTapKeepAlive:(id /* block */)arg1;
- (id)micUser;
- (void)setMicUser:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)keepAliveButton;
- (void)setKeepAliveButton:(id)arg1;
- (void).cxx_destruct;
@end
