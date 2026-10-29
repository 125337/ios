@interface MMFinderLiveCommentView : MMLiveCommentView <WCActionSheetDelegate, WCFinderLiveExt, UIGestureRecognizerDelegate, MMPickLocationDataActionDelegate, ILBSLifeMgrExt, MMFinderLiveSFBarrageViewDelegate, MMFinderLiveLandscapeBarrageSettingUpdateExt, UIScrollViewDelegate, MMFinderLivePayMgrExt, WCCoinBuyCoinLogicDelegate, MMLiveFaceDecodeExt, MMLiveFaceDetectExt, MMLiveViewExt, MMFinderLiveGoodsSelectionPanelDelegate>
{
    unsigned long long _commentState; // +0x8
    BOOL _hideTopCommentContent; // +0x10
    BOOL _hideNotifyCommentView; // +0x11
    BOOL _canShowTalkButton; // +0x12
    BOOL _isInMicTalkingModeSwitchAnimation; // +0x13
    BOOL _isEnableAnchorStatusRequesting; // +0x14
    BOOL _needTableViewAutoScrollToRereshBeforeRotate; // +0x15
    BOOL _needTableViewAutoScrollToRereshBeforeMinimize; // +0x16
    BOOL _needTableViewAutoScrollToRereshBeforeEnterBackground; // +0x17
    BOOL _needHandleRestoreAfterMinimize; // +0x18
    BOOL _needHandleRestoreAfterEnterForeground; // +0x19
    BOOL _enterBackground; // +0x1a
    BOOL _hasFetchedLBS; // +0x1b
    BOOL _hasSelectPOI; // +0x1c
    BOOL _sendingLocation; // +0x1d
    BOOL _enablePrivateComment; // +0x1e
    BOOL _isCommentButtonHidden; // +0x1f
    BOOL _isCommentButtonTextStatePrivate; // +0x20
    BOOL _joinLiveTipsPopulated; // +0x21
    BOOL _needsAudioModeNotificationUponJoinLive; // +0x22
    int _eventId; // +0x24
    id /* block */ _didCommitTextAction; // +0x28
    id /* block */ _didCommitLocationAction; // +0x30
    id /* block */ _commentContentViewTopDidChanged; // +0x38
    id /* block */ _commentContentViewTopDidChangedForContentState; // +0x40
    id /* block */ _commentCellDidLongPressedBlock; // +0x48
    id /* block */ _invokeShowChatRoomCreateGuideBlock; // +0x50
    id /* block */ _commentTalkButtonDidTapBlock; // +0x58
    double _commentContentViewTop; // +0x60
    id /* block */ _commentCellDidMenuSelectBlock; // +0x68
    id /* block */ _onCommentContentTransitionChangeCallback; // +0x70
    id /* block */ _onCommentContentStateChangeCallback; // +0x78
    id /* block */ _onCommentContentLayoutChangedCallback; // +0x80
    id /* block */ _onCommentBlackListOperationCallback; // +0x88
    id /* block */ _rotateToOrientationPortrait; // +0x90
    MMFinderGroupLiveChatRoomDataProvider * _chatRoomDataProvider; // +0x98
    MMFinderLiveProductQuestionBoxDataProvider * _productQueDataProvider; // +0xa0
    MMFinderLiveCommentEntranceTabBar * _commentContentEntranceTabBar; // +0xa8
    MMFinderLiveSFBarrageView * _barrageContentView; // +0xb0
    FinderLiveBoxId * _lastChatBoxBeforeAutoChange; // +0xb8
    MMFinderLiveCommentContentScrollView * _commentContentContainerView; // +0xc0
    MMFinderLiveTopCommentLogic * _topCommentNotifyLogic; // +0xc8
    MMFinderLiveCommentInputEmoticonView * _inputEmoticonView; // +0xd0
    MMFinderLiveTopCommentContentView * _topCommentContentView; // +0xd8
    MMFinderLiveCommentPostInfo * _cachedLastCommentPostInfoForRetry; // +0xe0
    NSString * _cachedLastTextForRetry; // +0xe8
    unsigned long long _enableAnchorStatusRequestSeq; // +0xf0
    double _lastEnableAnchorStatusRequestResultTime; // +0xf8
    MMLiveCommentDataItem * _visbleCommentItemBeforeLayout; // +0x100
    MMLiveCommentDataItem * _visbleCommentItemBeforeMinimize; // +0x108
    MMLiveCommentDataItem * _visbleCommentItemBeforeEnterBackground; // +0x110
    double _enterLiveTime; // +0x118
    RichTextView * _selfNickNameView; // +0x120
    NSString * _currentAccountNickName; // +0x128
    double _currentMaxNickNameWidth; // +0x130
    NSArray * _selfNickNameArrStyles; // +0x138
    id /* block */ _sendedAction; // +0x140
    WCUIAlertView * _currAlertView; // +0x148
    PickLocationManager * _pickLocationManager; // +0x150
    CLLocation * _location; // +0x158
    NSMutableDictionary * _locationSendRecordInfo; // +0x160
    unsigned long long _geoTag; // +0x168
    double _sendLocationTime; // +0x170
    NSString * _quickReplyStr; // +0x178
    WCLocationInfo * _currentLocationInfo; // +0x180
    WCLocationInfo * _cacheLocationInfo; // +0x188
    MMLocatingCoordinateLogic * _locatingLogic; // +0x190
    WCBulletinInfo * _lastBulletinInfo; // +0x198
    WCBulletinInfo * _enterLiveBulletinInfo; // +0x1a0
    NSData * _lastBuffer; // +0x1a8
    unsigned long long _reuseFeedStreamCommentCount; // +0x1b0
    double _lastLayoutTransitonPercent; // +0x1b8
    MMFinderLiveFloatMsgConfigRequestLogic * _floatMsgConfigRequestLogic; // +0x1c0
    NSString * _customRenderUserId; // +0x1c8
    NSString * _customRenderAnchorUserId; // +0x1d0
    MMNormalTipsView * _barrageTipsView; // +0x1d8
}
+ (double)commentButtonMinWidthWithTaskId:(id)arg1 isLandscape:(BOOL)arg2;
+ (double)commentTableWidth:(id)arg1;
+ (double)currentCommentTableWidth:(id)arg1;
+ (double)commentTableStaticWidthPortraitForIpad:(id)arg1;
+ (double)commentTableWidthPortrait:(id)arg1;
+ (double)commentTableWidthLandScape:(id)arg1;
+ (double)commentTableContentWidth:(id)arg1;
+ (double)getContentWidgetsTopInPortraitForAnchor:(id)arg1;
+ (double)getContentWidgetsTopInLandscapeForAnchor:(id)arg1;
+ (double)getContentRightWidgetsTopInPortraitForAnchor:(id)arg1;
+ (double)getContentRightWidgetsTopInLandscapeForAnchor:(id)arg1;
+ (double)getContentWidgetsTopInPortraitForAudience:(id)arg1;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(BOOL)arg2 delegate:(id)arg3 inputEmoticonView:(id)arg4;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)layoutUI;
- (void)layoutTopCommentContentView;
- (void)layoutBarrageContentView;
- (void)configBarrageFaceDetectMaskOptions;
- (void)updateBarrageContentEnableStart;
- (void)updateBarrageContentEnableDisplay:(BOOL)arg1;
- (void)updateBarrageContentViewAlpha;
- (id)commentTableView;
- (CGRect)commentContentViewRect;
- (BOOL)showingInputView;
- (id)createCommentPostEngine;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutCommentContentEntranceTabBar;
- (void)updateCommentContentEntranceBarOrigin;
- (void)updateCommentContentEntranceBarHidden;
- (BOOL)isCommentContentEntranceEnableDisplay;
- (double)getConcertCommentTopMargin;
- (void)layoutCommentContentContainerView;
- (void)updateCommentContentContainerOrigin;
- (void)addChatRoomCommentContentViews:(id)arg1;
- (void)resetGroupChatRoomCommentContentView:(id)arg1 autoSwitch:(BOOL)arg2;
- (void)checkLocalHasProductQuestionMsgSessions;
- (void)resetProductQuestionChatRoomCommentContentView:(id)arg1 autoSwitch:(BOOL)arg2;
- (id)getPrivateCommentContentViewWithBoxId:(id)arg1;
- (id)getPublicCommentContentView;
- (double)getCommentContentAreaHeight;
- (double)getCommentNotifyAreaHeight;
- (double)getDefaultCommentContentAreaHeight;
- (double)getCommentContentAreaHeightInStyle:(long long)arg1;
- (double)getCommentContentAreaHeightForInputShow:(BOOL)arg1;
- (void)adjustCommentContentAreaHeightForInputShowChange:(BOOL)arg1;
- (void)layoutContentBackView;
- (void)reportCommentContainerStyleChange:(long long)arg1;
- (long long)getCurrentCommentContentTransitionState;
- (long long)getCurrentCommentContentState;
- (double)getCurrentCommentContentTransitionPercent;
- (BOOL)isInTransition;
- (id)getCommentContentButton;
- (CGSize)getCommentTableBackBottomAreaSize;
- (id)liveInputView;
- (id)emoticonBoardView;
- (void)configLiveInputView;
- (void)layoutInputView;
- (void)layoutEmoticonBoardView;
- (void)layoutCommentTableTapView;
- (id)genCommentTableView;
- (void)handleLayoutOrientationChangedAfterLayout;
- (BOOL)reuseFeedStreamCommentToLiveRoomIfNeeded;
- (id)redirectHitTestIfNeeded:(CGPoint)arg1 event:(id)arg2 fromOperationView:(id)arg3 originHitView:(id)arg4;
- (BOOL)isStartLandscapeBarrage;
- (CGRect)getDisablePivotPanGestureArea;
- (BOOL)checkSelfHasConsumePivotCollectionTapGesture:(id)arg1;
- (BOOL)consumePivotCollectionTapGesture:(id)arg1;
- (BOOL)didSendLocation:(id)arg1;
- (BOOL)isOverSendLocationFrequency;
- (double)getUserStaySecond;
- (void)showAlertForLocationAuthorization;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)goToSettingLocationAuthorization;
- (void)onCancelSelectLocation;
- (id)inSertLocalLocationMsg;
- (void)sendLiveDescription:(id)arg1;
- (void)cacheLocation;
- (void)handleCacheLocationWithLocatingCoordinateItem:(id)arg1;
- (id)locatingLogic;
- (void)fetchNewLocationWithExtraInfo:(id)arg1;
- (void)handleFetchLocation:(id)arg1 error:(id)arg2;
- (void)sendNewNetLocationMsg:(id)arg1 liveBoxId:(id)arg2 inputCommitAction:(id)arg3;
- (void)sendNetLocationMsg:(id)arg1 liveBoxId:(id)arg2 inputCommitAction:(id)arg3;
- (void)layoutCommentButton;
- (void)layoutBarrageSettingButton;
- (void)updateBarrageSettingButtonOrigin;
- (void)createCommentButton;
- (void)createBarrageSettingBtn;
- (void)updateBarrageSettingBtnHidden;
- (void)updateBarrageSettingBtnAlpha;
- (void)onBarrageSettingBtnDisplayChange;
- (double)getCommentButtonMaxWidth;
- (void)updateCommentButtonTitleForCurrentState;
- (void)updateNotifyContentViewSuperviewForCurrentState;
- (void)updateCommentButtonTitleForPrivateCommentContentState;
- (void)updateCommentButtonTitleForPublicCommentContentState;
- (void)hideContent;
- (void)showContent;
- (id)createCommentTableViewModelForCommentContentView:(id)arg1 boxId:(id)arg2;
- (void)realTopCommentWithDataItem:(id)arg1;
- (unsigned long long)getSingleDisAbleCommentForComment:(id)arg1;
- (void)resetGroupChatRoomBoxId:(id)arg1;
- (void)resetGroupChatRoomBoxId:(id)arg1 autoSwitch:(BOOL)arg2;
- (void)resetProductQuestionBox:(id)arg1;
- (void)resetProductQuestionBox:(id)arg1 autoSwitch:(BOOL)arg2;
- (void)switchToBoxId:(id)arg1;
- (id)currChatRoomBoxId;
- (BOOL)isCurrHasChatRoom;
- (void)updateCommentButtonHidden:(BOOL)arg1 shouldLayout:(BOOL)arg2;
- (void)updateCommentButtonForMicTalkingSwitchAnimation:(unsigned long long)arg1;
- (void)setIsCommentButtonTextStatePrivate:(BOOL)arg1;
- (void)setCanShowTalkButton:(BOOL)arg1;
- (void)checkAndSwitchToCurrentChatRoomBoxId;
- (void)checkAndSwitchToCurrProductQuestionBox;
- (void)updateCommentTableBottom;
- (void)updateCommentButtonBgColor:(id)arg1;
- (void)updatePrivateCommentEnable;
- (void)banOrOpenComment:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (BOOL)applyUpdateLiveCommentEnabled:(BOOL)arg1 taskId:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)applyUpdateLiveCommentFail:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (id)commentFetchEngine;
- (double)commentTableBackViewBottom;
- (double)commentContentAreaBottom;
- (double)initialCommentTableBackViewBottom;
- (double)commentContentAreaBottomInset;
- (double)commentButtonLeft;
- (void)onEnterLiveWithError:(id)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)preAppendComments;
- (Class)commentTableCellClass;
- (id)registerCellClasses;
- (void)showToastForBanOrAllowComment:(BOOL)arg1 success:(BOOL)arg2;
- (void)complainWithCommentItem:(id)arg1;
- (void)onCommentViewTapAtPoint:(CGPoint)arg1;
- (id)finderLiveCommentTableViewModel;
- (id)liveTask;
- (id)finderTaskId;
- (id)liveCommentInputViewPlaceholder;
- (id)liveCommentInputViewHintWording;
- (BOOL)isEnableCommentForAll;
- (BOOL)isEnableCommentForSingle;
- (double)bottomViewsRightPosition;
- (double)commentContentViewTop;
- (void)handleOnNotifyLiveIsSingleEnableComment:(BOOL)arg1;
- (double)commentTableRight;
- (id)publicCommentContentView;
- (id)currPrivateCommentContentView;
- (id)chatRoomCommentContentView;
- (id)productQueCommentContentView;
- (id)commentDataMgr;
- (id)currPrivateCommentTableView;
- (id)publicCommentTableView;
- (id)commentTableViewModel;
- (id)currPrivateCommentTableViewModel;
- (id)publicCommentTableViewModel;
- (id)floatMsgConfigRequestLogic;
- (id)locationSendRecordInfo;
- (id)getCompleteBoxIdObj;
- (id)chatRoomDataProvider;
- (id)productQueDataProvider;
- (BOOL)isCommentLandscapeBarrageStyle;
- (BOOL)isInBarrageInputMode;
- (void)updateCommentStateForSingle:(unsigned long long)arg1;
- (id)createUnReadCountLabel;
- (void)updateUnReadCountLabel:(unsigned long long)arg1;
- (void)scrollToCommentTableBottom:(id)arg1;
- (void)updateTrackingTipLabelWithDataUpdateDirection:(BOOL)arg1;
- (void)updateCommentViewIfAnchorBanComment;
- (void)setHideTopCommentContent:(BOOL)arg1;
- (void)setHideNotifyCommentView:(BOOL)arg1;
- (void)updateCommentButtonAlpha;
- (double)getCommentButtonAlpha;
- (BOOL)inputViewShouldDismisAfterCommit:(id)arg1;
- (void)inputViewBarrageInputModeDidChange:(BOOL)arg1;
- (BOOL)customHandleInputViewSwitchToBarrageInputMode;
- (BOOL)inputViewCanCommitFloatMsg:(id)arg1;
- (id)inputViewGetSelfCommentDataItemWithText:(id)arg1;
- (void)onHasSendMsgTagChange:(BOOL)arg1;
- (void)inputViewProductQuestionInputModeDidChange:(BOOL)arg1;
- (void)onQuestionProductDescClick:(id)arg1;
- (void)openGoodsSelectionPanelFromSrc:(long long)arg1 questionProduct:(id)arg2;
- (void)openGoodsDetailPanelFromComment:(id)arg1;
- (BOOL)didCommitText:(id)arg1;
- (void)_syncNoescapePrepareAppendSelfCommitMsgWithText:(id)arg1 completion:(id /* block */)arg2;
- (id)getActualAtFriendContacts:(id)arg1;
- (BOOL)hasAtAll:(id)arg1;
- (id)notifyCommentLogic;
- (void)onFinderLiveUpdateCommentEnable;
- (void)onFinderLiveUpdateCommentSingleEnable;
- (void)onFinderLiveAnchorStatusUpdated:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCommentTableBackViewPanGesture:(id)arg1;
- (void)handleCommentTableViewPanGesture:(id)arg1;
- (void)onCommentButtonClick;
- (void)onCommentTalkButtonClick;
- (void)onBarrageSettingButtonClicked;
- (void)showInputViewWithTextInPublic:(id)arg1;
- (void)showInputViewWithText:(id)arg1;
- (void)showInputViewWithText:(id)arg1 sendedAction:(id /* block */)arg2;
- (void)showInputViewWithSelectedComment:(id)arg1;
- (void)showInputViewAtCommentTableViewRow:(long long)arg1;
- (id)createPlaceHolderFromCurrentRole;
- (id)createReplyPlaceHoldeprFromCurrentRoleWithSelectedComment:(id)arg1;
- (BOOL)checkCommentAbilityForAudience;
- (BOOL)checkCommentAbilityForAudienceInPrivate:(id)arg1;
- (void)commentGoToProfile:(id)arg1;
- (void)commentLikeClick:(id)arg1 like:(BOOL)arg2;
- (BOOL)checkSelfTickleOverFrequency:(id)arg1;
- (void)handleLiveIsEnableCommentForAnchor:(BOOL)arg1;
- (void)handleLiveIsEnableCommentFromServerForAnchorMainScene:(BOOL)arg1;
- (void)handleLiveIsEnableCommentForAudience:(BOOL)arg1;
- (void)updateCommentState:(unsigned long long)arg1 banOrAllowCommentNotify:(id)arg2;
- (void)updateCommentStateForAnchorWithNotifyCommentItem:(id)arg1;
- (void)updateCommentStateForAudienceWithNotifyCommentItem:(id)arg1;
- (void)updateAntiSpamCommentStateWithBanNotify:(id)arg1;
- (void)handleEnableCommentState:(id)arg1;
- (void)handleDisableCommentState:(id)arg1;
- (void)displayBanCommentPubbleView:(id)arg1;
- (void)reportForCommentStateUpdated;
- (void)setCommentState:(unsigned long long)arg1;
- (void)retryPostLiveCommentAfterSuccessVerified;
- (void)adjustCommentTableViewHeight;
- (void)onLiveUpdated;
- (void)didMoveToWindow;
- (void)onPostSuccessWithLocalSeq:(double)arg1 taskId:(id)arg2 extraInfo:(id)arg3 clientMsgId:(id)arg4 content:(id)arg5;
- (void)reportOnMsgPostSucc:(id)arg1 cliMsgId:(id)arg2 extraInfo:(id)arg3;
- (void)onPostFailError:(id)arg1 localSeq:(double)arg2 taskId:(id)arg3 extraInfo:(id)arg4 clientMsgId:(id)arg5;
- (void)payForPaidBarrageWithProductIdIfNeeded:(id)arg1 clientMsgId:(id)arg2;
- (void)notifySelfGoToShopBusinessPage:(unsigned long long)arg1;
- (void)updateTableBackViewHidden;
- (void)onInputViewShowChange:(BOOL)arg1;
- (void)onSwitchAccountTipsViewExposed;
- (void)onSwitchAccountTipsViewClick;
- (void)onCurrentUserIdentityHeadImageClick;
- (double)commentTableWidth;
- (double)commentTableHeight;
- (double)getCommentTableHeightInStyle:(long long)arg1;
- (double)getCommentTableHeightLandscape:(long long)arg1;
- (double)getStandardCommentTableHeightLandscape;
- (double)getCommentTableHeightPortrait:(long long)arg1;
- (double)getMaxCommentTableHeight;
- (double)getMaxTableHeightPortrait:(long long)arg1;
- (double)getStandardTableHeightPortrait:(long long)arg1;
- (double)getAudiencePortraitDefaultCommentTableHeightScale;
- (void)updateNotifyContentViewHidden;
- (void)updateComponentHiddenForCommentEnableChanged;
- (double)fixedCommentNotifyContentTop;
- (double)getCommentContentViewTopForCommentContentState:(long long)arg1;
- (double)getCommentAreaTop:(double)arg1;
- (double)getContentWidgetsTopInPortrait;
- (double)getContentWidgetsTopInPortraitForAudience;
- (void)adjustCommentTableInsetTop;
- (void)storeVisibleCommentBeforeLayout;
- (void)limitCommentCntBeforeLayout;
- (void)restoreVisibleCommentAfterLayout;
- (void)storeCommentDataBeforeMinimize;
- (void)restoreCommentDataAfterMinimize;
- (void)storeCommentDataBeforeEnterBackground;
- (void)restoreCommentDataAfterEnterForeground;
- (void)onSendingGiftBatchFinish:(id)arg1 rewardRecipientContact:(id)arg2 sendingComboId:(id)arg3 comboGiftCount:(unsigned long long)arg4 extInfo:(id)arg5;
- (void)appendCommentAddAssistantCommentForContact:(id)arg1;
- (void)appendCommentRemoveAssistantCommentForContact:(id)arg1;
- (void)onMenuControllerWillHide;
- (void)onMenuControllerDidShowFailed:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)showCustomToast:(id)arg1;
- (void)menuActionComplain:(id)arg1;
- (void)menuActionReply:(id)arg1;
- (void)menuActionRoleProfile:(id)arg1;
- (void)menuActionBanComment:(id)arg1;
- (void)menuActionNonSenceBanComment:(id)arg1;
- (void)menuActionNoSenceAllowComment:(id)arg1;
- (void)menuActionAllowComment:(id)arg1;
- (void)menuActionKickOut:(id)arg1;
- (void)onAppendCommentDataItem:(id)arg1 forTaskId:(id)arg2 isPublic:(BOOL)arg3;
- (void)onAppendCommentDataItem:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)onAppendCommentDataItemList:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3 preAppend:(BOOL)arg4;
- (void)onPrependCommentDataItemList:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3 showTip:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 pureAudioModeNotificationRequestedForStatus:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(BOOL)arg2;
- (void)onFinderLiveTask:(id)arg1 enablePrivateCommentChange:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 enableFloatBarrageUpdated:(BOOL)arg2;
- (void)onFinderLiveTask:(id)arg1 allowProductQuestionChange:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isHdrCdnLiveChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 enterLiveRoom:(id)arg2;
- (void)onLiveTask:(id)arg1 exitLiveRoom:(long long)arg2 error:(id)arg3;
- (void)onLiveTaskPauseLiveForAudience:(id)arg1;
- (void)onLiveTaskResumeLiveForAudience:(id)arg1;
- (void)onLiveTaskCommentRefreshConfigUpdated:(id)arg1;
- (BOOL)getLiveInputForwardFloatBarrageSwitch;
- (BOOL)getLiveInputForwardProductQuestionSwitch;
- (void)onLiveFaceDetectDataSrcChanged:(long long)arg1;
- (void)onLiveFaceDetect:(id)arg1 disableChanged:(BOOL)arg2;
- (id)getFinderLiveBoxIdList;
- (id)getLastValidCommentItem:(id)arg1;
- (id)requestRecentLoadedCommentItemList:(unsigned long long)arg1 boxId:(id)arg2 requiredMsgTypeList:(id)arg3 requiredMsgSubTypeList:(id)arg4;
- (double)finderLiveSFBarrageGetTopWidgetBottom;
- (void)onFinderLiveSFBarrageLandscapeStyleDisplayChanged:(BOOL)arg1;
- (void)handleForBarrageLandscapeStyleEnableDisplaySilently:(BOOL)arg1;
- (BOOL)autoRecoverCommentToPreBoxIfNeeded;
- (void)onFinderLiveSFBarrageEnableDisplayChanged:(BOOL)arg1;
- (void)onFinderLiveSFBarrageInvokeReply:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeExpose:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeLike:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeUnLike:(id)arg1;
- (void)onFinderLiveSFBarrageFinderRoleExpose:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeRoleProfile:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeTop:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeBan:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeNoSenseBan:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeNoSenseAllow:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeAllow:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeKickOut:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeJumpPOI:(id)arg1;
- (unsigned int)getSingleEnableCommentForDataItem:(id)arg1;
- (void)onFinderLiveSFBarrageInvokeCopy:(id)arg1;
- (void)onFinderLiveSFBarrageHasBarrageDataChanged:(BOOL)arg1;
- (void)onFinderLiveSFBarrageHasBarrageMovingAtTrackIndex:(unsigned long long)arg1;
- (void)onFinderLiveSFBarrageEnableFaceDetectChanged:(BOOL)arg1;
- (void)showBarrageTipsViewWithText:(id)arg1;
- (void)layoutBarrageTipsView;
- (void)dismissBarrageTipsView;
- (void)onLiveView:(id)arg1 videoViewAppearanceChanged:(BOOL)arg2;
- (void)onLandscapeBarrageSettingEnableBarrageChanged:(BOOL)arg1 taskId:(id)arg2;
- (void)checkNeedStartFaceDetect;
- (void)handleNotNeedFaceDetect;
- (void)onSelectGoodsItem:(id)arg1;
- (void)onGoodsSelectionPanelClosed:(id)arg1 openFromSrc:(long long)arg2;
- (id)finderLiveViewController;
- (void)reportOnScrollToTrackingItem;
- (void)refreshWidgetsForFontSizeChange;
- (void)updateQuickReplyInfo:(id)arg1;
- (void)cacheLocationTempInfo:(id)arg1;
- (void)getCacheLocationTempInfo;
- (BOOL)isAlreadyAuthorized;
- (void)setSendLocationTime:(double)arg1;
- (void)updateCurrentTableView;
- (void)updateInputViewAccessibility:(BOOL)arg1;
- (void)onSendPaidBarrageFailWithError:(id)arg1 taskId:(id)arg2 clientMsgId:(id)arg3 rewardAmountInWecoin:(unsigned int)arg4;
- (void)buyCoinSuccess:(id)arg1;
- (void)testGiftAttackCustomize;
- (id /* block */)didCommitTextAction;
- (void)setDidCommitTextAction:(id /* block */)arg1;
- (id /* block */)didCommitLocationAction;
- (void)setDidCommitLocationAction:(id /* block */)arg1;
- (id /* block */)commentContentViewTopDidChanged;
- (void)setCommentContentViewTopDidChanged:(id /* block */)arg1;
- (id /* block */)commentContentViewTopDidChangedForContentState;
- (void)setCommentContentViewTopDidChangedForContentState:(id /* block */)arg1;
- (id /* block */)commentCellDidLongPressedBlock;
- (void)setCommentCellDidLongPressedBlock:(id /* block */)arg1;
- (id /* block */)invokeShowChatRoomCreateGuideBlock;
- (void)setInvokeShowChatRoomCreateGuideBlock:(id /* block */)arg1;
- (id /* block */)commentTalkButtonDidTapBlock;
- (void)setCommentTalkButtonDidTapBlock:(id /* block */)arg1;
- (void)setCommentContentViewTop:(double)arg1;
- (id /* block */)commentCellDidMenuSelectBlock;
- (void)setCommentCellDidMenuSelectBlock:(id /* block */)arg1;
- (id /* block */)onCommentContentTransitionChangeCallback;
- (void)setOnCommentContentTransitionChangeCallback:(id /* block */)arg1;
- (id /* block */)onCommentContentStateChangeCallback;
- (void)setOnCommentContentStateChangeCallback:(id /* block */)arg1;
- (id /* block */)onCommentContentLayoutChangedCallback;
- (void)setOnCommentContentLayoutChangedCallback:(id /* block */)arg1;
- (id /* block */)onCommentBlackListOperationCallback;
- (void)setOnCommentBlackListOperationCallback:(id /* block */)arg1;
- (id /* block */)rotateToOrientationPortrait;
- (void)setRotateToOrientationPortrait:(id /* block */)arg1;
- (BOOL)hideTopCommentContent;
- (BOOL)hideNotifyCommentView;
- (BOOL)canShowTalkButton;
- (BOOL)isInMicTalkingModeSwitchAnimation;
- (void)setIsInMicTalkingModeSwitchAnimation:(BOOL)arg1;
- (void)setChatRoomDataProvider:(id)arg1;
- (void)setProductQueDataProvider:(id)arg1;
- (id)commentContentEntranceTabBar;
- (void)setCommentContentEntranceTabBar:(id)arg1;
- (id)barrageContentView;
- (void)setBarrageContentView:(id)arg1;
- (id)lastChatBoxBeforeAutoChange;
- (void)setLastChatBoxBeforeAutoChange:(id)arg1;
- (id)commentContentContainerView;
- (void)setCommentContentContainerView:(id)arg1;
- (id)topCommentNotifyLogic;
- (void)setTopCommentNotifyLogic:(id)arg1;
- (id)inputEmoticonView;
- (void)setInputEmoticonView:(id)arg1;
- (id)topCommentContentView;
- (void)setTopCommentContentView:(id)arg1;
- (id)cachedLastCommentPostInfoForRetry;
- (void)setCachedLastCommentPostInfoForRetry:(id)arg1;
- (id)cachedLastTextForRetry;
- (void)setCachedLastTextForRetry:(id)arg1;
- (unsigned long long)enableAnchorStatusRequestSeq;
- (void)setEnableAnchorStatusRequestSeq:(unsigned long long)arg1;
- (BOOL)isEnableAnchorStatusRequesting;
- (void)setIsEnableAnchorStatusRequesting:(BOOL)arg1;
- (double)lastEnableAnchorStatusRequestResultTime;
- (void)setLastEnableAnchorStatusRequestResultTime:(double)arg1;
- (id)visbleCommentItemBeforeLayout;
- (void)setVisbleCommentItemBeforeLayout:(id)arg1;
- (id)visbleCommentItemBeforeMinimize;
- (void)setVisbleCommentItemBeforeMinimize:(id)arg1;
- (id)visbleCommentItemBeforeEnterBackground;
- (void)setVisbleCommentItemBeforeEnterBackground:(id)arg1;
- (BOOL)needTableViewAutoScrollToRereshBeforeRotate;
- (void)setNeedTableViewAutoScrollToRereshBeforeRotate:(BOOL)arg1;
- (BOOL)needTableViewAutoScrollToRereshBeforeMinimize;
- (void)setNeedTableViewAutoScrollToRereshBeforeMinimize:(BOOL)arg1;
- (BOOL)needTableViewAutoScrollToRereshBeforeEnterBackground;
- (void)setNeedTableViewAutoScrollToRereshBeforeEnterBackground:(BOOL)arg1;
- (BOOL)needHandleRestoreAfterMinimize;
- (void)setNeedHandleRestoreAfterMinimize:(BOOL)arg1;
- (BOOL)needHandleRestoreAfterEnterForeground;
- (void)setNeedHandleRestoreAfterEnterForeground:(BOOL)arg1;
- (double)enterLiveTime;
- (void)setEnterLiveTime:(double)arg1;
- (id)selfNickNameView;
- (void)setSelfNickNameView:(id)arg1;
- (id)currentAccountNickName;
- (void)setCurrentAccountNickName:(id)arg1;
- (double)currentMaxNickNameWidth;
- (void)setCurrentMaxNickNameWidth:(double)arg1;
- (id)selfNickNameArrStyles;
- (void)setSelfNickNameArrStyles:(id)arg1;
- (id /* block */)sendedAction;
- (void)setSendedAction:(id /* block */)arg1;
- (id)currAlertView;
- (void)setCurrAlertView:(id)arg1;
- (id)pickLocationManager;
- (void)setPickLocationManager:(id)arg1;
- (BOOL)enterBackground;
- (void)setEnterBackground:(BOOL)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void)setLocationSendRecordInfo:(id)arg1;
- (BOOL)hasFetchedLBS;
- (void)setHasFetchedLBS:(BOOL)arg1;
- (BOOL)hasSelectPOI;
- (void)setHasSelectPOI:(BOOL)arg1;
- (unsigned long long)geoTag;
- (void)setGeoTag:(unsigned long long)arg1;
- (double)sendLocationTime;
- (id)quickReplyStr;
- (void)setQuickReplyStr:(id)arg1;
- (id)currentLocationInfo;
- (void)setCurrentLocationInfo:(id)arg1;
- (id)cacheLocationInfo;
- (void)setCacheLocationInfo:(id)arg1;
- (BOOL)sendingLocation;
- (void)setSendingLocation:(BOOL)arg1;
- (void)setLocatingLogic:(id)arg1;
- (int)eventId;
- (void)setEventId:(int)arg1;
- (id)lastBulletinInfo;
- (void)setLastBulletinInfo:(id)arg1;
- (id)enterLiveBulletinInfo;
- (void)setEnterLiveBulletinInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)enablePrivateComment;
- (void)setEnablePrivateComment:(BOOL)arg1;
- (BOOL)isCommentButtonHidden;
- (void)setIsCommentButtonHidden:(BOOL)arg1;
- (BOOL)isCommentButtonTextStatePrivate;
- (unsigned long long)reuseFeedStreamCommentCount;
- (void)setReuseFeedStreamCommentCount:(unsigned long long)arg1;
- (double)lastLayoutTransitonPercent;
- (void)setLastLayoutTransitonPercent:(double)arg1;
- (void)setFloatMsgConfigRequestLogic:(id)arg1;
- (id)customRenderUserId;
- (void)setCustomRenderUserId:(id)arg1;
- (id)customRenderAnchorUserId;
- (void)setCustomRenderAnchorUserId:(id)arg1;
- (BOOL)joinLiveTipsPopulated;
- (void)setJoinLiveTipsPopulated:(BOOL)arg1;
- (BOOL)needsAudioModeNotificationUponJoinLive;
- (void)setNeedsAudioModeNotificationUponJoinLive:(BOOL)arg1;
- (id)barrageTipsView;
- (void)setBarrageTipsView:(id)arg1;
- (void).cxx_destruct;
@end

