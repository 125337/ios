@interface WCFinderFeedContentTouchExpandTextView : WCFinderFeedContentTextView
{
    BOOL _isLongPressHandled; // +0x8
}
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)resetNormal;
- (void)onViewLongPressed;
- (BOOL)isLongPressHandled;
- (void)setIsLongPressHandled:(BOOL)arg1;
@end

