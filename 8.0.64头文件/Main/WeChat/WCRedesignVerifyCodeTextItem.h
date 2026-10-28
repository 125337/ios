@interface WCRedesignVerifyCodeTextItem : WCRedesignTextItem
{
    BOOL _useShortWording; // +0x40
    long long _iCount; // +0x48
    id /* block */ _tapVerifyCodeButtonHandler; // +0x50
    id /* block */ _onSetNeedsLayout; // +0x58
    UIButton * _verifyCodeButton; // +0x60
    double _maxCountDownButtonWidth; // +0x68
    long long _countDown; // +0x70
}
- (id)initWithTitle:(id)arg1 tip:(id)arg2 key:(id)arg3;
- (void)config;
- (void)startCountDownTimer;
- (void)stopCountDownTimer;
- (void)updateVerifyCodeButton;
- (void)updateVerifyCodeButtonWithIsFirst:(BOOL)arg1;
- (double)buttonWidthForCalLineBreak;
- (long long)iCount;
- (void)setICount:(long long)arg1;
- (BOOL)useShortWording;
- (void)setUseShortWording:(BOOL)arg1;
- (id /* block */)tapVerifyCodeButtonHandler;
- (void)setTapVerifyCodeButtonHandler:(id /* block */)arg1;
- (id /* block */)onSetNeedsLayout;
- (void)setOnSetNeedsLayout:(id /* block */)arg1;
- (id)verifyCodeButton;
- (void)setVerifyCodeButton:(id)arg1;
- (double)maxCountDownButtonWidth;
- (void)setMaxCountDownButtonWidth:(double)arg1;
- (long long)countDown;
- (void)setCountDown:(long long)arg1;
- (void).cxx_destruct;
@end
