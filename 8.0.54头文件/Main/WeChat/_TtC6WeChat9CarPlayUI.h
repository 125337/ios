@interface _TtC6WeChat9CarPlayUI : MMUserService <CPTabBarTemplateDelegate, MMServiceProtocol, CPInterfaceControllerDelegate>
{
     interfaceController; // +0x8
     tabBarController; // +0x10
     tabBarControllerElements; // +0x18
     currentAlert; // +0x20
     presentedController; // +0x28
}
- (void)showActionSheetWithActionSheet:(id)arg1;
- (void)showAlertWithTitle:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 confirmHandler:(id /* block */)arg2;
- (void)showAlertWithTitle:(id)arg1 cancelTitle:(id)arg2 cancelHandler:(id /* block */)arg3 confirmTitle:(id)arg4 confirmHandler:(id /* block */)arg5;
- (void)dismissAlert;
- (void)tabBarTemplate:(id)arg1 didSelectTemplate:(id)arg2;
- (BOOL)isOnVoIP;
- (void)showEmptyCallRecords;
- (void)showRecentTalksController;
- (BOOL)enableCarPlay;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)connectedCarplayWithInterfaceController:(id)arg1;
- (void)disconnectedCarplay;
- (BOOL)isCarPlayConnected;
- (id)presentedController;
- (void)setPresentedController:(id)arg1;
- (BOOL)isShowingNowPlayingController;
- (void)presentController:(id /* block */)arg1 animated:(BOOL)arg2;
- (void)popController;
- (void)replaceRootController:(id /* block */)arg1 animated:(BOOL)arg2;
- (void)showTabBarController;
- (void)templateWillAppear:(id)arg1 animated:(BOOL)arg2;
- (id)init;
- (void).cxx_destruct;
@end

