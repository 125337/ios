@interface WCFinderPopUpMenuViewController : WCPopUpSelectableMenuViewController
{
    BOOL _menuDismissalStarted; // +0x7c
    id /* block */ _menuWillHideCallback; // +0x80
    id /* block */ _menuDidHideCallback; // +0x88
}
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2 showEndEditing:(BOOL)arg3;
- (void)setWillHideCallback:(id /* block */)arg1;
- (void)setDidHideCallback:(id /* block */)arg1;
- (void)dismissMenuFromOutside;
- (BOOL)shouldWrapViewWithSafeArea;
- (void)viewDidTransitionToNewSize;
- (id /* block */)menuWillHideCallback;
- (void)setMenuWillHideCallback:(id /* block */)arg1;
- (id /* block */)menuDidHideCallback;
- (void)setMenuDidHideCallback:(id /* block */)arg1;
- (BOOL)menuDismissalStarted;
- (void)setMenuDismissalStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
