@interface WATouchBaseView : UIView <WAAllTouchRecognizerDelegate, _TtP9WeAppCore26WAAgentTouchEventResponder_>
{
    id <WATouchBaseViewDelegate> _touchDelegate; // +0x8
    NSMutableSet * _curTouchSet; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)touchesGesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesGesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)isInteractive;
- (void)simulateTouchBeganAt:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)simulateTouchMovedAt:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)simulateTouchEndedAt:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onLongPress:(id)arg1;
- (id)touchDelegate;
- (void)setTouchDelegate:(id)arg1;
- (id)curTouchSet;
- (void)setCurTouchSet:(id)arg1;
- (void).cxx_destruct;
@end
