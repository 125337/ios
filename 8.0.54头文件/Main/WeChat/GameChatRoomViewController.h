@interface GameChatRoomViewController : GCReportBaseVc <IGameCenterMsgNotifyExt, IGameCenterWebViewCustomEvent, GCMessageViewModelDelegate, GCMultiMessageViewModelDelegate, GC23070ReportDelegate, ImageControllerDelegate, GameChatInputToolViewDelegate, GCChatRoomServerDelegate, GCBaseCellModelDelegate, GCAtPersonListViewModelDelegate, GameChatAtPersonListViewDelegate>
{
    ImageController * m_imageController; // +0x68
    BOOL _forbidInteract; // +0x70
    BOOL _isMemberOfChatRoom; // +0x71
    BOOL _isGroupMemberHeadPlaceHolder; // +0x72
    BOOL _currentShowNoti; // +0x73
    BOOL _isAutoJoinFailForNotAuthored; // +0x74
    BOOL _fakeAutoJoinFailForNotAuthored; // +0x75
    BOOL _showCustomEmoticon; // +0x76
    BOOL _shortDisableAtList; // +0x77
    BOOL _hasPreloadAtListData; // +0x78
    BOOL _hasJumpToTarget; // +0x79
    BOOL _isShowHalfScrrenVc; // +0x7a
    MMSessionInfo * _sessionInfo; // +0x80
    GameChatRoomConfig * _chatRoomConfig; // +0x88
    UIView * _containerView; // +0x90
    UIView * _messageContainerView; // +0x98
    GCMultiMessageViewModelConfig * _multiViewModelConfig; // +0xa0
    id <GCMessageViewModelProtocol> _messageCollectionViewModel; // +0xa8
    GameChatAtPersonListViewModel * _atPersonListViewModel; // +0xb0
    UICollectionView * _groupMemberCollectionView; // +0xb8
    UIView * _chatRoomBottomView; // +0xc0
    UIButton * _chatBtn; // +0xc8
    UIImageView * _chatBtnEmoticonImgView; // +0xd0
    UILabel * _groupNameLabel; // +0xd8
    UILabel * _subTitle; // +0xe0
    UIView * _chatRoomHeaderView; // +0xe8
    NSString * _banInterActStr; // +0xf0
    NSString * _channelCantSendReason; // +0xf8
    NSString * _currentChatTip; // +0x100
    GCSelfUnTouchableView * _inputLayerView; // +0x108
    GCSelfUnTouchableView * _viewAboveInputLayer; // +0x110
    GCCollectionViewManager * _groupCollectionViewManager; // +0x118
    UIControl * _inputBgView; // +0x120
    GameChatInputToolBaseView * _liveInputView; // +0x128
    EmoticonBoardView * _emoticonBoardView; // +0x130
    MMWebImageView * _backGroundImgView; // +0x138
    UIView * _blackBgView; // +0x140
    GCChatRoomInfo * _roomInfo; // +0x148
    GCChatRoomServer * _chatRoomServer; // +0x150
    ChatroomUserData * _currentUserData; // +0x158
    Background * _roomBackgroundInfo; // +0x160
    GetChatroomBaseInfoResponse * _roomInfoResponse; // +0x168
    JumpInfo * _allMemberJumpInfo; // +0x170
    JumpInfo * _preloadCreateAccountJumpInfo; // +0x178
    JumpInfo * _preloadPersonalProfileJumpInfo; // +0x180
    NSMutableSet * _shownNotifcationSet; // +0x188
    Notification * _notification; // +0x190
    SlotList * _slotList; // +0x198
    RealtimeControlInfo * _realTimeControlInfo; // +0x1a0
    BroadcastMessage * _broadCastMsg; // +0x1a8
    GCNotificationBarView * _notificationBarView; // +0x1b0
    NSMutableArray * _memberHeadArray; // +0x1b8
    GCJoinHintView * _joinHintView; // +0x1c0
    UIView * _rightBtmContainerView; // +0x1c8
    GCVerticalImgLabelView * _startGameView; // +0x1d0
    GCVerticalImgLabelView * _pannelPlusView; // +0x1d8
    GetChatroomPanelResponse * _pannelResponse; // +0x1e0
    JumpInfo * _startGameJumpInfo; // +0x1e8
    NSMutableDictionary * _atDict; // +0x1f0
    WCTTable * _chatRoomInfoTable; // +0x1f8
    GameChatRoomDbData * _roomDbData; // +0x200
    NSString * _robotName; // +0x208
    NSMutableDictionary * _premadeStateDict; // +0x210
    PremadeCardInfo * _premadCardInfo; // +0x218
    GameChatAtPersonListView * _atPersonListView; // +0x220
    NSMutableArray * _preloadWebViewArray; // +0x228
    GCMultiChannelContainerView * _messageView; // +0x230
    EnterLeadSpeakInfo * _enterLeadSpeakInfo; // +0x238
    ChannelInfo * _cachedChannelInfo; // +0x240
    GCChatRoonEnterTipView * _enterTipView; // +0x248
    ChatroomEnterInfo * _enterInfo; // +0x250
    PAGView * _pagView; // +0x258
    PAGFile * _pagFile; // +0x260
    MMPageSheetAdapter * _pageSheetAdapter; // +0x268
    NSMutableArray * _gcJumpInfoArray; // +0x270
}
- (void)preloadWebViewWithJumpInfo:(id)arg1 reCreateAfterUsed:(BOOL)arg2;
- (void)jumpWithJumpInfo:(id)arg1 fromName:(id)arg2;
- (void)jumpWithJumpInfo:(id)arg1 additionalInfo:(id)arg2 onCloseBlock:(id /* block */)arg3 fromName:(id)arg4;
- (void)handleGcJumpInfo:(id)arg1;
- (void)onHalfScreenVc:(id)arg1 parentVC:(id)arg2 visibleChange:(BOOL)arg3;
- (void)forceCheckHalfScreenVc;
- (void)checkShowNextJumpInfo;
- (void)showFirstHalfJumpInfo;
- (void)removePreloadCache;
- (void)onGameCenterWebViewCustomEvent:(id)arg1;
- (id)viewModelChatRoomServer;
- (void)messageViewModelConfigData:(id)arg1 uiArea:(unsigned long long)arg2 positionId:(unsigned long long)arg3 op:(unsigned long long)arg4;
- (id)viewModelViewController;
- (void)handleSendChatroomMsgRequest:(id)arg1 cellModel:(id)arg2;
- (id)channelOfChannelId:(long long)arg1;
- (void)channelAllDidLoadFirstPage;
- (void)didAtWithCellModel:(id)arg1;
- (void)atWithUserName:(id)arg1;
- (void)willKickOutMember:(id)arg1;
- (void)handleManageMember:(id)arg1;
- (void)handleBlockMsg:(id)arg1;
- (void)handleHeadTap:(id)arg1;
- (void)handleHeadDoubleClick:(id)arg1;
- (void)handleRevokeTickle:(unsigned long long)arg1 completeBlock:(id /* block */)arg2;
- (void)onSendFailImgTap:(id)arg1;
- (id)getCurrentUserData;
- (id)getCurrentRoomResponse;
- (BOOL)isCurChatRoomForbidInteract;
- (id)getChatRoomName;
- (void)reloadCellModelInNextLoop:(id)arg1;
- (void)onConfigureCellModel:(id)arg1;
- (void)onConfirmHandleChoose:(id)arg1 isChosen:(BOOL)arg2;
- (void)handleLocate:(id)arg1;
- (void)jumpToTargetChannel:(long long)arg1;
- (void)handlePublishChoosenMsg:(id)arg1;
- (void)handleChoosenMsgJumpUrl:(id)arg1;
- (void)handleVote:(id)arg1 fromPos:(unsigned long long)arg2;
- (id)getUserDatOfUserName:(id)arg1;
- (void)onDelayMsgCompleted:(id)arg1;
- (void)confirmKickOutUser:(id)arg1;
- (void)didConfirmResend:(id)arg1;
- (void)onChangeToMessageViewModel:(id)arg1;
- (void)onReportWillReport:(id)arg1;
- (void)initImageControllerIfNeed;
- (void)onOpenMediaBrowser;
- (void)processInsertedAsset:(id)arg1;
- (void)showToastForImageFail:(id)arg1;
- (id)getViewController;
- (BOOL)CanSendOriginalImage;
- (BOOL)CanSendMultiImage;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendOriginalVideo;
- (BOOL)CanDragSelect;
- (id)createImagePackWithMsg:(id)arg1;
- (id)initWithChatRoomConfig:(id)arg1;
- (void)initBgImgView;
- (void)reconfigBackgroundWith:(id)arg1;
- (void)initPAGAnimationBgView;
- (void)getPagBgDataWithHttpUrl:(id)arg1;
- (void)configPagViewAndPlayWithData:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (void)requestBgImg:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)relayoutBackgroundImageView;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)showRightBarItem:(BOOL)arg1;
- (void)delayLoadAtListViewModel;
- (void)initGroupMemberCollectionView;
- (void)sendCellModelMsgIfNoDelay:(id)arg1;
- (void)handleLongPress:(id)arg1 cellModel:(id)arg2;
- (double)groupMemberTop;
- (double)spaceUpChatBtn;
- (double)chatRoomBottomViewHeight;
- (double)leftMargin;
- (void)initBroadcasAndNotificationView;
- (void)configureNotificationBarWithNotification:(id)arg1;
- (void)updateNotificationStatus;
- (void)hidNotificationBar;
- (void)updateCollectionViewWithNotificationShow:(BOOL)arg1;
- (CGRect)messageCollectionViewContainerFrame;
- (void)updateMessageViewContainerFrameAndGradient;
- (void)initMessageCollectionView;
- (void)initBottomView;
- (void)checkShowRightBtmView;
- (void)checkShowStartGameView;
- (id)getRightBtmView;
- (void)initStartGameView;
- (void)horizonlLayoutChatBottomView;
- (void)onStartGameTap;
- (void)reportWithUiArea:(unsigned long long)arg1 positionId:(unsigned long long)arg2 jumpInfo:(id)arg3;
- (BOOL)isShowHeadImage:(id)arg1 logicController:(id)arg2;
- (id)getChatomDbDataTable;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)setUpServerLogic;
- (void)startUpdateGameRoomInfo;
- (void)checkPannel;
- (void)initPageSheetAdapterIfNeed;
- (void)showPannelView;
- (void)hanelLeftPanelDown;
- (void)hanelPannelItemSelect:(id)arg1 index:(unsigned long long)arg2;
- (void)reportWithPannel:(id)arg1 index:(unsigned long long)arg2 op:(unsigned long long)arg3;
- (void)tryAutoJoin:(id /* block */)arg1;
- (void)commonConfigData:(id)arg1 uiArea:(unsigned long long)arg2 positionId:(unsigned long long)arg3 op:(unsigned long long)arg4;
- (void)loadCachedRealTimeControlInfo;
- (void)loadCachedMsgData;
- (void)didReceiveNewMessage:(id)arg1;
- (void)contactDidUpdate:(id)arg1;
- (void)updateCurrentContactIfSameUserName:(id)arg1;
- (void)handleSlotListWithRealResponse:(id)arg1;
- (void)handlePremadInfo:(id)arg1;
- (void)roomRealTimeInfoUpdate:(id)arg1;
- (void)layoutHeaderView;
- (id)getAllMemberHeadModel;
- (id)getPlaceHolderHeadModelWithIndex:(unsigned long long)arg1;
- (void)checkSubTitle;
- (void)configureBroadCastMsg:(id)arg1;
- (void)handleSlotList:(id)arg1;
- (void)changeArray:(id)arg1 targetArray:(id)arg2 deleteItems:(id)arg3 addItems:(id)arg4 oldPosToNewPosDict:(id)arg5;
- (BOOL)handleRealTimeControlInfo:(id)arg1;
- (void)setShowCustomEmoticon:(BOOL)arg1;
- (void)checkUpdateEmoticonBoardView;
- (void)configureBanInterActStr:(id)arg1;
- (void)configureChannelCantSpeedReason:(id)arg1;
- (void)checkBanInterActState;
- (void)setChatBtnEnabled:(BOOL)arg1;
- (id)getBanInteractDesc:(id)arg1;
- (void)handleNewContactsUpdate:(id)arg1;
- (void)showTestAtTip;
- (id)getFirstNotification:(id)arg1;
- (void)logStr:(id)arg1;
- (void)logWithFormat:(id)arg1;
- (id)logForNoti:(id)arg1;
- (void)handleNotificationBar:(id)arg1;
- (void)sendNotiConfirmStatus:(unsigned long long)arg1 notification:(id)arg2;
- (void)onNotificationBarClick;
- (void)onCloseNotificationClicked;
- (id)groupMemberHeadArrayFromSlotList:(id)arg1;
- (void)updateHeadModel:(id)arg1 withSlot:(id)arg2;
- (void)onRemovedConfirm;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4 btnTitle:(id)arg5 handler:(id /* block */)arg6;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 handler:(id /* block */)arg4;
- (void)roomInfoDidUpdate:(id)arg1;
- (id)multiMsgViewModel;
- (BOOL)isCurChannelShowEnterLeadSpeakInfo;
- (void)checkEnterLeadSpeakInfo;
- (void)showEnterLeadSpeakInfo;
- (void)handleSpeakInfoClicked:(id)arg1;
- (void)hideEnterLeadSpeakInfo;
- (void)firstTimeRoomInfoDidUpdate:(id)arg1;
- (void)handleFirstEnterNotify:(id)arg1;
- (void)handleChatroomEnterInfo:(id)arg1;
- (id)defaultChannel;
- (void)initMessageViewWithChannelInfo:(id)arg1 isCache:(BOOL)arg2;
- (void)locateToChannelId:(long long)arg1 seq:(unsigned long long)arg2;
- (void)viewDidTransitionToNewSize;
- (void)onViewSizeChange;
- (void)removeAllAtMemberListFromDB;
- (id)searchGroupMemberByNameLike:(id)arg1;
- (void)removeGroupMemberByUserName:(id)arg1;
- (void)handleBeReomved:(id)arg1;
- (void)handleJoinStatus:(id)arg1;
- (void)showJoinGroupHint:(id)arg1;
- (void)addJoinBtnAction:(id)arg1;
- (void)onJointBtnClickWhenNotAuthorized:(id)arg1;
- (void)onNameCardClose;
- (void)onJoinBtnClicked:(id)arg1;
- (void)removeJoinHintView;
- (void)joInRoomWithCompletionBlock:(id /* block */)arg1;
- (void)forceUpdateRoomWithComplectionBlock:(id /* block */)arg1;
- (void)showTipForJoinResult:(BOOL)arg1 textStr:(id)arg2;
- (void)onLeftBtnClick;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onRightBtnClick;
- (void)chatBtnClicked;
- (BOOL)canShowInputView;
- (void)showInputViewWithInsertText:(id)arg1;
- (void)showInputViewWithInsertText:(id)arg1 channel:(id)arg2 canDeselect:(BOOL)arg3;
- (void)onEmoticonTap;
- (void)showInputBgView:(BOOL)arg1;
- (id)atListChatRoomServer;
- (void)didSelectAtModel:(id)arg1;
- (void)atPersonListViewDidHide;
- (void)showAtPersonListView;
- (void)onInputBgTouched;
- (void)hideInputView;
- (void)onInputViewAdjustMessageView:(BOOL)arg1;
- (void)layoutInputView;
- (void)layoutEmoticonBoardView;
- (BOOL)canSendTextMessage:(id)arg1;
- (void)textDidClickSend;
- (void)didCommitText:(id)arg1;
- (id)emojiMsgFromCEmoticonWrap:(id)arg1;
- (void)didSelectWithEmotcion:(id)arg1;
- (id)chatRoomMsgFromMsgPack:(id)arg1;
- (void)handleSendWithRequest:(id)arg1;
- (void)handleChatRoomMsg:(id)arg1;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (double)getVisibleHeight;
- (void)onInputViewShowChange:(BOOL)arg1;
- (void)atWithChatRoomUserData:(id)arg1;
- (void)atWithUserName:(id)arg1 displayName:(id)arg2 withAtHead:(BOOL)arg3;
- (id)roleStrForUserData:(id)arg1;
- (void)handleMemberHeadTap:(id)arg1;
- (void)openPersonalProfileWithJumpInfo:(id)arg1 chatRoomUserData:(id)arg2 sourceId:(unsigned long long)arg3;
- (void)preLoadPersonalProfile;
- (void)preLoadNameCardProfile;
- (void)openNameCardWebView;
- (void)openNameCardWebViewWithJumpInfo:(id)arg1 sourceId:(unsigned long long)arg2;
- (void)runBeforeAnimation:(BOOL)arg1;
- (void)runInsideAnimation:(BOOL)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)chatRoomConfig;
- (void)setChatRoomConfig:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)messageContainerView;
- (void)setMessageContainerView:(id)arg1;
- (id)multiViewModelConfig;
- (void)setMultiViewModelConfig:(id)arg1;
- (id)messageCollectionViewModel;
- (void)setMessageCollectionViewModel:(id)arg1;
- (id)atPersonListViewModel;
- (void)setAtPersonListViewModel:(id)arg1;
- (id)groupMemberCollectionView;
- (void)setGroupMemberCollectionView:(id)arg1;
- (id)chatRoomBottomView;
- (void)setChatRoomBottomView:(id)arg1;
- (id)chatBtn;
- (void)setChatBtn:(id)arg1;
- (id)chatBtnEmoticonImgView;
- (void)setChatBtnEmoticonImgView:(id)arg1;
- (id)groupNameLabel;
- (void)setGroupNameLabel:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)chatRoomHeaderView;
- (void)setChatRoomHeaderView:(id)arg1;
- (BOOL)forbidInteract;
- (void)setForbidInteract:(BOOL)arg1;
- (id)banInterActStr;
- (void)setBanInterActStr:(id)arg1;
- (id)channelCantSendReason;
- (void)setChannelCantSendReason:(id)arg1;
- (id)currentChatTip;
- (void)setCurrentChatTip:(id)arg1;
- (id)inputLayerView;
- (void)setInputLayerView:(id)arg1;
- (id)viewAboveInputLayer;
- (void)setViewAboveInputLayer:(id)arg1;
- (id)groupCollectionViewManager;
- (void)setGroupCollectionViewManager:(id)arg1;
- (id)inputBgView;
- (void)setInputBgView:(id)arg1;
- (id)liveInputView;
- (void)setLiveInputView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)backGroundImgView;
- (void)setBackGroundImgView:(id)arg1;
- (id)blackBgView;
- (void)setBlackBgView:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)chatRoomServer;
- (void)setChatRoomServer:(id)arg1;
- (id)currentUserData;
- (void)setCurrentUserData:(id)arg1;
- (id)roomBackgroundInfo;
- (void)setRoomBackgroundInfo:(id)arg1;
- (id)roomInfoResponse;
- (void)setRoomInfoResponse:(id)arg1;
- (id)allMemberJumpInfo;
- (void)setAllMemberJumpInfo:(id)arg1;
- (id)preloadCreateAccountJumpInfo;
- (void)setPreloadCreateAccountJumpInfo:(id)arg1;
- (id)preloadPersonalProfileJumpInfo;
- (void)setPreloadPersonalProfileJumpInfo:(id)arg1;
- (BOOL)isMemberOfChatRoom;
- (void)setIsMemberOfChatRoom:(BOOL)arg1;
- (id)shownNotifcationSet;
- (void)setShownNotifcationSet:(id)arg1;
- (id)notification;
- (void)setNotification:(id)arg1;
- (id)slotList;
- (void)setSlotList:(id)arg1;
- (id)realTimeControlInfo;
- (void)setRealTimeControlInfo:(id)arg1;
- (id)broadCastMsg;
- (void)setBroadCastMsg:(id)arg1;
- (id)notificationBarView;
- (void)setNotificationBarView:(id)arg1;
- (id)memberHeadArray;
- (void)setMemberHeadArray:(id)arg1;
- (BOOL)isGroupMemberHeadPlaceHolder;
- (void)setIsGroupMemberHeadPlaceHolder:(BOOL)arg1;
- (BOOL)currentShowNoti;
- (void)setCurrentShowNoti:(BOOL)arg1;
- (id)joinHintView;
- (void)setJoinHintView:(id)arg1;
- (id)rightBtmContainerView;
- (void)setRightBtmContainerView:(id)arg1;
- (id)startGameView;
- (void)setStartGameView:(id)arg1;
- (id)pannelPlusView;
- (void)setPannelPlusView:(id)arg1;
- (id)pannelResponse;
- (void)setPannelResponse:(id)arg1;
- (id)startGameJumpInfo;
- (void)setStartGameJumpInfo:(id)arg1;
- (id)atDict;
- (void)setAtDict:(id)arg1;
- (id)chatRoomInfoTable;
- (void)setChatRoomInfoTable:(id)arg1;
- (id)roomDbData;
- (void)setRoomDbData:(id)arg1;
- (BOOL)isAutoJoinFailForNotAuthored;
- (void)setIsAutoJoinFailForNotAuthored:(BOOL)arg1;
- (BOOL)fakeAutoJoinFailForNotAuthored;
- (void)setFakeAutoJoinFailForNotAuthored:(BOOL)arg1;
- (id)robotName;
- (void)setRobotName:(id)arg1;
- (id)premadeStateDict;
- (void)setPremadeStateDict:(id)arg1;
- (id)premadCardInfo;
- (void)setPremadCardInfo:(id)arg1;
- (BOOL)showCustomEmoticon;
- (id)atPersonListView;
- (void)setAtPersonListView:(id)arg1;
- (id)preloadWebViewArray;
- (void)setPreloadWebViewArray:(id)arg1;
- (BOOL)shortDisableAtList;
- (void)setShortDisableAtList:(BOOL)arg1;
- (id)messageView;
- (void)setMessageView:(id)arg1;
- (BOOL)hasPreloadAtListData;
- (void)setHasPreloadAtListData:(BOOL)arg1;
- (id)enterLeadSpeakInfo;
- (void)setEnterLeadSpeakInfo:(id)arg1;
- (id)cachedChannelInfo;
- (void)setCachedChannelInfo:(id)arg1;
- (id)enterTipView;
- (void)setEnterTipView:(id)arg1;
- (id)enterInfo;
- (void)setEnterInfo:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)pagFile;
- (void)setPagFile:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (BOOL)hasJumpToTarget;
- (void)setHasJumpToTarget:(BOOL)arg1;
- (id)gcJumpInfoArray;
- (void)setGcJumpInfoArray:(id)arg1;
- (BOOL)isShowHalfScrrenVc;
- (void)setIsShowHalfScrrenVc:(BOOL)arg1;
- (void).cxx_destruct;
@end

