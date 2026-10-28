@interface BrandContentLogicController : WeixinContentLogicController <BrandProfileSettingViewControllerDelegate, BrandActionReportLogicControllerDelegate, BrandTemplateMsgAuthLogicDelegate, ForwardMessageLogicExt, MMLiteAppExt, BrandStyleUILogicControllerDelegate, MsgDelegate, BrandDeviceConnectLogicControllerDelegate, IWCDeviceBrandMgrExt>
{
    TipsView * m_tipsView; // +0x110
    BrandStyleUILogicController * m_uiLogicController; // +0x118
    BrandActionReportLogicController * m_reportLogicController; // +0x120
    BrandDeviceConnectLogicController * m_connectLogicController; // +0x128
    BOOL m_isLastInMenuMode; // +0x130
    unsigned long long m_lastInputMode; // +0x138
    unsigned long long m_lastPoisitionMode; // +0x140
    unsigned long long m_lastContentMode; // +0x148
    BOOL m_shouldRecordToolViewStatus; // +0x150
    BOOL m_isShowKeyboardImmediately; // +0x151
    BOOL m_hasPreloadKFWorkerWeApp; // +0x152
    unsigned int m_stat_timeStart; // +0x154
    unsigned int m_stat_totalUnreadCount; // +0x158
    unsigned int m_stat_massSendUnreadCount; // +0x15c
    unsigned int m_stat_templateUnreadCount; // +0x160
    unsigned int m_stat_latestMsgType; // +0x164
    unsigned int m_stat_latestMsgDuration; // +0x168
    unsigned int m_stat_indexInSessionList; // +0x16c
    TemplateMsgExposeLogic * m_exposeLogic; // +0x170
    BrandTemplateMsgAuthLogic * m_subscrMsgLogic; // +0x178
    BOOL m_hasUnfoldHistoryMessage; // +0x180
    BOOL m_hasSetInputReferMsg; // +0x181
    MMLiteAppViewController * m_gameLiteViewController; // +0x188
    BOOL _usingBizIdentity; // +0x190
    NSMutableSet * _expandedMsgLocalIDSet; // +0x198
    NSMutableArray * _needResetAlphaCellViewList; // +0x1a0
    NSMutableSet * _expandSystemMsgSet; // +0x1a8
    NSString * _bizUsername; // +0x1b0
    NSString * _bizNickname; // +0x1b8
    NSString * _bizHeadImgUrl; // +0x1c0
}
- (id)init;
- (void)dealloc;
- (BOOL)message_folder_enable;
- (void)onPopFromNavigationController;
- (BOOL)CanRemoteRecord;
- (BOOL)CanSendVoipMsg;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(BOOL *)arg1;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)preAddMsg:(id)arg1 msgWrap:(id)arg2;
- (void)preAddVideoMsgWithInfo:(id)arg1;
- (id)genMsgSource;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (unsigned int)getMsgCountToLoad;
- (BOOL)shouldFoldHistoryMsg;
- (BOOL)canShowFoldHistoryCell;
- (void)onUnfoldHistoryMsg;
- (id)GetRightBarButtonImageName;
- (BOOL)isShowHeadImage:(id)arg1;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenContactInfo:(id)arg1 scrollToTab:(BOOL)arg2;
- (void)OpenDetailInfo;
- (void)OpenDetailInfoScrollToTab:(BOOL)arg1 uiFriendScene:(long long)arg2;
- (unsigned int)GetFirstLocalID;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)getEarlierMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)getLaterMessageWrapList:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 limit:(int)arg4 leftCount:(unsigned int *)arg5;
- (id)getLaterCombinedMessageWrapList:(id)arg1;
- (id)getEarlierMessageListWithFolder:(id)arg1;
- (id)makeAMessageFolder:(id)arg1;
- (id)getMessageWrapLocalIDListStr:(id)arg1;
- (BOOL)canCombineMessageWrapA:(id)arg1 messageWrapB:(id)arg2;
- (void)onTemplateReaderFolderCellWillExpand:(id)arg1;
- (void)onTemplateReaderFolderCellDidExpand:(id)arg1;
- (void)onTemplateReaderFolderCellWillCollapse:(id)arg1;
- (void)onTemplateReaderFolderCellDidCollapse:(id)arg1;
- (void)clickTimeNodeRightButton:(id)arg1;
- (void)tryExpandReaderMessageFolder:(id)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)getMsgFromLocalId:(unsigned int)arg1;
- (id)filteredMessagesFrom:(id)arg1;
- (unsigned int)getMsgMinCreateTimeToLoad;
- (void)processInsertedAsset:(id)arg1;
- (BOOL)supportWXKeyBoard;
- (id)wxKeyBoardSupportMessageTypes;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)processImageDidCancel;
- (void)processImageDidFinish;
- (BOOL)CanSendOriginalVideo;
- (long long)getLivePhotoMode;
- (BOOL)CanSendOriginalImage;
- (BOOL)CanSendMultiImage;
- (BOOL)CanSendVideoMsg;
- (void)displayDeviceListView:(id)arg1;
- (void)updateSubTitle:(id)arg1;
- (void)showErrTips:(int)arg1;
- (void)hideErrTips;
- (void)onFinishSelectedLocation;
- (void)ViewWillInit;
- (void)createAllLogicForContact:(id)arg1;
- (void)startScan;
- (void)ViewDidInit;
- (void)ViewWillAppear;
- (void)ViewDidAppear;
- (void)setNeedUpdateTitle:(BOOL *)arg1;
- (void)ViewWillDisappear;
- (void)ViewDidDisappear;
- (BOOL)mainSwitch_shouldHandleAppmsg;
- (BOOL)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (BOOL)shouldPreDownloadPageData;
- (unsigned int)currPageAppmsgEnterType;
- (unsigned int)currPageAppmsgReportScene;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (void)onTextBeginEditing:(id)arg1;
- (void)resetUILogicController:(id)arg1;
- (void)startReceiveMsg:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)showKeyboardImmediatelyStart;
- (void)showKeyboardImmediatelyEnd;
- (void)recordToolViewStatus;
- (id)getInputToolView;
- (id)getLogicController;
- (void)updateToolViewStatus;
- (void)connectDevice;
- (void)disconnectDevice;
- (void)reportInputToolBarModeChanged:(unsigned int)arg1;
- (void)openProfile;
- (double)getCustomizedAreaWidth;
- (BOOL)shouldHideOrginInputToolView;
- (BOOL)showKeyboardImmediately;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(BOOL *)arg3;
- (void)updateContactFromServer;
- (id)GetPossibleContactByName:(id)arg1;
- (BOOL)hasHardDeviceBrandSubtitle;
- (void)onTipsViewClick:(id)arg1;
- (void)onKFWorkerMsgDisplay:(id)arg1;
- (void)advancePreloadKFWorkerWeApp:(id)arg1;
- (void)reportAvatarClick:(id)arg1 message:(id)arg2;
- (void)onKFWorkerMsgAvatarClicked:(id)arg1;
- (id)generateURLQueryDict:(id)arg1;
- (void)hasTapReaderNodeView;
- (void)tryUpdateBrandLiveStatusIfNeed;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(BOOL)arg2 finderFeedExportId:(id)arg3;
- (void)onBrandLiveBannerEventWithAction:(unsigned int)arg1;
- (void)addLocalSystemMessageWhenEnterSession;
- (void)onClickMoreForTemplateMsg:(id)arg1;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (id)viewControllerToShowPageSheet;
- (void)openSettingView;
- (void)deleteAllMessage;
- (void)recordSessionInfoWhenEnter;
- (id)genSessionInfoWhenEnter;
- (id)genSessionInfoWhenExit;
- (id)inputViewReferMsgFromExtraInfo;
- (id)pageIdentityFromExtraInfo;
- (void)report30451:(id)arg1 redirectType:(int)arg2;
- (void)onPreForwardMsgToContact:(id)arg1 msgWrap:(id)arg2;
- (void)onPreForwardVideoToContact:(id)arg1 videoInfo:(id)arg2;
- (void)onWillEnterRoom;
- (void)onWillEnterRoom:(id /* block */)arg1;
- (void)onExitRoom;
- (void)scrollViewDidScroll:(id)arg1;
- (id)getViewController;
- (void)initWxGameLiteApp:(id)arg1 callback:(id /* block */)arg2;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (id)expandedMsgLocalIDSet;
- (void)setExpandedMsgLocalIDSet:(id)arg1;
- (id)needResetAlphaCellViewList;
- (void)setNeedResetAlphaCellViewList:(id)arg1;
- (id)expandSystemMsgSet;
- (void)setExpandSystemMsgSet:(id)arg1;
- (BOOL)usingBizIdentity;
- (void)setUsingBizIdentity:(BOOL)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)bizNickname;
- (void)setBizNickname:(id)arg1;
- (id)bizHeadImgUrl;
- (void)setBizHeadImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
