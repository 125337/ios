@interface MMFinderLiveCommentTableView : MMTableView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer * _specialLiveAnimatorGestureRecognizer; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)initGesture;
- (void)handlePanGesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)specialLiveAnimatorGestureRecognizer;
- (void)setSpecialLiveAnimatorGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

