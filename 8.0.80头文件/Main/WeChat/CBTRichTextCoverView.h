@interface CBTRichTextCoverView : MMRichTextCoverView
{
    BOOL _usePreferredMenuTargetRect; // +0x8
    BOOL _isSelectionHandleDragging; // +0x9
    double _visibleHeightLimit; // +0x10
    double _menuHideRemovalDelay; // +0x18
    unsigned long long _menuHideRemovalVersion; // +0x20
    CGRect _preferredMenuTargetRect; // +0x28
}
- (id)init;
- (BOOL)beginSelectionWithTouchPoint:(CGPoint)arg1;
- (BOOL)resolveInitialSelectionWithTouchPoint:(CGPoint)arg1 selectedRange:(_NSRange *)arg2 pathRects:(id *)arg3;
- (void)onPanAction:(id)arg1;
- (void)onMenuWillHide;
- (void)longPressAction:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)hideMenuUI;
- (void)showSelectMenu;
- (void)showMenuWithItems:(id)arg1;
- (CGRect)getSelectedRect;
- (CGRect)menuTargetRectForSelectionRects:(id)arg1;
- (double)visibleHeightLimit;
- (void)setVisibleHeightLimit:(double)arg1;
- (double)menuHideRemovalDelay;
- (void)setMenuHideRemovalDelay:(double)arg1;
- (CGRect)preferredMenuTargetRect;
- (void)setPreferredMenuTargetRect:(CGRect)arg1;
- (BOOL)usePreferredMenuTargetRect;
- (void)setUsePreferredMenuTargetRect:(BOOL)arg1;
- (unsigned long long)menuHideRemovalVersion;
- (void)setMenuHideRemovalVersion:(unsigned long long)arg1;
- (BOOL)isSelectionHandleDragging;
- (void)setIsSelectionHandleDragging:(BOOL)arg1;
@end
