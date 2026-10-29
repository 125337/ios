@interface WCFinderFeedDetailScrollView : UIScrollView <UIGestureRecognizerDelegate, WCFinderHalfScreenProtocol>
{
    id /* block */ _mediaViewGetter; // +0x8
}
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getListenHalfAnimView;
- (id /* block */)mediaViewGetter;
- (void)setMediaViewGetter:(id /* block */)arg1;
- (void).cxx_destruct;
@end
