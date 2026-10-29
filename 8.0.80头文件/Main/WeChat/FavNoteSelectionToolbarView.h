@interface FavNoteSelectionToolbarView : UIView
{
    BOOL _showAbove; // +0x8
    id /* block */ _onItemClick; // +0x10
    id /* block */ _onDismiss; // +0x18
    UIView * _contentWrapperView; // +0x20
    UIView * _toolbarContainer; // +0x28
    UIView * _arrowView; // +0x30
    NSMutableArray * _buttons; // +0x38
    NSArray * _menuTypes; // +0x40
    CGPoint _anchorAbove; // +0x48
    CGPoint _anchorBelow; // +0x58
}
+ (id)showWithMenuTypes:(id)arg1 anchorAbove:(CGPoint)arg2 anchorBelow:(CGPoint)arg3 parentView:(id)arg4;
- (void)setupUI;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setupMenuButtons;
- (void)layoutToolbar;
- (CGRect)drawArrowAndReturnRectWithAnchorX:(double)arg1 toolbarFrame:(CGRect)arg2;
- (void)showAnimated;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1;
- (void)onButtonTap:(id)arg1;
- (id)titleForMenuType:(id)arg1;
- (id)iconNameForMenuType:(id)arg1;
- (id /* block */)onItemClick;
- (void)setOnItemClick:(id /* block */)arg1;
- (id /* block */)onDismiss;
- (void)setOnDismiss:(id /* block */)arg1;
- (id)contentWrapperView;
- (void)setContentWrapperView:(id)arg1;
- (id)toolbarContainer;
- (void)setToolbarContainer:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)buttons;
- (void)setButtons:(id)arg1;
- (id)menuTypes;
- (void)setMenuTypes:(id)arg1;
- (CGPoint)anchorAbove;
- (void)setAnchorAbove:(CGPoint)arg1;
- (CGPoint)anchorBelow;
- (void)setAnchorBelow:(CGPoint)arg1;
- (BOOL)showAbove;
- (void)setShowAbove:(BOOL)arg1;
- (void).cxx_destruct;
@end
