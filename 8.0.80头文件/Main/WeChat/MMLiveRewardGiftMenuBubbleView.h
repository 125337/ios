@interface MMLiveRewardGiftMenuBubbleView : UIView
{
    BOOL _subMenuPushed; // +0x8
    UIResponder * _actionResponder; // +0x10
    id /* block */ _onDismissBlock; // +0x18
    UIView * _overlayView; // +0x20
    UIView * _bubbleContentView; // +0x28
    UIImageView * _arrowImageView; // +0x30
    NSArray * _menuItems; // +0x38
    UIView * _hostSuperView; // +0x40
    CGRect _anchorRect; // +0x48
}
- (void)showInView:(id)arg1 menuItems:(id)arg2 anchorRectInView:(CGRect)arg3;
- (void)pushMenuItems:(id)arg1;
- (void)reloadMenuItems;
- (void)dismissAnimated:(BOOL)arg1;
- (void)onOverlayTapped:(id)arg1;
- (void)onItemTapped:(id)arg1;
- (id)actionResponder;
- (void)setActionResponder:(id)arg1;
- (id /* block */)onDismissBlock;
- (void)setOnDismissBlock:(id /* block */)arg1;
- (id)overlayView;
- (void)setOverlayView:(id)arg1;
- (id)bubbleContentView;
- (void)setBubbleContentView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (id)hostSuperView;
- (void)setHostSuperView:(id)arg1;
- (CGRect)anchorRect;
- (void)setAnchorRect:(CGRect)arg1;
- (BOOL)subMenuPushed;
- (void)setSubMenuPushed:(BOOL)arg1;
- (void).cxx_destruct;
@end
