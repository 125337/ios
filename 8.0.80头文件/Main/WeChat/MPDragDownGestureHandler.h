@interface MPDragDownGestureHandler : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _isShouldBegin; // +0x8
    BOOL _isRunning; // +0x9
    UIGestureRecognizer * _recognizeSimultaneouslyGestureRecognizer; // +0x10
    MPCustomInteractiveHandler * _interactiveHandler; // +0x18
    id <MPDragDownGestureHandlerDelegate> _delegate; // +0x20
    MPDragDownGestureRecognizer * _recognizer; // +0x28
    double _distance; // +0x30
}
- (id)initWithView:(id)arg1 interactiveHandler:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)setupGestureWithView:(id)arg1;
- (void)clearGesture;
- (id)gestureRecognizer;
- (void)handleGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)recognizeSimultaneouslyGestureRecognizer;
- (void)setRecognizeSimultaneouslyGestureRecognizer:(id)arg1;
- (id)interactiveHandler;
- (void)setInteractiveHandler:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)recognizer;
- (void)setRecognizer:(id)arg1;
- (BOOL)isShouldBegin;
- (void)setIsShouldBegin:(BOOL)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (double)distance;
- (void)setDistance:(double)arg1;
- (void).cxx_destruct;
@end
