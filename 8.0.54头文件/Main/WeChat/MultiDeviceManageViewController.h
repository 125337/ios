@interface MultiDeviceManageViewController : MMUIViewController <MultiDeviceCardViewDelegate, MultiDeviceLoginLogicDelegate, MultiDeviceManageLogicDelegate>
{
    BOOL _userOpen; // +0x68
    MMUINavigationBar * _customNavigationBar; // +0x70
    UINavigationItem * _customNavigationItem; // +0x78
    WCSheetView * _sheetView; // +0x80
    MultiDeviceLoginInfo * _deviceLoginInfo; // +0x88
    MultiDeviceLoginLogic * _deviceLoginLogic; // +0x90
    MultiDeviceCardView * _deviceLoginCardView; // +0x98
    MMUILabel * _deviceLoginGuideLabel; // +0xa0
    MultiDeviceManageLogic * _deviceManageLogic; // +0xa8
    NSArray * _deviceManageInfoList; // +0xb0
    NSMutableArray * _deviceManageCardViewList; // +0xb8
    MultiDeviceAutoLoginLogic * _autoLoginLogic; // +0xc0
    UITapGestureRecognizer * _tapGesture; // +0xc8
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0xd0
}
- (id)init;
- (id)initWithLoginInfo:(id)arg1;
- (void)viewDidLoad;
- (void)report;
- (void)viewDidTransitionToNewSize;
- (void)initNavigationBar;
- (void)initView;
- (void)initGesture;
- (void)updateLayouts;
- (id)viewController;
- (BOOL)disMissSelf;
- (BOOL)isLogin;
- (BOOL)isManage;
- (void)reloadManageInfoList;
- (void)reloadManageCardViewList;
- (id)autoLoginLogic;
- (void)onTapSheetView:(id)arg1;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)onTapCloseBarButton;
- (void)onTapHelpBarButton;
- (double)cardViewMaxWidth;
- (double)cardViewFullScreenHeight;
- (void)shouldUpdateRightBarButtonItemWithShow:(BOOL)arg1;
- (void)onJumpProtocolUrl:(id)arg1;
- (void)onTapConfirmLoginButtonWithInfo:(id)arg1;
- (void)onTapCancelLoginButton;
- (void)reportLoginEndWithResult:(BOOL)arg1 confirmInfo:(id)arg2;
- (void)onTapManageHelpButtonWithInfo:(id)arg1;
- (void)onTapManageExpandButtonWithInfo:(id)arg1;
- (void)onTapNotificationButtonWithNewState:(BOOL)arg1;
- (void)onTapSendFileButtonWithInfo:(id)arg1;
- (void)onTapLockButtonWithInfo:(id)arg1;
- (void)onTapAutoLoginCheckboxWithInfo:(id)arg1;
- (void)onTapKeepAliveCheckboxWithInfo:(id)arg1;
- (void)onTapManageLogoutButtonWithInfo:(id)arg1;
- (void)onConfirmLoginSucceeded;
- (void)onConfirmLoginFailed;
- (void)onCancelLogin;
- (void)onManageInfoUpdate;
- (BOOL)isUserOpen;
- (void)setUserOpen:(BOOL)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)deviceLoginInfo;
- (void)setDeviceLoginInfo:(id)arg1;
- (id)deviceLoginLogic;
- (void)setDeviceLoginLogic:(id)arg1;
- (id)deviceLoginCardView;
- (void)setDeviceLoginCardView:(id)arg1;
- (id)deviceLoginGuideLabel;
- (void)setDeviceLoginGuideLabel:(id)arg1;
- (id)deviceManageLogic;
- (void)setDeviceManageLogic:(id)arg1;
- (id)deviceManageInfoList;
- (void)setDeviceManageInfoList:(id)arg1;
- (id)deviceManageCardViewList;
- (void)setDeviceManageCardViewList:(id)arg1;
- (void)setAutoLoginLogic:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (void).cxx_destruct;
@end

