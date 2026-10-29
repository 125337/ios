@interface BrandContentLogicController : WeixinContentLogicController <BrandProfileSettingViewControllerDelegate, BrandActionReportLogicControllerDelegate, BrandTemplateMsgAuthLogicDelegate, ForwardMessageLogicExt, MMLiteAppExt, PBMessageObserverDelegate, IStrangerContactMgrExt, BrandStyleUILogicControllerDelegate, MsgDelegate, BrandDeviceConnectLogicControllerDelegate, IWCDeviceBrandMgrExt>
{
    TipsView * m_tipsView; // +0x110
    BrandStyleUILogicController * m_uiLogicController; // +0x118
    BrandActionReportLogicController * m_reportLogicController; // +0x120
    BrandDeviceConnectLogicController * m_connectLogicController; // +0x128
    BOOL m_hasReportedPrivateMsgExpose; // +0x130
    BizPrivateMsgInputTapObserver * m_privateMsgInputTapObserver; // +0x138
    BOOL m_isLastInMenuMode; // +0x140
    unsigned long long m_lastInputMode; // +0x148
    unsigned long long m_lastPoisitionMode; // +0x150
    unsigned long long m_lastContentMode; // +0x158
    BOOL m_shouldRecordToolViewStatus; // +0x160
    BOOL m_isShowKeyboardImmediately; // +0x161
    BOOL m_hasPreloadKFWorkerWeApp; // +0x162
    unsigned int m_stat_timeStart; // +0x164
    unsigned int m_stat_totalUnreadCount; // +0x168
    unsigned int m_stat_massSendUnreadCount; // +0x16c
    unsigned int m_stat_templateUnreadCount; // +0x170
    unsigned int m_stat_latestMsgType; // +0x174
    unsigned int m_stat_latestMsgDuration; // +0x178
    unsigned int m_stat_indexInSessionList; // +0x17c
    TemplateMsgExposeLogic * m_exposeLogic; // +0x180
    BrandTemplateMsgAuthLogic * m_subscrMsgLogic; // +0x188
    BOOL m_hasUnfoldHistoryMessage; // +0x190
    BOOL m_hasSetInputReferMsg; // +0x191
    MMLiteAppViewController * m_gameLiteViewController; // +0x198
    unsigned int m_lastFetchExtInfoTime; // +0x1a0
    BOOL m_hasReportedCustomerHelperViewExp; // +0x1a4
    BOOL _usingBizIdentity; // +0x1a5
    BOOL _privateMsgScopeExptEnable; // +0x1a6
    BOOL _didEntryJumpHighlightAfterAppear; // +0x1a7
    unsigned int _currentUserSentMsgCount; // +0x1a8
    NSMutableSet * _expandedMsgLocalIDSet; // +0x1b0
    NSMutableArray * _needResetAlphaCellViewList; // +0x1b8
    NSMutableSet * _expandSystemMsgSet; // +0x1c0
    NSString * _bizUsername; // +0x1c8
    NSString * _bizNickname; // +0x1d0
    NSString * _bizHeadImgUrl; // +0x1d8
    MMInputToolView * _toolViewEx; // +0x1e0
    BrandMsgForbiddenTipsView * _inputTipsView; // +0x1e8
}
- (id)init;
- (void)dealloc;
- (void)Register;
- (void)UnRegister;
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
- (BOOL)shouldUseNewTipsNavBar;
- (id)privateMsgTraceContext;
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
- (BOOL)shouldFilterMassSend:(id)arg1;
- (id)getFilteredNotMassSendMessages:(id)arg1 fromID:(unsigned int)arg2 fromCreateTime:(unsigned int)arg3 toCreateTime:(unsigned int)arg4 limit:(int)arg5 leftCount:(unsigned int *)arg6;
- (unsigned int)getMsgMinCreateTimeToLoad;
- (void)processInsertedAsset:(id)arg1;
- (void)checkAndCheckUnreadMsg;
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
- (BOOL)CanSendVoiceMsg;
- (id)getMsgSendOpEntry;
- (void)displayDeviceListView:(id)arg1;
- (id)getDefaultTitleTailSubViews;
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
- (id)getSubTitle;
- (BOOL)mainSwitch_shouldHandleAppmsg;
- (BOOL)inPageSwitch_shouldPreCreateAndUpdateAndTryReport;
- (BOOL)shouldPreDownloadPageData;
- (unsigned int)currPageAppmsgEnterType;
- (unsigned int)currPageAppmsgReportScene;
- (void)hideSubscribeTipsIfNeeded;
- (void)showOneMsgBeforeReplyTipsIfNeed;
- (void)hideOneMsgBeforeReplyTipsIfNeeded;
- (void)onClickBrandPrivateMsgTipsBar:(id)arg1;
- (void)CustomToolViewEX:(id)arg1 inputPresenter:(id)arg2;
- (BOOL)privateMsgScopeEnable;
- (id)forbiddenInputTipsWording;
- (void)updateForbiddenInputTipsViewForToolView:(id)arg1;
- (BOOL)brandPendingSendCanShowEntry;
- (void)onTextBeginEditing:(id)arg1;
- (void)resetUILogicController:(id)arg1;
- (void)startReceiveMsg:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)showKeyboardImmediatelyStart;
- (void)showKeyboardImmediatelyEnd;
- (void)recordToolViewStatus;
- (id)getInputToolView;
- (id)getLogicController;
- (BOOL)shouldReportCustomerHelperViewExpAndMarkReported;
- (void)updateToolViewStatus;
- (void)connectDevice;
- (void)disconnectDevice;
- (void)onCustomMenuClickWithMenuName:(id)arg1 subMenuName:(id)arg2;
- (void)reportInputToolBarModeChanged:(unsigned int)arg1;
- (void)openProfile;
- (double)getCustomizedAreaWidth;
- (BOOL)shouldHideOrginInputToolView;
- (BOOL)showKeyboardImmediately;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(BOOL *)arg3;
- (void)initCurrentUserSentMsgCount;
- (void)updateContactFromServer;
- (id)GetPossibleContactByName:(id)arg1;
- (BOOL)hasHardDeviceBrandSubtitle;
- (BOOL)shouldShowUnfollowedSubTitle;
- (void)fetchExtInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
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
- (void)onDeleteContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
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
- (BOOL)privateMsgScopeExptEnable;
- (void)setPrivateMsgScopeExptEnable:(BOOL)arg1;
- (id)toolViewEx;
- (void)setToolViewEx:(id)arg1;
- (id)inputTipsView;
- (void)setInputTipsView:(id)arg1;
- (unsigned int)currentUserSentMsgCount;
- (void)setCurrentUserSentMsgCount:(unsigned int)arg1;
- (BOOL)didEntryJumpHighlightAfterAppear;
- (void)setDidEntryJumpHighlightAfterAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end
