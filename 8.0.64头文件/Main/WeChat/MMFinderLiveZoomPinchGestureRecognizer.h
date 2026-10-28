@interface MMFinderLiveZoomPinchGestureRecognizer : UIPinchGestureRecognizer
{
    CGPoint _initialLocation; // +0x8
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (CGPoint)initialLocation;
- (void)setInitialLocation:(CGPoint)arg1;
@end
