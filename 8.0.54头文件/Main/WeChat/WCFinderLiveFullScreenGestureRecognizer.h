@interface WCFinderLiveFullScreenGestureRecognizer : WXFullScreenGestureRecognizer
{
    id <WCFinderLiveFullScreenGestureDelegate> _fullScreenGestureDelegate; // +0x8
}
- (id)m_delegate;
- (void)LongPressEvents;
- (void)cancelPressEvents;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)fullScreenGestureDelegate;
- (void)setFullScreenGestureDelegate:(id)arg1;
- (void).cxx_destruct;
@end

