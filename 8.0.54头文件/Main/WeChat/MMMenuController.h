@interface MMMenuController : MMWindowViewController <MMMenuWindowDelegate, MMMenuContentViewDelegate, MMSceneDelegateExt>
{
    BOOL _menuVisible; // +0x74
    BOOL _isCheckMenuWindowValid; // +0x75
    BOOL _subMenuPushedAnimated; // +0x76
    BOOL _shouldCloseAtClicked; // +0x77
    BOOL _isKeyboardShowing; // +0x78
    long long _scene; // +0x80
    UIColor * _customBackgroundColor; // +0x88
    MMMenuContentView * _menuView; // +0x90
    MMMenuWindow * _menuWindow; // +0x98
    long long _maxCountPerLine; // +0xa0
    long long _menuStyle; // +0xa8
    UIView * _customHeaderView; // +0xb0
    double _menuMinWidth; // +0xb8
    double _menuItemInnerGap; // +0xc0
    double _menuItemWidth; // +0xc8
    long long _preferredDirection; // +0xd0
    UIViewPropertyAnimator * _menuAnimator; // +0xd8
    NSArray * _menuItemRows; // +0xe0
    UIResponder * _responder; // +0xe8
    unsigned long long _supportedOrienation; // +0xf0
    long long _currOrientation; // +0xf8
    double _keyboardHeight; // +0x100
    long long _statusBarStyle; // +0x108
    id _extraInfo; // +0x110
    NSString * _targetSceneId; // +0x118
    CGRect _selectionRectInScreen; // +0x120
}
+ (id)sharedMenuController;
+ (double)displayChangeAnimateDuration;
- (id)init;
- (long long)preferredContainerBackgroundStyle;
- (id)currentMenuItems;
- (void)setCustomHeaderView:(id)arg1;
- (void)setMenuMinWidth:(double)arg1;
- (void)setMenuItemInnerGap:(double)arg1;
- (void)setMenuItemWidth:(double)arg1;
- (void)setPreferredMenuDirection:(long long)arg1;
- (void)setStayVisibleForOnce;
- (void)setMenuExtraInfo:(id)arg1;
- (void)setMenuVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setMenuVisible:(BOOL)arg1 responder:(id)arg2 animated:(BOOL)arg3;
- (void)pushSubMenu:(id)arg1 style:(long long)arg2 animated:(BOOL)arg3;
- (void)setMenuItems:(id)arg1;
- (void)setMenuItemRows:(id)arg1;
- (void)setTargetRect:(CGRect)arg1 inView:(id)arg2;
- (void)setSelectionRectInScreen:(CGRect)arg1;
- (void)setMaxItemCountPerLine:(long long)arg1;
- (void)setMenuControllerStyle:(long long)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)onDeviceOrienationChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidTransitionToNewSize;
- (void)startAnimatorWithAnimate:(id /* block */)arg1 complete:(id /* block */)arg2 allowAnimation:(BOOL)arg3;
- (CGRect)currentMenuFrame;
- (void)onTouchAtNoneMenuArea;
- (void)onMenuItemSelected:(id)arg1 itemView:(id)arg2;
- (void)setCustomBackgroundColor:(id)arg1;
- (void)initMenuView;
- (void)updateMenuView;
- (void)notifyMenuWillShow:(id)arg1;
- (void)notifyMenuDidShow:(id)arg1;
- (void)notifyMenuDidShowFailed:(id)arg1;
- (void)notifyMenuWillHide:(id)arg1;
- (void)notifyMenuDidHide:(id)arg1;
- (void)notifyMenuFrameDidChange;
- (void)notifyMenuItemSelected:(id)arg1;
- (long long)indexForMenuItem:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)onMainSceneSizeChangedFrom:(CGSize)arg1 to:(CGSize)arg2;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (BOOL)isMenuVisible;
- (void)setMenuVisible:(BOOL)arg1;
- (BOOL)isCheckMenuWindowValid;
- (void)setIsCheckMenuWindowValid:(BOOL)arg1;
- (id)customBackgroundColor;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)menuWindow;
- (void)setMenuWindow:(id)arg1;
- (long long)maxCountPerLine;
- (void)setMaxCountPerLine:(long long)arg1;
- (long long)menuStyle;
- (void)setMenuStyle:(long long)arg1;
- (id)customHeaderView;
- (double)menuMinWidth;
- (double)menuItemInnerGap;
- (double)menuItemWidth;
- (BOOL)subMenuPushedAnimated;
- (void)setSubMenuPushedAnimated:(BOOL)arg1;
- (long long)preferredDirection;
- (void)setPreferredDirection:(long long)arg1;
- (id)menuAnimator;
- (void)setMenuAnimator:(id)arg1;
- (id)menuItemRows;
- (id)responder;
- (void)setResponder:(id)arg1;
- (CGRect)selectionRectInScreen;
- (BOOL)shouldCloseAtClicked;
- (void)setShouldCloseAtClicked:(BOOL)arg1;
- (unsigned long long)supportedOrienation;
- (void)setSupportedOrienation:(unsigned long long)arg1;
- (long long)currOrientation;
- (void)setCurrOrientation:(long long)arg1;
- (BOOL)isKeyboardShowing;
- (void)setIsKeyboardShowing:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (long long)statusBarStyle;
- (void)setStatusBarStyle:(long long)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)targetSceneId;
- (void)setTargetSceneId:(id)arg1;
- (void).cxx_destruct;
@end

