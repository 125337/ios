@interface WWKFSessionContentViewController : BaseMsgContentViewController <WASessionArrowTitleViewDelegate, WAUINavigationControllerDelegate>
{
    NSString * _chatSessionId; // +0x1e0
}
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)checkKfMagicBrushEnv;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)wwkfContentLogicController;
- (int)ecsReportRoomEnterScene;
- (void)bindSessionMoreExposeIfNeeded;
- (void)onBackButtonClicked:(id)arg1;
- (void)headerImageClicked:(id)arg1;
- (void)updateTitleAndSubTitleView:(id)arg1;
- (void)onClickTitle;
- (void)onWeAppSessionMsgBtnHide;
- (void)onWeAppSessionMsgBtnClick:(id)arg1;
- (BOOL)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(BOOL)arg3 scene:(unsigned long long)arg4;
- (id)chatSessionId;
- (void)setChatSessionId:(id)arg1;
- (void).cxx_destruct;
@end
