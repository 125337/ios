@interface WCTabBarInteractionLongPressGestureRecognizer : UILongPressGestureRecognizer
{
    BOOL _capturedSelectionState; // +0x8
    BOOL _wasSelected; // +0x9
    unsigned long long _itemIndex; // +0x10
}
- (void)reset;
- (unsigned long long)itemIndex;
- (void)setItemIndex:(unsigned long long)arg1;
- (BOOL)capturedSelectionState;
- (void)setCapturedSelectionState:(BOOL)arg1;
- (BOOL)wasSelected;
- (void)setWasSelected:(BOOL)arg1;
@end
