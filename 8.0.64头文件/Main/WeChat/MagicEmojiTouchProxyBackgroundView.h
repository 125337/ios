@interface MagicEmojiTouchProxyBackgroundView : UIView
{
    NSString * _sessionId; // +0x8
    id /* block */ _tapEntityHandler; // +0x10
    UITapGestureRecognizer * _tapGesture; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onTapView:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id /* block */)tapEntityHandler;
- (void)setTapEntityHandler:(id /* block */)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
