@interface GameLifeMsgContentLogicController : BypMsgContentLogicController <GameLifeMsgChatInfoViewControllerDelegate, GameLifeContactExt>
{
    BOOL shouldShowSendPic; // +0xda
    BOOL shouldShowCamera; // +0xdb
    BOOL shouldShowEmotionBoard; // +0xdc
    BOOL shouldShowAttachButton; // +0xdd
    NSDictionary * _reportInfo; // +0xe0
}
- (id)initWithSessionId:(id)arg1;
- (void)configWithSessionId:(id)arg1;
- (void)Register;
- (void)UnRegister;
- (BOOL)CanSendImageMsg:(id)arg1;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendEmoticonMessage;
- (id)getSubTitle;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (id)getInputToolViewDisplayName:(id)arg1 tag:(id)arg2 accountType:(unsigned int)arg3 inputViewWidth:(unsigned int)arg4;
- (id)getShortNickName:(id)arg1 isWithTag:(BOOL)arg2;
- (BOOL)isHighSurrogate:(unsigned short)arg1;
- (void)OpenDetailInfo;
- (void)OpenContactInfo:(id)arg1;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)onPopFromNavigationController;
- (void)onWillPushFromNavigationController;
- (void)ViewWillAppear;
- (BOOL)canSendCaptureImage;
- (BOOL)canSendLivePhoto;
- (BOOL)canPasteImage;
- (void)onOpenMediaBrowser;
- (void)onOpenCameraController;
- (void)showPermissionAlert:(id)arg1;
- (id)getMsgSendOpEntry;
- (id)getInputToolWeAppOpEntryAr;
- (BOOL)IsShowAttachmentButtonRedDot;
- (long long)getInputToolWeAppNotShowIndex;
- (void)OnClickAttachmentButton:(BOOL)arg1;
- (void)onInputToolWeAppButtonClickedWithItem:(id)arg1;
- (void)onGameLifeProfileClearAllMsg;
- (void)onGameLifeContactUpdate:(id)arg1;
- (void)reportJumpToChatInfoView;
- (void)reportAvatarClick:(id)arg1 message:(id)arg2;
- (BOOL)shouldShowSendPic;
- (void)setShouldShowSendPic:(BOOL)arg1;
- (BOOL)shouldShowCamera;
- (void)setShouldShowCamera:(BOOL)arg1;
- (BOOL)shouldShowEmotionBoard;
- (void)setShouldShowEmotionBoard:(BOOL)arg1;
- (BOOL)shouldShowAttachButton;
- (void)setShouldShowAttachButton:(BOOL)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
