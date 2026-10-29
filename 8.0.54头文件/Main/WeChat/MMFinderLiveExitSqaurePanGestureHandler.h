@interface MMFinderLiveExitSqaurePanGestureHandler : MMFinderLiveEnterSqaurePanGestureHandler
{
    CGRect _originRecognizerViewFrame; // +0x38
}
- (id)init;
- (void)onHandleGesture:(id)arg1;
- (void)setupGestureHandlerTarget:(id)arg1;
- (void)startGestureRecognizer;
- (void)updateGestureRecognizer:(double)arg1;
- (void)finishGestureRecognizer:(double)arg1;
- (double)progressFromCurGesturer:(id)arg1;
- (CGRect)originRecognizerViewFrame;
- (void)setOriginRecognizerViewFrame:(CGRect)arg1;
@end

