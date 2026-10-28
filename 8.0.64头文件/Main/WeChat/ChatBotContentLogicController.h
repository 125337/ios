@interface ChatBotContentLogicController : BaseMsgContentLogicController <CustomMenuToolViewDelegate, CustomSubMenuFloatViewDelegate, addContactToChatRoomDelegate, ISendMessageExt, IStrangerContactMgrExt, MsgDataDownloadDelegate, IChatBotExt, WCScheduleLogicControllerDelegate, MessagePageSheetAdapterDelegate>
{
    BOOL m_isInMenuMode; // +0x100
    CustomMenuToolView * m_menuToolView; // +0x108
    NSArray * m_menu; // +0x110
    CustomSubMenuFloatView * m_subMenuFloatView; // +0x118
    WAJSEventHandler_genRedPackageCover * m_genRedPackageCoverJsApiHandler; // +0x120
    MMPageSheetAdapter * m_pageSheetAdapter; // +0x128
    MsgDataDownloadLogic * m_msgDataDownloadLogic; // +0x130
    long long m_redEnvelopeCoverLinkMsgid; // +0x138
    BOOL _isProcessing; // +0x140
    MMInputToolView * _inputToolView; // +0x148
    WCScheduleLogicController * _scheduleVC; // +0x150
    MMLoadingView * _loadingViewX; // +0x158
}
- (BOOL)HasCustomToolBar;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(BOOL *)arg1;
- (void)createCustomToolViewOn:(id)arg1;
- (id)getMenuInfo;
- (id)getSubMenuInfoByIndex:(long long)arg1;
- (id)buttonListFromArr:(id)arg1 isSubMenu:(BOOL)arg2;
- (id)createChangeToMenuButton;
- (double)getCustomizedAreaWidth;
- (void)changeToMenuMode;
- (void)swichToolViewToCustomView;
- (void)finishedChangeToMenuMode;
- (void)onChangeToInputMode;
- (void)finishedChangeToInputMode;
- (id)getInnerToolView;
- (id)getOutterToolView;
- (void)onSubMenuPresentWithIndex:(long long)arg1 ArrowX:(double)arg2;
- (void)onReportClickEvent:(id)arg1;
- (void)onSubMenuDismiss;
- (void)updateFloatContentView;
- (BOOL)shouldShowChangeModeBtn;
- (void)onChangeToMenuMode:(id)arg1;
- (void)onJumpToWebView:(id)arg1;
- (BOOL)onJumpToNativeView:(id)arg1;
- (void)onOpenWeAppWithJSONString:(id)arg1 fromScene:(unsigned int)arg2 btnName:(id)arg3 btnLevel:(unsigned long long)arg4;
- (void)onOpenWeAppWithJSONString:(id)arg1 fromScene:(unsigned int)arg2;
- (void)onReportParentClickEvent:(id)arg1;
- (void)onRecordActionEvent:(id)arg1;
- (void)onJumpToEcs:(id)arg1;
- (void)onConnectDevice;
- (void)onDisconnectDevice;
- (void)onJumpToScanView:(id)arg1;
- (void)onJumpToPicView:(id)arg1;
- (void)onJumpToPOIView:(id)arg1;
- (void)onJumpToBrandSearchView:(id)arg1;
- (void)onJumpToProfile:(id)arg1;
- (id)getBrandContactUsername;
- (void)Register;
- (void)UnRegister;
- (void)initViewController;
- (void)onWillEnterRoom;
- (BOOL)checkPrivacyPageSheet:(id)arg1;
- (unsigned int)enterScene;
- (void)checkSendChatBotCommand;
- (void)ViewWillAppear;
- (void)onPopFromNavigationController;
- (void)checkAddFriend;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)getMsgFromLocalId:(unsigned int)arg1 createTime:(unsigned int)arg2 sequence:(unsigned int)arg3 limit:(unsigned int)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (void)clearAllMsg;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getMsgSendOpEntry;
- (BOOL)CanSendImageMsg:(id)arg1;
- (BOOL)CanSendVoiceMsg;
- (BOOL)isMsgCanRevoke:(id)arg1;
- (void)reportForEventId:(id)arg1 params:(id)arg2;
- (BOOL)CanLongPressHeadImage;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (id)GetTitleTailImageView;
- (id)getSubTitle;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (id)GetRightBarButtonTitle;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenContactInfo:(id)arg1 andScene:(unsigned int)arg2;
- (void)deleteAllMsgByContact:(id)arg1;
- (void)OpenDetailInfo;
- (void)newMessageFromAddContactToChatRoom:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (id)GetChatContact;
- (BOOL)isNeedCached;
- (void)getIlinkAuth:(id)arg1 username:(id)arg2 timeout:(unsigned int)arg3 needPos:(BOOL)arg4;
- (void)locationSettingLogic;
- (void)setGenRedPackageCoverJsApiHandler:(id)arg1;
- (void)setRedEnvelopeCover:(long long)arg1 fromMsgId:(long long)arg2;
- (void)checkToRedPackageCoverWeAppWithImg:(id)arg1 msgId:(long long)arg2;
- (void)checkNeedHandleMsgDownloadForRedPackageCoverWithMsg:(id)arg1 downloadSuccess:(BOOL)arg2;
- (void)checkNeedCancelGenRedPackageJsApi;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)OnSendMessageSuccess:(id)arg1;
- (double)maxProcessingTimeInterval;
- (id)GetUsrTitle;
- (void)checkProcessingState;
- (void)updateTitle;
- (void)resetProcessingState;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)pageSheetDidAppear:(id)arg1;
- (void)onMsgPageSheetWillEnterFullscreen:(id)arg1 contact:(id)arg2;
- (void)onMsgPageSheetEnterFullscreen:(id)arg1;
- (unsigned int)getMsgPageSheetMoreOptionMask;
- (void)pageSheetWillClose:(id)arg1 closeType:(long long)arg2;
- (BOOL)mainSwitch_shouldHandleAppmsg;
- (void)onAddNewStrangerContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onClickRedEnvelopeCoverWithSender:(id)arg1;
- (void)onClickFavMenu:(id)arg1;
- (void)onClickForwardMenu:(id)arg1;
- (void)reportMultiMsgEvent:(id)arg1 viewId:(id)arg2 msgIdList:(id)arg3;
- (void)addMultiMsgToMyFav:(id)arg1;
- (void)sendMultiMsgToFriend:(id)arg1;
- (void)setScheduleMessage:(long long)arg1;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(BOOL)arg2 ErrMsg:(id)arg3;
- (void)onWCScheduleSelectDatePickerView;
- (id)inputToolView;
- (void)setInputToolView:(id)arg1;
- (BOOL)isProcessing;
- (void)setIsProcessing:(BOOL)arg1;
- (id)scheduleVC;
- (void)setScheduleVC:(id)arg1;
- (id)loadingViewX;
- (void)setLoadingViewX:(id)arg1;
- (void).cxx_destruct;
@end
