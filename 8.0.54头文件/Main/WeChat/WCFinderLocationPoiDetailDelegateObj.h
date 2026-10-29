@interface WCFinderLocationPoiDetailDelegateObj : NSObject <UIGestureRecognizerDelegate>
{
    BOOL _isTabViewHidden; // +0x8
}
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)isTabViewHidden;
- (void)setIsTabViewHidden:(BOOL)arg1;
@end

