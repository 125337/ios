@interface _TtC6WeChat22VoIPExtOperateMenuView : UIView
{
     menuModel; // +0x8
     popupHostController; // +0x10
     popupHostView; // +0x18
     currentContainerView; // +0x20
     currentAnchorView; // +0x28
     onTapItemActions; // +0x30
     onTapDismissMenuAction; // +0x38
     registeredItems; // +0x48
     registeredOrder; // +0x50
     menuAnimationDuration; // +0x58
     pendingHideWorkItem; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isMoreMenuVisible;
- (void)setBlurBackgroundWithIsOn:(BOOL)arg1;
- (void)setLandscapeModeWithIsOn:(BOOL)arg1;
- (void)setLandscapeItemVisible:(BOOL)arg1;
- (void)setLandscapeModeEnabled:(BOOL)arg1;
- (void)setTapBlurBackgroundWithAction:(id /* block */)arg1;
- (void)setTapLandscapeModeWithAction:(id /* block */)arg1;
- (void)setTapDismissMenuWithAction:(id /* block */)arg1;
- (void)registerToggleItemWithId:(id)arg1 iconName:(id)arg2 titleOn:(id)arg3 titleOff:(id)arg4 isOn:(BOOL)arg5 isEnabled:(BOOL)arg6;
- (void)registerActionItemWithId:(id)arg1 iconName:(id)arg2 title:(id)arg3 isEnabled:(BOOL)arg4;
- (void)registerSectionHeaderWithId:(id)arg1 title:(id)arg2;
- (void)setItemOnWithId:(id)arg1 isOn:(BOOL)arg2;
- (void)setItemVisibleWithId:(id)arg1 visible:(BOOL)arg2;
- (void)setItemEnabledWithId:(id)arg1 enabled:(BOOL)arg2;
- (void)setTapItemActionWithId:(id)arg1 action:(id /* block */)arg2;
- (void)showMoreMenu:(id)arg1 in:(id)arg2;
- (void)showMoreMenu:(id)arg1 in:(id)arg2 position:(long long)arg3;
- (void)hideMoreMenu;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
