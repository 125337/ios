@interface LiteAppPKPaymentButtonImpl : UIView
{
    PKPaymentButton * _paymentButton; // +0x8
    FlutterMethodChannel * _channel; // +0x10
    long long _viewId; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;
- (void)layoutSubviews;
- (long long)parseButtonType:(id)arg1;
- (long long)parseButtonStyle:(id)arg1;
- (void)paymentButtonTapped:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)dealloc;
- (id)paymentButton;
- (void)setPaymentButton:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (void).cxx_destruct;
@end
