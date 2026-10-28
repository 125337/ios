@interface MPDragDownGestureRecognizer : UIPanGestureRecognizer
{
    CGPoint _beganLocation; // +0x8
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (CGPoint)translationInView:(id)arg1;
- (CGPoint)beganLocation;
- (void)setBeganLocation:(CGPoint)arg1;
@end
