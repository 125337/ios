@interface WCFinderPopUpSelectMenuViewController : MMWindowViewController
{
    WCFinderSelectMenuView * _menuView; // +0x80
    UIView * _menuContainerView; // +0x88
    CAShapeLayer * _bubbleLayer; // +0x90
    id /* block */ _willHideCallback; // +0x98
    id /* block */ _didHideCallback; // +0xa0
    id /* block */ _selection; // +0xa8
}
- (id)initWithItems:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)showAtPoint:(CGPoint)arg1;
- (void)makeViewAtPoint:(CGPoint)arg1;
- (void)hideMenuAnimated;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)menuContainerView;
- (void)setMenuContainerView:(id)arg1;
- (id)bubbleLayer;
- (void)setBubbleLayer:(id)arg1;
- (id /* block */)willHideCallback;
- (void)setWillHideCallback:(id /* block */)arg1;
- (id /* block */)didHideCallback;
- (void)setDidHideCallback:(id /* block */)arg1;
- (id /* block */)selection;
- (void)setSelection:(id /* block */)arg1;
- (void).cxx_destruct;
@end
