@interface WASessionContentViewController : BaseMsgContentViewController <MsgImgFullScreenViewControllerDelegate, WASessionArrowTitleViewDelegate, WAUINavigationControllerDelegate>
{
    WAAppIdToUsernameTransfer * _appIdTransfer; // +0x1e0
    NSString * _sceneID; // +0x1e8
}
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)onWeAppSessionMsgBtnHide;
- (void)onWeAppSessionMsgBtnClick:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)headerImageClicked:(id)arg1;
- (void)updateTitleAndSubTitleView:(id)arg1;
- (id)getWASessionContentDelegate;
- (void)onClickTitle;
- (BOOL)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(BOOL)arg3 scene:(unsigned long long)arg4;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (void).cxx_destruct;
@end
