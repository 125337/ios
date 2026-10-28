@interface MinimizeVoiceControlButton : MMUIButton
{
    BOOL _isLongPressing; // +0x8
    long long _buttonState; // +0x10
    long long _buttonStyle; // +0x18
    id /* block */ _longPressBeganCallback; // +0x20
    id /* block */ _longPressEndedCallback; // +0x28
    id /* block */ _touchCallback; // +0x30
    id /* block */ _cancellCallback; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setButtonStyle:(long long)arg1;
- (void)setButtonState:(long long)arg1;
- (void)layoutSubviews;
- (void)updateButtonImage;
- (void)shrinkWithState;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)onTouchEnd:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (long long)buttonState;
- (long long)buttonStyle;
- (id /* block */)longPressBeganCallback;
- (void)setLongPressBeganCallback:(id /* block */)arg1;
- (id /* block */)longPressEndedCallback;
- (void)setLongPressEndedCallback:(id /* block */)arg1;
- (id /* block */)touchCallback;
- (void)setTouchCallback:(id /* block */)arg1;
- (id /* block */)cancellCallback;
- (void)setCancellCallback:(id /* block */)arg1;
- (BOOL)isLongPressing;
- (void)setIsLongPressing:(BOOL)arg1;
- (void).cxx_destruct;
@end
