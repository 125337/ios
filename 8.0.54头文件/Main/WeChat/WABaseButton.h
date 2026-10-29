@interface WABaseButton : UIButton
{
    BOOL _shouldPassTouch; // +0x8
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldPassTouch;
- (void)setShouldPassTouch:(BOOL)arg1;
@end

