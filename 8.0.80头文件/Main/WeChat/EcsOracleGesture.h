@interface EcsOracleGesture : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    id /* block */ _onTouchDownBlock; // +0x8
}
- (id)init;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id /* block */)onTouchDownBlock;
- (void)setOnTouchDownBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
