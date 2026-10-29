@interface BaseMsgContentViewController : MMUIViewController <WCFinderShareCustomTransitionProtocol, MMInputToolViewExt, MMUIActivityIndicatorViewDelegate, _TtP6WeChat19IMagicEmojiDelegate_, _TtP6WeChat10IMEHandler_, MsgSearchHelperDelegate, MsgImgFullScreenWindowDelegate, BannerToastExt, IdleTimerUtilExt, BadRoomLogicControllerDelegate, MsgImgWeakBrowseViewControllerDelegate, MsgImgFullScreenViewControllerDelegate, WCCanvasPageViewControllerDelegate, ChatBackgroundExt, UIViewControllerPreviewingDelegate, StreamVoiceInputViewControllerDelegate, WXGImportMessageNotification, INewSyncExt, IWAUpdatableMsgMgrExt, WCGroupUndoneEduViewDelegate, SendPatExt, VoiceTransTipsHelperDelegate, MMMsgContentNavBarDelegate, MMNewMsgContentNavBarDelegate, WCGeneralMonitorDelegate, MMTitleViewDelegate, ChatRoomHistoryMgrExt, ForwardMessageLogicDelegate, SpeakTextLogicControllerDelegate, MMMsgTipsExpandMultiHeadCardViewDelegate, MMLiveMorphDismissTarget, MsgImgFullScreenTransitionDelegate, MsgPlayingFacadeExt, SnapshotPrinterViewProtocol, QuickReplyMsgExt, MinimizationTransitionControllerDelegate, IAutoTranslateMsgExt, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, UINavigationControllerDelegate, MMTableViewDelegate, TypingControllerDelgate, MessageNodeViewDelegate, ChatViewModelDelegate, MsgDelegate, MMInputToolViewDelegate, ShareMessageConfirmLogicHelperDelegate, MMReadMailViewDelegate, IVOIPExt, AppDetailDelegate, IMsgExt, IMsgRevokeExt, IVOIPUILogicMgrExt, MultiSelectContactsViewControllerDelegate, MMScrollActionSheetDelegate, FirstUnReadTipViewDelegate, WCNetworkMediaPlayerDelegate, MMRichTextSelectEventDelegate, MMRTCMenuResponderDelegate, SolitaireDisplayViewControllerDelegate, MMSpecialMsgSearchHelperDelegate, MMEdgeTipsViewDelegate>
{
    NSMutableArray * m_arrMessageNodeData; // +0x68
    unsigned int m_uLastTime; // +0x70
    unsigned int m_uLastMoreMsgTime; // +0x74
    BOOL m_bKeyboardShow; // +0x78
    BOOL m_bToolViewHidden; // +0x79
    unsigned long long m_moreMsgIndex; // +0x80
    BOOL m_bReadtToLoadMoreMsg; // +0x88
    id <BaseMsgContentDelgate> m_delegate; // +0x90
    Class m_delegateClass; // +0x98
    MMTimer * m_LockerTimer; // +0xa0
    MMTableView * m_tableView; // +0xa8
    MMUIActivityIndicatorView * m_activityView; // +0xb0
    UIView * m_headerView; // +0xb8
    MMInputToolView * _inputToolView; // +0xc0
    UIImageView * m_backgroundView; // +0xc8
    NSMutableArray * m_arrDeleteRows; // +0xd0
    BOOL m_bViewUnloaded; // +0xd8
    CGPoint m_pTableViewOffset; // +0xe0
    long long m_keyboardHeight; // +0xf0
    NSString * m_text; // +0xf8
    unsigned long long m_inputMode; // +0x100
    unsigned long long m_positionMode; // +0x108
    unsigned long long m_contentMode; // +0x110
    double m_fKeyboardAnimationDuration; // +0x118
    MsgSearchHelper * m_oMsgSearchHelper; // +0x120
    int m_iInitTableViewContentOffset; // +0x128
    BOOL m_bNeedAdjustTableViewContentOffset; // +0x12c
    unsigned int m_uiSearchResultNodeViewHeight; // +0x130
    long long m_uiInterfaceOrientation; // +0x138
    MMLoadingView * m_loadingView; // +0x140
    ShareMessageConfirmLogicHelper * _shareMessageConfirmLogicHelper; // +0x148
    MMMultiSelectToolView * _multiSelectView; // +0x150
    NSMutableArray * m_arrSelectMsgLocalID; // +0x158
    UIView * m_msgReceivingTipsView; // +0x160
    unsigned int m_uiSelectSearchMsgID; // +0x168
    BOOL m_bShouldShowKeyboardAnimation; // +0x16c
    BOOL m_bIsRevokeAdding; // +0x16d
    int m_msgCounerDurOneSync; // +0x170
    BOOL m_bHightlightedSearchedMsgNode; // +0x174
    CGPoint m_decelerateTarget; // +0x178
    CMessageWrap * m_firstUnReadMsg; // +0x188
    FirstUnReadTipView * m_jumpFirstUnReadBtn; // +0x190
    unsigned long long m_unreadCount; // +0x198
    MMScrollActionSheet * m_scrollActionSheet; // +0x1a0
    MMUIWindow * m_fullScreenWindow; // +0x1a8
    BaseChatViewModel * m_fullScreenNodeData; // +0x1b0
    MMSpecialMsgSearchHelper * m_specialMsgSearchHelper; // +0x1b8
    NSMutableDictionary * m_magicEmojiReportInfo; // +0x1c0
    BOOL m_isMsgReceiveTipsJacking; // +0x1c8
    unsigned int m_openTrackScene; // +0x1cc
    timeval m_menuHideTime; // +0x1d0
    BOOL m_shouldScrollToBottomAfterRotate; // +0x1e0
    BOOL m_resignInputToolViewFirstResponder; // +0x1e1
    BOOL m_scrollingTableToBottom; // +0x1e2
    _NSRange m_scrollingInvisibleRange; // +0x1e8
    BOOL m_needLayoutOnMenuHide; // +0x1f8
    BOOL m_needScrollOnMenuHide; // +0x1f9
    BOOL m_patToastShowing; // +0x1fa
    unsigned long long m_lastSectionCount; // +0x200
    int m_scrollingToTop; // +0x208
    BOOL m_scrollingToFirstUnRead; // +0x20c
    double m_initialOffset; // +0x210
    CMessageWrap * m_lastMsgInNewArray; // +0x218
    UIView * m_footerView; // +0x220
    MMUIActivityIndicatorView * m_footerActivityView; // +0x228
    BOOL m_needLoadMoreWhenScrollToFistUnRead; // +0x230
    BOOL m_needHideFirstUnReadBtn; // +0x231
    BOOL m_bMovingToMainFrameTab; // +0x232
    double m_bannerHeight; // +0x238
    BOOL m_isPeekPreview; // +0x240
    MsgImgFullScreenWindow * m_imgFullScreenWnd; // +0x248
    UIView * m_snapshotView; // +0x250
    unsigned int m_uiEnterRoomTime; // +0x258
    unsigned int m_uiEnterRoomUnreadCount; // +0x25c
    BOOL m_bCloseForViewDetail; // +0x260
    unsigned int _startTime; // +0x264
    id <UIViewControllerPreviewing> _previewingContext; // +0x268
    StreamVoiceInputViewController * m_streamVoiceInputViewController; // +0x270
    UIView * m_topBarView; // +0x278
    NSString * m_voiceStreamTitle; // +0x280
    NSString * m_voiceStreamSavedText; // +0x288
    BOOL m_bHasAppear; // +0x290
    MMDropManager * m_dropManager; // +0x298
    ReaderReporter * m_readerReporter; // +0x2a0
    double m_voiceRecordPopUpHeight; // +0x2a8
    MMMsgMenuReporter * m_menuReporter; // +0x2b0
    double m_lastScrollingOffsetY; // +0x2b8
    id /* block */ m_multiSelectChecker; // +0x2c0
    id /* block */ m_multiSelectHandler; // +0x2c8
    BOOL m_bForbidMultiSelect; // +0x2d0
    NSMutableArray * m_multiManualUnSelectedId; // +0x2d8
    CMessageWrap * m_lastScrollingHandledMessage; // +0x2e0
    VoiceTransTipsHelper * m_tipsHelper; // +0x2e8
    BOOL m_bIsLocating; // +0x2f0
    UIView * m_translateTipView; // +0x2f8
    CMessageWrap * m_referOwnerMsg; // +0x300
    CMessageWrap * m_referKeeperMsg; // +0x308
    NSMutableArray * m_newArrMessageNodeData; // +0x310
    BOOL m_canHighLightScrollTargetMsg; // +0x318
    CMessageWrap * m_scrollTargetMsg; // +0x320
    double m_scrollMarginTop; // +0x328
    BOOL m_bMultiSelectMode; // +0x330
    CMessageWrap * m_currentSpeakTextMsg; // +0x338
    UIView * m_speakTextTipView; // +0x340
    CADisplayLink * m_speakTextHLTimer; // +0x348
    unsigned long long m_startSpeakTextTime; // +0x350
    SpeakTextLogicController * m_speakTextController; // +0x358
    NSMutableSet * m_embedExcerptMsgHasExposedSet; // +0x360
    NSMutableSet * m_weappTailMsgHasExposedSet; // +0x368
    MMEdgeTipsView * m_playingTipsView; // +0x370
    BOOL m_playingTipsShowFlag; // +0x378
    BOOL _m_bIsInMainFrame; // +0x379
    BOOL _dismissWithoutReset; // +0x37a
    BOOL _isShowMsgSearch; // +0x37b
    BOOL _isPresentingOtherQuickReplaySession; // +0x37c
    BOOL _didTouchMinimizeCorner; // +0x37d
    BOOL _isAccessbilityBoldTextEnable; // +0x37e
    unsigned int _uiMultiSelectMaxCount; // +0x380
    unsigned int _uiMultiSelectMaxMegaBytes; // +0x384
    int _tableScrollActionType; // +0x388
    NSMutableArray * m_shareContacts; // +0x390
    unsigned long long m_searchScene; // +0x398
    id <MMMsgInputPresenter><MMRecordUIManager> _inputPresenter; // +0x3a0
    UIView * _inputControlView; // +0x3a8
    BadRoomLogicController * _m_badRoomLogicController; // +0x3b0
    MMRichTextCoverView * _richTextCoverView; // +0x3b8
    RichTextView * _richTextView; // +0x3c0
    MMInputMsgReferView * _msgReferView; // +0x3c8
    ChatRoomHistoryShareStat * _oRoomHistoryStat; // +0x3d0
    MMMsgContentNavBar * _tipsNavBar; // +0x3d8
    MMNewMsgContentNavBar * _tipsNewNavBar; // +0x3e0
    UIView * _chatRoomDismissedView; // +0x3e8
    MMEdgeTipsView * _referTipsView; // +0x3f0
    MMEdgeTipsView * _playingTipsView; // +0x3f8
    UIScreenEdgePanGestureRecognizer * _popBackInteractivePopGesture; // +0x400
    UIColor * _chatroomBkgColor; // +0x408
    CMessageWrap * _locateMsg; // +0x410
    MiniRecTransitionController * _minimizationTransitionController; // +0x418
    CMessageWrap * _autoTranslateAnchorMsg; // +0x420
    double _autoTranslateAnchorMsgLastContentOffset; // +0x428
}
+ (void)reload:(id)arg1 sections:(id)arg2 withRowAnimation:(long long)arg3;
- (void)doShareAnimation;
- (BOOL)shouldShowQuickReplyPush:(id)arg1;
- (void)showBizTipsBar:(long long)arg1 icon:(id)arg2 title:(id)arg3 showRightArrow:(BOOL)arg4;
- (void)showNotificationTipsBar:(long long)arg1 icon:(id)arg2 title:(id)arg3 allowLineBreak:(BOOL)arg4;
- (void)showBizTipsBar:(long long)arg1 animationIcons:(id)arg2 iconSize:(CGSize)arg3 animationDuration:(double)arg4 title:(id)arg5;
- (void)showBizTipsBar:(long long)arg1 icon:(id)arg2 title:(id)arg3;
- (void)hideBizTipsBar:(long long)arg1 animated:(BOOL)arg2;
- (void)showExpandView:(id)arg1 animated:(BOOL)arg2;
- (void)hideExpandViewWithAnimated:(BOOL)arg1;
- (void)hideCurrentTipsBar:(BOOL)arg1;
- (void)hideAllTipsBarWithAnimated:(BOOL)arg1;
- (BOOL)isShowingTipsBar;
- (BOOL)isShowingExpandView;
- (double)currentTipsBarHeight;
- (id)currentShowingTipsItem;
- (void)setTipsBarVisible:(BOOL)arg1;
- (void)showTipsBarWithItem:(id)arg1;
- (void)showMultipleTipsBarWithItems:(id)arg1;
- (void)showCommonTipsEarMode;
- (void)showCommonTipsLoudMode;
- (void)showEarModeGuideTips;
- (void)showCommonTipsEarBack;
- (void)showCommonTipsSecurityBanner:(id)arg1 rightBtn:(id)arg2 userData:(id)arg3;
- (void)showCommonTipsPersistentSecurityBanner:(id)arg1 userData:(id)arg2;
- (void)showCommonTipsAddFriendWithContact:(id)arg1;
- (void)showCommonTipsRecommendFriend:(id)arg1;
- (void)setCustomNavBarTitleView:(id)arg1;
- (void)setNavBarHeight:(double)arg1;
- (void)hideExpandViewOfFirstTipsViewAnimated:(BOOL)arg1;
- (BOOL)isInPageSheetMode;
- (void)updatePageSheetNavBar;
- (void)onPageSheetTitleViewUpdate:(id)arg1;
- (void)onPageSheetModeInit;
- (void)onPageSheetModeReset;
- (void)onPageSheetDidAppear;
- (void)onPageSheetDidDisappear;
- (void)onPageSheetTransitionToNewSize;
- (void)onPageSheetLayoutContentView;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (void)onDismissPageSheetSession;
- (double)getLeftBarButtonWidth;
- (double)getRightBarButtonWidth;
- (void)onToolViewChangeToMode:(unsigned long long)arg1 Height:(double)arg2;
- (void)onHiddenRecordOperateView;
- (void)onShowRecordOperateView;
- (void)onAppTaskWillRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (void)onAppTaskDidRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (void)MMUIViewControllerDidBeDismissed:(id)arg1;
- (void)onActivityIndicatorStartAnimating;
- (void)onActivityIndicatorEndAnimating;
- (id)pageSheetOriginLeftButton;
- (void)setPageSheetOriginLeftButton:(id)arg1;
- (BOOL)isPageSheetEditing;
- (void)setIsPageSheetEditing:(BOOL)arg1;
- (BOOL)isPageSheetSessionWillRestore;
- (void)setIsPageSheetSessionWillRestore:(BOOL)arg1;
- (id)getPageSheetContainerViewController;
- (BOOL)mm_isLastTranslateAvailableMsg:(id)arg1 includeSelf:(BOOL)arg2;
- (BOOL)isMsgVisible:(id)arg1;
- (id)getFirstVisibleMsg;
- (void)onSearchButton:(id)arg1;
- (void)initGetSpecialMsgSearchHelper;
- (void)initIsShowMsgSearch;
- (unsigned int)getMsgSearchBusinessType;
- (void)handleMsgViewUpdateTitleView:(id)arg1 ignoreAnimation:(BOOL)arg2;
- (void)resetRihgButton;
- (void)handleMsgUpdateRightBar;
- (void)handleMsgViewSearchDidLoad;
- (BOOL)msgSearchShouldInteractivePop;
- (void)handleMsgSearchViewDidLayoutSubviews;
- (void)handleMsgSearchViewWillAppear;
- (void)handleMsgSearchViewDidAppear;
- (void)handleMsgSearchViewWillPop;
- (void)msgSearchBarActiveForSpecialMsg;
- (void)msgSearchBarCancelForSpecialMsg;
- (void)msgSearchDidDismissForSpecialMsg;
- (void)msgSearchBarDoSearchForSpecialMsg;
- (id)getChatContactForSpecialMsg;
- (void)didSelectSearchResultForMessageWrapForSpecialMsg:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)handleWCPayBrandSearchRouteInfo:(id)arg1;
- (id)getMagicEmojiViewHolder;
- (void)shakeAllVisiableViews:(BOOL)arg1;
- (id)onGetMetaWithId:(id)arg1 needFrame:(BOOL)arg2;
- (id)getMetaByID:(id)arg1 needFrame:(BOOL)arg2;
- (id)getMagicEmojiBackgroudParentView;
- (id)getVisibleMetaDict:(BOOL)arg1;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)findNodeIndexByLocalId:(unsigned int)arg1;
- (void)removeAllObjectsFromMessageNodeDatas;
- (void)removeObjectsFromMessageNodeDatas:(id)arg1;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)reloadNodeWithMessageWrap:(id)arg1 WithTryScroll:(BOOL)arg2 ReloadAll:(BOOL)arg3;
- (void)reloadVisibleNodeWithCellView:(id)arg1;
- (void)shakeHeadForOtherPatSelfWithMessageWrap:(id)arg1;
- (void)updatePatMessageWrapReadStatus;
- (void)onClickPatMessageLinkWithUrl:(id)arg1;
- (void)onClickTopicSearchEntry;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(id)arg2;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onStartRevokePatFromChat:(id)arg1;
- (void)onRevokePat:(id)arg1 fromChat:(id)arg2 isSuccess:(BOOL)arg3;
- (void)onShowPatToast;
- (void)onHidePatToast;
- (BOOL)isNeedInsertTimeNodeWhenAddSystemPatMsg;
- (void)onReaderFolderCellWillExpand:(id)arg1;
- (void)onReaderFolderCellDidExpand:(id)arg1;
- (void)onReaderFolderCellWillCollapse:(id)arg1;
- (void)onReaderFolderCellDidCollapse:(id)arg1;
- (void)clickTimeNodeRightButton:(id)arg1;
- (void)onTemplateReaderFolderCellWillExpand:(id)arg1;
- (void)onTemplateReaderFolderCellDidExpand:(id)arg1;
- (void)onTemplateReaderFolderCellWillCollapse:(id)arg1;
- (void)onTemplateReaderFolderCellDidCollapse:(id)arg1;
- (id)findNodeDataByLocalId:(unsigned int)arg1;
- (id)findNodeDataBySvrId:(long long)arg1;
- (id)visibleViewModelList;
- (id)findNodeViewByLocalId:(unsigned int)arg1;
- (id)findNodeViewByLocalId:(unsigned int)arg1 backward:(BOOL)arg2;
- (unsigned long long)getLastNodePreContentSizeHeight;
- (unsigned long long)getCurContentSizeHeight;
- (unsigned long long)getMsgContentSizeHeight:(unsigned int)arg1;
- (void)viewDidTransitionToNewSize;
- (void)clearNodeLayoutCache;
- (void)updateTitleView:(id)arg1;
- (void)updateTitleView:(id)arg1 ignoreAnimation:(BOOL)arg2;
- (void)setTitleView:(id)arg1;
- (void)ScrollToBottomAnimatedAndLoadMoreNode;
- (void)ScrollToBottomAnimated:(BOOL)arg1;
- (void)ScrollToTopAnimated:(BOOL)arg1;
- (BOOL)isScrollToBottom;
- (void)tryScrollToBottomAnimated:(BOOL)arg1;
- (double)getContentViewY;
- (double)tableViewHeight;
- (void)openChatInfo:(id)arg1;
- (void)deleteNode:(id)arg1 withDB:(BOOL)arg2 animated:(BOOL)arg3;
- (id)getParentTableView;
- (id)getChatContact;
- (void)msgSearchBarCancel;
- (void)msgSearchBarDoSearch;
- (void)locateToMsg:(id)arg1;
- (void)highlightMsg:(id)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (void)highLightSearchKeyWordInSelectCell;
- (void)unHighLightSearchKeyWordInSelectCell;
- (void)highLightSelectSearchCell;
- (void)unHighLightSelectSearchCell;
- (id)chatContactForMessageWrap:(id)arg1;
- (void)PreviewImage:(id)arg1;
- (void)PreviewImage:(id)arg1 needEdit:(BOOL)arg2;
- (void)PreviewImage:(id)arg1 soundable:(BOOL)arg2 snapshotView:(id)arg3;
- (void)PreviewImage:(id)arg1 soundable:(BOOL)arg2 snapshotView:(id)arg3 title:(id)arg4;
- (void)PreviewImage:(id)arg1 soundable:(BOOL)arg2 snapshotView:(id)arg3 needEdit:(BOOL)arg4;
- (void)PreviewImage:(id)arg1 soundable:(BOOL)arg2 snapshotView:(id)arg3 needEdit:(BOOL)arg4 title:(id)arg5;
- (id)transitionComponentForMsg:(id)arg1;
- (void)updateTypingTitle:(id)arg1;
- (id)getViewController;
- (void)hasTapReaderNodeView;
- (void)resendMessage:(id)arg1 showAlert:(BOOL)arg2;
- (void)tapVideoStatus_NodeView:(id)arg1;
- (void)tapVideoStatus_NodeView:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapImage_NodeView:(id)arg1;
- (void)tapImage_NodeView:(id)arg1 needEditImage:(BOOL)arg2;
- (void)tapPushMail_NodeView:(id)arg1 withPushMailWrap:(id)arg2;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(id)arg2 WithMsg:(id)arg3;
- (void)tapAppNodeView:(id)arg1;
- (void)jumpWebView:(id)arg1 nsUrl:(id)arg2 sender:(id)arg3 oView:(id)arg4 nsRawUrl:(id)arg5;
- (void)onContinueUploadAppMsg:(id)arg1;
- (void)onStopDownloadAppMsg:(id)arg1;
- (void)onContinueDownloadAppMsg:(id)arg1;
- (void)onClickMessageWrapOpenedWebViewUseFastLoad:(id)arg1;
- (void)onClickSourceView:(id)arg1;
- (void)PlayVideo:(id)arg1 soundable:(BOOL)arg2;
- (void)onKFWorkerMsgDisplay:(id)arg1;
- (void)reportAvatarClick:(id)arg1 message:(id)arg2;
- (void)onKFWorkerMsgAvatarClicked:(id)arg1;
- (void)headerImageClicked:(id)arg1;
- (void)headerImageClickedWithMsg:(id)arg1;
- (id)brandReaderReporter;
- (void)readerViewClickedWithMsg:(id)arg1;
- (void)showEarModeTips;
- (void)onEmoticonSourceTipClick;
- (void)shouldShowRelativeEmoticonViewControllerWithEmoticonWrap:(id)arg1 andMessageWrap:(id)arg2;
- (id)getRecentMessageWrapListForEmoticonRecommend;
- (void)onStartTextSolitaire:(id)arg1 EnterScene:(unsigned long long)arg2;
- (void)showExposeViewController;
- (void)onClickMoreForTemplateMsg:(id)arg1;
- (void)onExposeTemplateMsg:(id)arg1 extraData:(id)arg2;
- (void)clickLinkToExpose;
- (void)clickShieldBrandMsg;
- (void)clickReceiveBrandMsg;
- (void)clickWeAppReceiveSessionMsg;
- (void)clickLinkToDealWithSysXml:(id)arg1 fromScene:(id)arg2;
- (void)hadShowNewXmlSystemMessage:(id)arg1;
- (void)clickEditRevokeContentSysMsg:(id)arg1;
- (void)clickCreateFinderCLubAccountSysMsg:(id)arg1;
- (void)clickTransferClubAccount:(id)arg1;
- (void)clickFinderJumpInfoSysMsg:(id)arg1;
- (void)clickNewAASysMsg:(id)arg1 withMsgLocalID:(unsigned int)arg2;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)JumpToViewStreamVideo:(id)arg1;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)onClosePlayer;
- (void)jumpToDetail:(id)arg1;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(BOOL)arg1;
- (void)onReceiveSecurityBannerMsg:(id)arg1 withData:(id)arg2;
- (void)checkShowRecommandFriendTip:(BOOL)arg1;
- (double)getTipsHeight;
- (void)setAddFriendTipShow:(BOOL)arg1 contact:(id)arg2;
- (void)setSecurityTipShow:(BOOL)arg1;
- (void)SetMsgPlayed:(id)arg1;
- (void)BeginPlaying:(id)arg1 Resume:(BOOL)arg2;
- (void)showPlayVoiceTipsIfNeed;
- (void)EndPlaying:(id)arg1;
- (void)StartPlayingNodeView:(id)arg1;
- (void)StopPlayingNodeView:(id)arg1;
- (void)ShowEarBackTips;
- (id)GetMessagesWrapArray;
- (id)GetMessageNodeDataArray;
- (CGRect)getNodeRectInScreenWithMsg:(id)arg1;
- (CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (CGRect)getNodeRectInScreen:(unsigned int)arg1 innerVisible:(BOOL)arg2;
- (CGRect)getNodeReferRectInScreen:(unsigned int)arg1;
- (CGRect)getInputToolViewFrame;
- (id)getInputToolView;
- (long long)getTextViewMarkedLength;
- (void)StopUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StartUploadVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)revokeMsgByNodeView:(id)arg1;
- (void)onClickTranslateMsg:(id)arg1 translateInfo:(id)arg2;
- (void)startTextAutoTranslate;
- (void)stopTextAutoTranslate;
- (void)onClickVoiceTranslate:(id)arg1;
- (BOOL)reloadDataIfNeed;
- (void)onClickFavMenu:(id)arg1;
- (void)onClickPlayMusicBtn:(id)arg1 isPlay:(BOOL)arg2 musicInfo:(id)arg3 clickedOnBtn:(BOOL)arg4;
- (void)shareMsgToOpenSDKByNodeView:(id)arg1;
- (BOOL)isChatStatusNotifyOpen;
- (BOOL)isMsgCanRevoke:(id)arg1;
- (void)deleteNode:(id)arg1;
- (BOOL)isMsgSelected:(id)arg1;
- (BOOL)canLongPressOnHeadImage:(id)arg1;
- (void)longPressOnHeadImage:(id)arg1;
- (void)longPressOnHeadImageForDebug:(id)arg1;
- (void)deleteMail:(id)arg1;
- (void)tagLink:(id)arg1 messageWrap:(id)arg2;
- (void)clickAppLinkTextWithUrl:(id)arg1 messageWrap:(id)arg2;
- (void)onScrollToBottom;
- (void)onHideKeyboard;
- (void)onForwardMessageOK;
- (void)onMassSendSendAgain:(id)arg1;
- (void)onVerifyFTSIndexForMsg:(id)arg1;
- (void)onReplyMsg:(id)arg1;
- (void)onTopMsg:(id)arg1;
- (void)onCancelTopMsg:(id)arg1;
- (void)onTopMsgMenuItemExposed:(id)arg1;
- (void)onCancelTopMsgMenuItemExposed:(id)arg1;
- (void)onClickReferArea:(id)arg1;
- (void)onInputToolViewClearReferMsg;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 fromBanner:(BOOL)arg4;
- (void)switchEarMode;
- (void)onClickTextFloatPreView:(id)arg1;
- (void)showAlertWithTitle:(id)arg1;
- (void)scheduleOnMsg:(id)arg1;
- (void)showSearchWeAppBoxViewWithLinkStr:(id)arg1 andMessageSvrID:(long long)arg2;
- (BOOL)isShowHeadImage:(id)arg1;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (id)addTimeNode:(id)arg1 addMoreMsg:(BOOL)arg2;
- (id)addSplitNode:(id)arg1 addMoreMsg:(BOOL)arg2;
- (void)addFoldHistoryMessageNodeIfNeed;
- (BOOL)hasFoldHistoryMessageNode;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)handleReplyingMsgForRemovedMsgSvrId:(long long)arg1 useRevokeAlert:(BOOL)arg2;
- (void)addNoMoreMessageNode:(id)arg1 addMoreMsg:(BOOL)arg2;
- (unsigned int)getNeedAddTimeWithMsgWrap:(id)arg1 time:(unsigned int)arg2;
- (void)tryAddTipsNodeForInviteHistory:(id)arg1 addMoreMsg:(BOOL)arg2;
- (void)addChatViewModel:(id)arg1 addMoreMsg:(BOOL)arg2;
- (id)createViewModelWithMsgWrap:(id)arg1;
- (void)addMessageNode:(id)arg1 addMoreMsg:(BOOL)arg2;
- (BOOL)isNeedScrollViewAddPatMsg;
- (void)addMessageNode:(id)arg1 layout:(BOOL)arg2 addMoreMsg:(BOOL)arg3;
- (void)replaceMessageNode:(id)arg1 withMessageNodeList:(id)arg2;
- (void)initHistroyMessageNodeData;
- (void)onLoadMoreMessage;
- (void)onLoadMessageFail;
- (void)onLoadFirstScreenMsg:(BOOL)arg1;
- (void)onLoadFirstUnreadMsg:(id)arg1;
- (void)setTableFooterView:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)onLoadDownMoreMessage:(id)arg1;
- (void)setupDeepLinkConfig;
- (void)parseDeepLink:(id)arg1 animation:(BOOL)arg2;
- (void)initData;
- (void)enterSessionReport;
- (unsigned int)getSessionId;
- (void)MoreMsgBtnUpdate:(unsigned int)arg1;
- (void)initTableHeaderView;
- (void)reloadTableHeaderView:(BOOL)arg1;
- (void)initTableView;
- (void)initToolEmoticonView;
- (void)initToolView;
- (void)viewIsAppearing:(BOOL)arg1;
- (unsigned int)getInputToolViewScene;
- (BOOL)ShouldShowKeyboardAnimation;
- (BOOL)isViewControllerAnimated;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)initMultiSelectToolView;
- (void)openVideoCall;
- (void)openVoiceCall;
- (id)getRightBarButton;
- (id)getRightBarButton:(BOOL)arg1;
- (id)getLeftBarButton;
- (void)updateRightBar;
- (void)initCustomNavigationBar;
- (void)setNavBarBottomLineHidden:(BOOL)arg1;
- (BOOL)showNavigationBarSepLine;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)onBackButtonClicked:(id)arg1;
- (BOOL)showTrackExitAlert;
- (void)exitTracking;
- (double)getSearchBarHeight;
- (void)initMsgSearchHelper:(int)arg1;
- (void)resetMsgSearchHelper;
- (void)reloadBackgroundView;
- (id)getBackgroundView;
- (void)adjustTableViewOffset;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)initMagicEmoji;
- (void)recoverEmojiConfigs;
- (void)onTableEndScroll;
- (id)getVisibleMsgCells;
- (id)getMsgCellByLocalId:(unsigned int)arg1;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)mmTableViewDidFinishedLoading:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleSelectRowAtIndexPath:(id)arg1 bClick:(BOOL)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)applicationBecomeActive;
- (void)setReadStatusOnAppear;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)onPan:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)onTouchDown;
- (void)onSendMultiMsgToFriendWithPackedSend:(BOOL)arg1;
- (void)onSaveMultiMsg;
- (void)onDeleteMultiMsg;
- (BOOL)canPasteImage;
- (void)pasteImage:(id)arg1;
- (BOOL)canSendCaptureImage;
- (void)sendCaptruedImage:(id)arg1;
- (id)getCurrentChatName;
- (void)AsyncSendMessage:(id)arg1 replyingMsg:(id)arg2 isPasted:(BOOL)arg3;
- (BOOL)canSendTextMessage:(id)arg1;
- (void)sendToolViewText;
- (void)SendTextMessageToolView:(id)arg1;
- (id)wxKeyBoardSupportMessageTypes;
- (void)sendWXKeyBoardMessage:(id)arg1;
- (id)wxKeyBoardMessageContact;
- (void)layoutTranslateTipView;
- (void)onWillShowMenuController:(id)arg1;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)updateTableLayoutAnimateDuration:(double)arg1 Orientation:(long long)arg2;
- (void)scrollTableToBottomAnimated:(BOOL)arg1 init:(BOOL)arg2;
- (void)updateTableContentOffsetAnimated:(BOOL)arg1 OffsetDelta:(double)arg2;
- (void)adjustTableViewRect;
- (void)ToolViewPositionDidChanged:(BOOL)arg1 animated:(BOOL)arg2;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(BOOL *)arg1;
- (void)onPositionModeChangeTo:(unsigned long long)arg1 Animated:(BOOL)arg2;
- (void)reloadTableData;
- (void)reloadMessages;
- (void)reloadMessagesInternal;
- (void)onToolViewDidMoveToWindow;
- (BOOL)shouldHideToolViewOnKeyboardHide;
- (void)willShowMenuController:(id)arg1 inMsgWrap:(id)arg2;
- (void)willShowMenuController:(id)arg1 inMsgWrap:(id)arg2 menuSourceType:(int)arg3;
- (void)TextBeginEditing;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2 markedTextRange:(_NSRange)arg3;
- (BOOL)StartRecording:(id)arg1;
- (void)StopRecording;
- (void)CancelRecording;
- (BOOL)IsRecording;
- (id)CancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
- (BOOL)StopRecordingInTransState:(BOOL)arg1;
- (BOOL)onRecordWillStopWhenAppWillTerminate;
- (void)onRecordShouldPopTableViewBottom:(double)arg1;
- (void)onRecordShouldRestoreTableViewAnimated:(BOOL)arg1;
- (id)getVisibleLocalIds;
- (void)openMediaBrowser;
- (void)openFileBrowser;
- (void)openCameraController;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)SendNotGameEmoticonMessage:(id)arg1 errorMsg:(id)arg2;
- (void)onOpenFinderPicker;
- (void)onShareCard;
- (void)onMultiTalkButtonClick;
- (void)doJoinExistMultiTalk;
- (void)onVoipInvite;
- (void)onVideoVoipInvite;
- (void)onSelectLocation;
- (void)onInputToolWeAppButtonClickedWithItem:(id)arg1;
- (void)onShowInputToolWeAppAr:(id)arg1;
- (void)onChatRoomToolButtonClick;
- (void)onStreamVoiceInputButtonClick;
- (void)onStartLive;
- (void)onShowLiveEntrance;
- (void)onShowMusicEntrance;
- (void)onShowGiftEntrance;
- (double)getInputToolViewHeight;
- (double)getPageSheetModeBottomPadding;
- (void)streamVoiceInputViewHeightChanged;
- (void)streamVoiceInputBoardDidShow;
- (void)streamVoiceInputBoardWillHideWithText:(id)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputFullScreenExit;
- (void)showStreamVoiceInputMaskView:(BOOL)arg1;
- (void)editStreamVoiceTxtReturn;
- (void)onSendTextMsg:(id)arg1;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (void)openMyFavoritesListController;
- (void)onOpenMyCardPkgViewController;
- (void)transferMoneyLogic;
- (void)redEnvelopesLogic;
- (void)openServiceApp:(id)arg1;
- (id)getServiceAppList;
- (id)getMsgSendOpEntry;
- (id)getInputToolWeAppOpEntryAr;
- (long long)getInputToolWeAppNotShowIndex;
- (BOOL)IsShowAttachmentButtonRedDot;
- (void)OnClickAttachmentButton:(BOOL)arg1;
- (void)OnClickAttachmentButtonAction;
- (void)onTextDeleteAll;
- (id)chatUserNameForSightStatistics;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)updateDeleteCount;
- (void)onEditMessage:(id)arg1;
- (void)exitMultiSelectMode;
- (void)onReturn:(id)arg1;
- (void)onFinishMultiSelect:(id)arg1;
- (void)onHideMultiSelectView;
- (void)handleAfterDeleteAllMessage;
- (void)deleteAllMessage;
- (void)handleDeleteAllMessage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onDeleteMessage:(id)arg1;
- (void)updateMessageNodeStatus:(id)arg1;
- (long long)getEnterScene;
- (id)GetContact;
- (id)GetCContact;
- (void)SetVoiceEnabled:(BOOL)arg1;
- (void)fixInputToolViewKeyboard;
- (void)trySetInputToolviewFirstResponder;
- (void)viewWillAppear:(BOOL)arg1;
- (void)scrollToSearchedMsgNode;
- (BOOL)shouldInteractivePop;
- (void)onChatBackgroundChanged:(id)arg1;
- (BOOL)isUseDefaultChatBkgImage;
- (BOOL)isChatroomInDarkBkg;
- (BOOL)isViewModelMessageAutoTranslating:(id)arg1;
- (BOOL)isLastTranslateAvailableMsg:(id)arg1 includeSelf:(BOOL)arg2;
- (id)firstMsgAfterEnterSession;
- (BOOL)canShowOperationMenu;
- (void)viewDidAppear:(BOOL)arg1;
- (id)tagForActivePage;
- (id)tagForCurrentPage;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willDisappear;
- (void)willEnterRoom;
- (void)didExitRoom;
- (void)statEnterMsgChat;
- (void)willAppear;
- (BOOL)isSelfInNavigationStack;
- (void)onViewDisappear;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)tryMoveToMainFrame;
- (BOOL)willMoveToMainFrame;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)ShowAnnouncementBanner:(id)arg1;
- (void)HideAnnouncementBanner;
- (void)removeVoiceTip;
- (void)removeVoipAndPhoneTip;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)willShow;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (double)getTableViewVisibleHeightWithOrientation:(long long)arg1;
- (double)getVisibleHeight;
- (void)onTrySHowFirstUnReadButton;
- (void)tryShowFirstUnReadButtonAnimated;
- (void)animateShowFirstUnReadButton;
- (void)animateHideFirstUnReadButton;
- (void)updateFirstUnReadButtonOnShowBanner:(double)arg1;
- (void)tryAddUnReadSplitNode;
- (void)onScrollToFirstUnReadMsg;
- (unsigned long long)getFirstUnReadSplitNodeIndex;
- (unsigned long long)getFirstUnReadMessageIndex;
- (void)scrollToFirstUnReadMessage:(id)arg1;
- (void)returnToOriginalMsg:(id)arg1;
- (void)scrollToMessage:(id)arg1 highlight:(BOOL)arg2 marginTop:(double)arg3;
- (void)scrollToMessage:(id)arg1 highlight:(BOOL)arg2 marginTop:(double)arg3 animated:(BOOL)arg4;
- (double)calculateOffsetWithMsg:(id)arg1 marginTop:(double)arg2;
- (id)getFirstContentMessageNodeFromArray:(id)arg1;
- (id)getLastContentMessageNodeFromArray:(id)arg1;
- (void)onTipViewClick:(id)arg1;
- (void)handlePushTransitionFinish;
- (void)stopLockerTimesup;
- (void)beginLockerTimer;
- (void)lockerTimesup;
- (void)MenuControllerWillShow:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (BOOL)isStreamVoiceInputing;
- (BOOL)isStreamVoiceInputHiding;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(unsigned long long)arg2;
- (void)OnSendMessageCancel:(id)arg1;
- (void)viewDidLoad;
- (void)getIlinkStatusWithThisContact;
- (void)voiceoverStatusChanged;
- (void)onAccessibilityBoldTextChange;
- (void)resetToolView;
- (void)dealloc;
- (id)init;
- (void)Reset;
- (void)ReloadView;
- (void)reloadWholePage;
- (void)onDeleteAllMsg;
- (void)hideToolViewAnimated:(BOOL)arg1;
- (void)updateToolViewOrigin;
- (void)PreviewAppNode:(id)arg1 MsgWrap:(id)arg2 Pop:(BOOL)arg3;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)resetViewStatus;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (id)GetCurrentViewController;
- (id)getMsgTableView;
- (void)updateChatRoomData:(id)arg1;
- (void)showLoadingView;
- (void)showLoadingViewWithText:(id)arg1;
- (void)stopLoading;
- (void)stopLoadingAndShowOkWithText:(id)arg1;
- (void)stopLoadingAndAndShowErrorWithText:(id)arg1;
- (void)loadingAfterForwardMessageOK;
- (double)preferSnackBarBottomOffset;
- (double)getCustomizedAreaWidth;
- (BOOL)shouldHideOrginInputToolView;
- (void)updateBanner;
- (void)showTrackRoomTips;
- (void)showMultiTalkTips;
- (void)showLiveMsgTipsIfNeed;
- (void)showBrandLiveMsgTipsIfNeed;
- (void)hideTrackRoomTips;
- (void)hideMultiTalkTips;
- (void)hideLiveMsgTips;
- (void)hideBrandLiveMsgTips;
- (void)onMultiHeadCardViewButtonTapped:(id)arg1;
- (void)onMultiTalkTipsViewClick;
- (void)onTrackRoomTipsViewClick;
- (void)onMMLiveMsgTipsExpandViewEnterLive:(id)arg1;
- (void)onMMLiveMsgTipsExpandViewCloseLive:(id)arg1;
- (void)onMMLiveMsgTipsExpandViewShouldHide;
- (void)rotate:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onMoreOperateWithMsgId:(id)arg1;
- (void)showAlertTooMany;
- (void)showAlertTooMany:(unsigned int)arg1;
- (void)showAlertTooLarge;
- (void)OnMultiFavAddMessage;
- (void)OnMultiDeleteMessage:(id)arg1;
- (void)OnMultiForwardMessage;
- (void)OnMultiEmailMessage:(id)arg1;
- (void)ShowMultiSelectMoreOperation:(id)arg1;
- (void)OnMultiMsgMoreOperation:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)endSearchAndDisplay;
- (BOOL)isContactSizeOverScreen;
- (double)getInvisibleHeight;
- (void)startReceiveMsgWithTips:(id)arg1;
- (void)stopReceiveMsg;
- (void)showReceiveMsgTips;
- (void)onNewSyncStart;
- (void)onNewSyncFinish;
- (void)onSyncEnd;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1 extraInfo:(id)arg2;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onSightViewDetail:(id)arg1 vc:(id)arg2;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (long long)getMessageNodePosition:(id)arg1;
- (id)getChatTableViewCellWithMsg:(id)arg1;
- (id)getChatCellWithMsg:(id)arg1;
- (id)getVisibleCellViewsIndexBiggerThenLocalIDIndex:(unsigned int)arg1;
- (id)getVisibleCellViewWithViewModel:(id)arg1;
- (CGRect)getVisibleRectInScreen:(id)arg1;
- (CGRect)getVisibleRectInScreen:(id)arg1 innerVisible:(BOOL)arg2;
- (void)onImgMsgLocate:(id)arg1;
- (void)onIdleTimerUtilVoipQuit;
- (void)setIsPeekPreview:(BOOL)arg1;
- (BOOL)isPeekPreview;
- (id)previewActionItems;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)showAttachmentView;
- (void)showVoipCheckMicView;
- (void)reloadViewInteral;
- (void)onImportMessageSuccess;
- (void)tagWeAppLink:(id)arg1 messageWrap:(id)arg2;
- (void)tagWeAppMPShortLink:(id)arg1 messageWrap:(id)arg2;
- (void)copyViewDidScroll:(double)arg1;
- (id)getTableView;
- (id)getScrollView;
- (id)getCurrentViewController;
- (void)onTouchBeginMsg:(id)arg1 Touch:(id)arg2;
- (void)onSingleTapRTCV;
- (void)onRemoveRTCV;
- (void)onRemoveTextSelectView;
- (void)setRichTextCoverView:(id)arg1;
- (void)exitSelectState;
- (void)onDoubleClick;
- (id)getTextMsgCellViewForCoverView;
- (id)getCellViewWithMsgWrap:(id)arg1;
- (id)getForwardingMenuActionTarget:(SEL)arg1;
- (void)onRichTextViewExit;
- (void)onUpdatableMsgEntryStateChanged:(id)arg1;
- (void)delayScrollUpdatableMsgCellToVisible:(id)arg1;
- (void)SendTextMsgWithSolitaire:(id)arg1;
- (void)AsyncSendMessageWithSolitaire:(id)arg1;
- (void)sessionUpdateGroupUndoneItem:(id)arg1;
- (void)sessionDisposeGroupUndoneItem:(id)arg1;
- (void)sessionCompleteGroupUndoneItem:(id)arg1 result:(BOOL)arg2;
- (void)sessionRevokeGroupUndoneItem:(id)arg1 result:(BOOL)arg2;
- (void)sessionFinishSetMessageUndone:(id)arg1 result:(BOOL)arg2;
- (void)onClickGroupUndoneItem:(id)arg1;
- (void)onCloseGroupUndoneItem:(id)arg1;
- (void)onCompleteGroupUndoneItem:(id)arg1;
- (void)onRevokeGroupUndoneItem:(id)arg1;
- (void)onClickViewSource:(id)arg1;
- (void)onClickWeAppSource:(id)arg1;
- (void)onClickTailSource:(id)arg1;
- (void)onClickRoomTodoView:(id)arg1 revoke:(BOOL)arg2;
- (void)onClickRoomTodoCustomLinkWithUrl:(id)arg1 chatname:(id)arg2;
- (void)onClickTransferExpireAlertTips:(id)arg1 transferId:(id)arg2;
- (void)onClickFetchCouponSystemMessage:(id)arg1;
- (void)onClickSearchTopic:(id)arg1 withUrl:(id)arg2;
- (void)onGUEConfirm:(id)arg1;
- (void)onAutoTranslateFinishMsg:(id)arg1;
- (void)makeFeedBack;
- (BOOL)isMultiSelected:(id)arg1;
- (void)setInitialMultiSelectMsg:(id)arg1 topestSelectedMsg:(id)arg2;
- (void)setLastScrollingMessageOnBaseLine;
- (BOOL)preCheckMultiSelectStatusForCell:(id)arg1;
- (BOOL)isMsg:(id)arg1 between:(id)arg2 to:(id)arg3;
- (void)tryUpdateHotAreaVisibleCellTo:(BOOL)arg1;
- (void)handleMultiSelectWithScrollDirection:(BOOL)arg1;
- (void)setMultiSelectedChecker:(id /* block */)arg1;
- (void)setMultiSelectedHandler:(id /* block */)arg1;
- (id)getSelectedMsgLocalIds;
- (id)getSelectedMsgs;
- (void)clearAllSelectedMsg;
- (void)onRevokeRoomHistoryNodeForMsg:(long long)arg1;
- (void)onClickBizTipsBar:(id)arg1;
- (void)onClickMsgTipsBarClose:(id)arg1;
- (void)onClickBizTipsBarClose:(id)arg1;
- (void)onClickMsgTipsBarTrailingButton:(id)arg1;
- (void)onMsgTipsBarDidShow:(id)arg1;
- (void)onMsgContentNavBarHiddenChange:(BOOL)arg1;
- (void)onMsgContentNavBarTipsBarHeightChanged;
- (void)onMsgContentNavBarTipsBarShowExpandView;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onTitleViewClicked:(id)arg1;
- (void)onClickEdgeTipsView:(id)arg1;
- (void)checkRemoveTipView;
- (void)removeTipView;
- (void)tryShowPlayingTips;
- (void)tryHidePlayingTips;
- (void)hidePlayingTips;
- (id)getReplyingMessage;
- (void)onTextStateDataLoaded;
- (void)onTextStateDataUpdated;
- (void)onTextStateUpdateForUserName:(id)arg1;
- (id)getMessageTipsIdexs:(id)arg1 bJustLoading:(BOOL)arg2;
- (void)onHistoryMsgLoadSuccess:(id)arg1 attachHistoryMsg:(id)arg2;
- (void)onHistoryMsgLoadFail:(id)arg1;
- (void)startSpeakTextLogic;
- (void)updateSpeakTextTipView:(int)arg1;
- (BOOL)isSpeakingText:(id)arg1;
- (unsigned int)currentSpeakIndex;
- (id)currentSpeakTextCellView;
- (id)getMenuReporter;
- (void)onClickFoldHistoryMsgBtn;
- (BOOL)isContentSizeOverOneScreen;
- (void)onSpeakStart:(_NSRange)arg1 costTimeMs:(unsigned int)arg2;
- (void)scheduleHighlightSpeakText;
- (void)onSpeakLoading;
- (void)onSpeakStop;
- (void)viewWillPresentQuickReplySession:(id)arg1;
- (void)viewDidAppearFromQuickReplySession;
- (void)onFinishQuickReplyMsg;
- (void)registerYReportSdk;
- (void)bindYReportSdkAndReportLiveExpose:(id)arg1 andViewId:(id)arg2;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)visibleCellViewWithSvrIDStr:(id)arg1;
- (void)recoverLiveCellsOnAppear;
- (void)openShareAdCanvas:(id)arg1 oView:(id)arg2 oNodeData:(id)arg3;
- (void)onBeginPlayingMsg:(id)arg1 autoPlayEnabled:(BOOL)arg2;
- (void)onEndPlayingMsg:(id)arg1 autoPlayEnabled:(BOOL)arg2;
- (void)onAutoPlayEndWithMsg:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)minimizationTransitionController;
- (void)installMinimizationTransitionController;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (BOOL)shouldBlockMinimizationEntryInInteractivePop;
- (id)extInfoForSnapshotPrinter;
- (void)onBatchAutoTranslateMsgDidStart;
- (void)onBatchAutoTranslateMsgDidFinish;
- (void)updateAutoTranslateAnchorMsg;
- (void)updateTableContentOffsetFromAutoTranslate;
- (void)userDidTakeScreenshot:(id)arg1;
- (id)m_delegate;
- (id)toolView;
- (void)setToolView:(id)arg1;
- (id)m_LockerTimer;
- (void)setM_LockerTimer:(id)arg1;
- (id)m_msgReceivingTipsView;
- (void)setM_msgReceivingTipsView:(id)arg1;
- (id)m_shareContacts;
- (void)setM_shareContacts:(id)arg1;
- (unsigned long long)m_searchScene;
- (void)setM_searchScene:(unsigned long long)arg1;
- (id)inputPresenter;
- (void)setInputPresenter:(id)arg1;
- (id)inputControlView;
- (void)setInputControlView:(id)arg1;
- (BOOL)m_bIsInMainFrame;
- (void)setM_bIsInMainFrame:(BOOL)arg1;
- (id)m_badRoomLogicController;
- (void)setM_badRoomLogicController:(id)arg1;
- (id)richTextCoverView;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)msgReferView;
- (void)setMsgReferView:(id)arg1;
- (unsigned int)uiMultiSelectMaxCount;
- (void)setUiMultiSelectMaxCount:(unsigned int)arg1;
- (unsigned int)uiMultiSelectMaxMegaBytes;
- (void)setUiMultiSelectMaxMegaBytes:(unsigned int)arg1;
- (id)oRoomHistoryStat;
- (void)setORoomHistoryStat:(id)arg1;
- (id)tipsNavBar;
- (void)setTipsNavBar:(id)arg1;
- (id)tipsNewNavBar;
- (void)setTipsNewNavBar:(id)arg1;
- (id)chatRoomDismissedView;
- (void)setChatRoomDismissedView:(id)arg1;
- (BOOL)dismissWithoutReset;
- (void)setDismissWithoutReset:(BOOL)arg1;
- (BOOL)isShowMsgSearch;
- (void)setIsShowMsgSearch:(BOOL)arg1;
- (BOOL)isPresentingOtherQuickReplaySession;
- (void)setIsPresentingOtherQuickReplaySession:(BOOL)arg1;
- (id)referTipsView;
- (void)setReferTipsView:(id)arg1;
- (id)playingTipsView;
- (void)setPlayingTipsView:(id)arg1;
- (id)popBackInteractivePopGesture;
- (void)setPopBackInteractivePopGesture:(id)arg1;
- (id)chatroomBkgColor;
- (void)setChatroomBkgColor:(id)arg1;
- (id)locateMsg;
- (void)setLocateMsg:(id)arg1;
- (void)setMinimizationTransitionController:(id)arg1;
- (BOOL)didTouchMinimizeCorner;
- (void)setDidTouchMinimizeCorner:(BOOL)arg1;
- (id)autoTranslateAnchorMsg;
- (void)setAutoTranslateAnchorMsg:(id)arg1;
- (double)autoTranslateAnchorMsgLastContentOffset;
- (void)setAutoTranslateAnchorMsgLastContentOffset:(double)arg1;
- (int)tableScrollActionType;
- (void)setTableScrollActionType:(int)arg1;
- (BOOL)isAccessbilityBoldTextEnable;
- (void)setIsAccessbilityBoldTextEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end

