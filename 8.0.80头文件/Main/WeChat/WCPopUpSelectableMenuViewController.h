@interface WCPopUpSelectableMenuViewController : MMWindowViewController
{
    double _menuContainerCornerRadius; // +0x80
    WCSelectableMenuView * _menuView; // +0x88
    UIView * _menuContainerView; // +0x90
    CAShapeLayer * _bubbleLayer; // +0x98
    double _minHorizonMargin; // +0xa0
    id /* block */ _willHideCallback; // +0xa8
    id /* block */ _didHideCallback; // +0xb0
    id /* block */ _selection; // +0xb8
}
- (id)initWithItems:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)setMinHorizonMargin:(double)arg1;
- (void)showAtPoint:(CGPoint)arg1;
- (void)showAtPoint:(CGPoint)arg1 alignVisibleTop:(BOOL)arg2;
- (void)makeViewAtPoint:(CGPoint)arg1;
- (void)hideMenuAnimated;
- (double)menuContainerCornerRadius;
- (void)setMenuContainerCornerRadius:(double)arg1;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)menuContainerView;
- (void)setMenuContainerView:(id)arg1;
- (id)bubbleLayer;
- (void)setBubbleLayer:(id)arg1;
- (double)minHorizonMargin;
- (id /* block */)willHideCallback;
- (void)setWillHideCallback:(id /* block */)arg1;
- (id /* block */)didHideCallback;
- (void)setDidHideCallback:(id /* block */)arg1;
- (id /* block */)selection;
- (void)setSelection:(id /* block */)arg1;
- (void).cxx_destruct;
@end
