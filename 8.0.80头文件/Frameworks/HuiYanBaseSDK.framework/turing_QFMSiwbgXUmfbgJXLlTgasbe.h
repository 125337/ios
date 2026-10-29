@interface turing_QFMSiwbgXUmfbgJXLlTgasbe : UITapGestureRecognizer <UIGestureRecognizerDelegate>
{
    id /* block */ _eventHandler; // +0x8
    NSObject<OS_dispatch_queue> * _workingQueue; // +0x10
}
- (id)initWithHandler:(id /* block */)arg1;
- (void)tapGestureIsJustRecognized:(id)arg1;
- (void)handleTouches:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id /* block */)eventHandler;
- (void)setEventHandler:(id /* block */)arg1;
- (id)workingQueue;
- (void)setWorkingQueue:(id)arg1;
- (void).cxx_destruct;
@end
