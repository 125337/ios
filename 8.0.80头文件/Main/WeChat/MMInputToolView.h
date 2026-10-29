@interface MMInputToolView : MMUIView <MMGrowTextViewDelegate, WXKeyBoardActiveReceiver, TranslateToolViewDelegate, TranslateLanguageSelectViewDelegate, VoiceTransViewDelegate, SolitaireTipsViewDelegate, RecordViewDelegate, MMTransparentButtonDelegate, MMRecordUIManager, IRecordControllerExt, VoiceRecordMessageHandler, VoiceRecordHostUIDelegate, WWKFCustomToolBarDelegate, MMQuickSendEmoticonViewDelegate, EmoticonSearchViewControllerDelegate, BaseEmoticonViewDelegate, EmoticonBoardViewDelegate, RelatedEmoticonHalfScreenViewControllerDelegate, MMLiteAppExt, EmoticonSearchHalfScreenViewControllerDelegate, SelectAttachmentViewControllerDelegate, WCActionSheetDelegate, WASendSessionMsgViewDelegate, MMInputMsgReferDelegate, EmoticonInputRecommendMgrExt, WCGroupUndoneActionDelegate, MsgFullScreenInputDelegate, ISessionInfoExt, AudioRecordCheckerExt, UITextViewDelegate, ISysCallCheckExt, WCActionSheetDelegate, IRecordPermissionCheckExt, MMMsgInputPresenter>
{
    MMUIButton * _inputModeChangeButton; // +0x8
    UIView * _toolView; // +0x10
    EmoticonBoardView * _expressionView; // +0x18
    RelatedEmoticonHalfScreenViewController * _relatedEmoticonViewController; // +0x20
    MMGrowTextView * _textView; // +0x28
    MMUIButton * _attachmentButton; // +0x30
    UIView * _recordingTipsView; // +0x38
    MMTransparentButton * _recordButton; // +0x40
    MMUIButton * _expressionButton; // +0x48
    UIButton * _sendCaptrueView; // +0x50
    WASendSessionMsgView * _sendWeAppSessionMsgView; // +0x58
    UIButton * m_quickSendEmoticonBackView; // +0x60
    UIView * m_quickSendEmoticonView; // +0x68
    MMEmoticonView * m_emoticonView; // +0x70
    double _keyboardHeight; // +0x78
    unsigned long long _inputMode; // +0x80
    unsigned long long _positionMode; // +0x88
    unsigned long long _contentMode; // +0x90
    BOOL _reqRemoteEmotionRecommendation; // +0x98
    id <MMInputToolViewDelegate> _delegate; // +0xa0
    long long iMuteCount; // +0xa8
    unsigned long long _recordStatus; // +0xb0
    id <MMInputToolViewCustomizationDelegate> _uiDelegate; // +0xb8
    UIView * _parentView; // +0xc0
    BOOL m_bPositioning; // +0xc8
    unsigned long long _preSightInputMode; // +0xd0
    unsigned long long _preSightPositionMode; // +0xd8
    unsigned long long _preSightContentMode; // +0xe0
    double _bizInputBtnWidth; // +0xe8
    BOOL _showToolViewAfterAnimation; // +0xf0
    double _keyboardTop; // +0xf8
    BOOL _isWeAppSessionMsgBtnHidding; // +0x100
    BOOL _hasReceiveTextBeginEditing; // +0x101
    UIView * m_keyboardBackgroundView; // +0x108
    UIImpactFeedbackGenerator * m_impactFeedbackGenerator; // +0x110
    BOOL _isDetectingExternalKeyboard; // +0x118
    BOOL m_hadAttachmentRedDot; // +0x119
    BOOL m_hadReportedRedDotExp; // +0x11a
    SelectAttachmentViewController * m_selectAttachmentViewController; // +0x120
    SelectAttachmentView * _attachmentView; // +0x128
    BOOL _relatedEmoticonLiteApp; // +0x130
    BOOL _dialectVoiceTransGuideHostActive; // +0x131
    BOOL _dialectVoiceTransGuideExposedInCurrentSession; // +0x132
    BOOL _dialectVoiceTransGuideClosedInCurrentSession; // +0x133
    BOOL _pressGuideSessionActive; // +0x134
    BOOL _pressGuideExposedInCurrentSession; // +0x135
    BOOL _pressGuideActivatedInCurrentSession; // +0x136
    BOOL _pressGuideDismissedByKeyboardInCurrentSession; // +0x137
    BOOL _pressGuideKeyboardVisible; // +0x138
    BOOL _pressGuideNeedsOverlayReset; // +0x139
    BOOL _weappSessionMsgBtnIgnoreFirstTextEdit; // +0x13a
    BOOL _bNewTextInputHadShowSolitaireTips; // +0x13b
    BOOL _hasShownVideoView; // +0x13c
    BOOL _waitingForContinueRecording; // +0x13d
    BOOL _hasDoneContinueRecording; // +0x13e
    BOOL _needUpdateRecommendCtxs; // +0x13f
    BOOL _showFromClick; // +0x140
    BOOL _bEnableTopicSearchInteraction; // +0x141
    BOOL _presentingFullScreenInput; // +0x142
    unsigned int _scene; // +0x144
    SEL mRecordSelector; // +0x148
    UIView * _toolPanelView; // +0x150
    double _animateLiteAppContentViewTop; // +0x158
    MMLiteAppViewController * _m_relativeEmoticonLiteViewController; // +0x160
    CBaseContact * _contact; // +0x168
    NSString * _lastPastedText; // +0x170
    UIView * _headImageExtraView; // +0x178
    RecordAdapterView * _recordAdapterView; // +0x180
    VoiceTransView * _voiceTransView; // +0x188
    DialectVoiceTransGuideBubbleView * _dialectVoiceTransGuideBubbleView; // +0x190
    UIButton * _pressGuideIconButton; // +0x198
    UILabel * _pressGuideIconTextLabel; // +0x1a0
    unsigned long long _pressGuideIconAnimationGeneration; // +0x1a8
    UIView * _pressGuideAccessoryRowView; // +0x1b0
    NSString * _pressGuideChatNameAtDisappear; // +0x1b8
    NSString * _pressGuidePlaceholderExposureViewID; // +0x1c0
    long long _pressGuideTriggerStatus; // +0x1c8
    unsigned long long _fMaxLength; // +0x1d0
    MMInputMsgReferView * _msgRefView; // +0x1d8
    MMHeadImageView * _headImageView; // +0x1e0
    WCGroupUndoneActionBar * _undoneBar; // +0x1e8
    NSArray * _groupUndoneItems; // +0x1f0
    NSArray * _xiaoweiTaskItems; // +0x1f8
    MsgFullScreenInputAnimationController * _fullScreenInputTransition; // +0x200
    UIView * _shortcutCommandView; // +0x208
    NSString * _shortcutCommandUserName; // +0x210
    unsigned long long _touchBeginTimestamp; // +0x218
    unsigned long long _requestRecordPermissionCallbackTimestamp; // +0x220
    NSSet * _originTouches; // +0x228
    TranslateToolView * _transToolView; // +0x230
    UIView * _fakeTextBackgroundView; // +0x238
    CMessageWrap * _replyingMessage; // +0x240
    MMReferPartialInfo * _replyingPartialInfo; // +0x248
    UIButton * _sendButton; // +0x250
    UIViewPropertyAnimator * _sendButtonPresentAnimator; // +0x258
    UIViewPropertyAnimator * _sendButtonDismissAnimator; // +0x260
    SolitaireTipsView * _solitaireTipsView; // +0x268
    MMQuickSendEmoticonView * _quickSendEmoticonView; // +0x270
    NewEmoticonSearchViewController * _searchEmoticonViewControllerH5; // +0x278
    MMLiteAppViewController * _searchEmoticonViewControllerLiteApp; // +0x280
    NSString * _lastRequestEmoticonDesc; // +0x288
    CADisplayLink * _displayLink; // +0x290
    double _animationStartTime; // +0x298
    double _initialPosition; // +0x2a0
    double _targetPosition; // +0x2a8
    double _animationDuration; // +0x2b0
    RecommendPanelEmojiCtxs * _recommendCtxs; // +0x2b8
    EmoticonSearchInMessagePanelReporter * _report; // +0x2c0
    MsgSendOpEntry * _entrys; // +0x2c8
    WWKFCustomToolBar * _kfCustomToolBar; // +0x2d0
    MMUIButton * _fullScreenButton; // +0x2d8
    MsgFullScreenInputViewController * _fullScreenInputVC; // +0x2e0
    CGVector _headImageExtraEdgeVector; // +0x2e8
    CGPoint _pointInScreen; // +0x2f8
    CGPoint _voiceTransTouchPoint; // +0x308
}
- (void)initTextView;
- (id)getGrowTextViewExtConfig;
- (void)updateGrowTextViewProperty;
- (double)getDefaultTextViewHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void)setTextKeyboardHeight:(double)arg1;
- (void)hideNonDialectVoiceTransTipsIfNeeded;
- (CGRect)calculateVoiceTransViewFrameForContainerView:(id)arg1;
- (void)layoutVoiceTransView;
- (void)showVoiceTransTipsIfNeed;
- (void)showDialectVoiceTransGuideBubbleIfNeeded;
- (void)hideDialectVoiceTransGuideBubble;
- (void)hideDialectVoiceTransGuide;
- (void)hideVoiceTransTipsIfNeed;
- (void)clearPressGuidePlaceholder;
- (void)clearPressGuideIconText;
- (void)hidePressGuideUIRecoverDictationIcon:(BOOL)arg1;
- (BOOL)canDisplayPressGuideBaseUI;
- (double)pressGuideCenterPlaceholderOffsetX;
- (void)configurePressGuidePlaceholderWithText:(id)arg1 color:(id)arg2 fontSize:(double)arg3 attributed:(BOOL)arg4 centered:(BOOL)arg5 animated:(BOOL)arg6;
- (void)showPressGuideIcon;
- (void)onPressGuideIconClicked;
- (void)resetPressGuideIconState;
- (void)showPressGuideAccessoryRow;
- (void)onPressGuideAccessoryClose;
- (void)reportPressGuideExposureWithViewID:(id)arg1;
- (void)reportPressGuideClickWithViewID:(id)arg1;
- (void)reportPressGuidePlaceholderExposureIfNeededWithViewID:(id)arg1;
- (void)recordPressGuideExposureIfNeededForType:(unsigned int)arg1;
- (BOOL)hasHigherPriorityPressGuideAccessory;
- (void)refreshPressGuideIfNeeded;
- (void)layoutPressGuideViews;
- (void)onPressGuideConfigurationDidChange;
- (void)recordPressGuideUsageIfNeeded;
- (BOOL)canUseVoiceTransLongPress;
- (long long)currentPressGuideTriggerStatus;
- (BOOL)isViewControllerTop;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)onClickTextViewSendText:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (BOOL)TextViewDidDelete;
- (void)TextViewDidDeleteToNil;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (BOOL)MMGrowTextView:(id)arg1 shouldPasteImage:(id)arg2;
- (void)MMGrowTextView:(id)arg1 pasteImage:(id)arg2;
- (void)MMGrowTextViewPasteMultiMediaContent:(id)arg1;
- (void)MMGrowTextView:(id)arg1 willPastedText:(id)arg2;
- (BOOL)MMGrowTextViewForbidEditing:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewEndEditing:(id)arg1;
- (void)onDeleteMsgReplyView:(id)arg1;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1 growTextView:(id)arg2;
- (void)onOpenTopicSearch;
- (void)onClickTranslateToolOpenMenu;
- (void)onClickTranslateToolCloseMenu;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)textView:(id)arg1 didShowMenuTypes:(id)arg2;
- (id)getCurrentChatName;
- (void)MMGrowTextViewDidStartVoiceInput:(id)arg1;
- (void)MMGrowTextViewDidStopVoiceInput:(id)arg1;
- (void)MMGrowTextViewDidApplyDictationTextChange:(id)arg1;
- (BOOL)MMGrowTextView_LongPressGestureShouldBegan;
- (void)MMGrowTextView_LongPressGestureTouchesBegan:(CGPoint)arg1;
- (void)realStartVoiceTransRecording;
- (void)MMGrowTextView_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMGrowTextView_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMGrowTextView_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (double)getAdditionalHeight;
- (BOOL)isKeyboardShowing;
- (double)getVoiceTransTopObstructionBottomInWindow;
- (double)getKeyboardHeight;
- (id)getChatName;
- (id)getContent;
- (void)voiceTransEndWithLogic:(id)arg1;
- (id)voiceTransEndWithLogicReturnMsg:(id)arg1;
- (void)voiceTransEndWithResult:(id)arg1;
- (id)voiceTransEndWithResultReturnMsg:(id)arg1;
- (id)voiceTransEndWithResultReturnCollapseMsg:(id)arg1;
- (id)voiceTransEndWithEmoticon:(id)arg1;
- (void)voiceTransViewDidDisappear;
- (void)showTranslateTool;
- (void)onClickUseTranslateResult:(id)arg1;
- (void)onClickCloseTranslateTool;
- (id)getViewController;
- (id)getGrowTextView;
- (void)cleanPlaceHolder;
- (void)onConfirmedWithLanguageType:(id)arg1;
- (id)supportMessageTypes;
- (unsigned int)activeScene;
- (void)sendMessage:(id)arg1;
- (id)getContact;
- (BOOL)startDictationByKeyBoard;
- (BOOL)stopDictationByKeyBoard;
- (void)initSendButton;
- (void)onTapSendButton;
- (void)showHalfScreenPageSheet;
- (void)TextViewDidEnter_Solitaire:(id)arg1;
- (void)tryAnalysisSolitaireOnTextChange:(id)arg1;
- (void)showSolirateTipsWithObj:(id)arg1;
- (id)createSolitaireTipsView;
- (void)analysisSolitaireWithContent:(id)arg1;
- (void)onTapSolitaireTipsView:(id)arg1;
- (id)shortcutCommandView;
- (void)setShortcutCommandView:(id)arg1;
- (id)shortcutCommands;
- (void)setShortcutCommands:(id)arg1;
- (id)shortcutCommandUserName;
- (void)setShortcutCommandUserName:(id)arg1;
- (void)initShortcutCommandView;
- (void)updateShortcutCommands:(id)arg1;
- (void)hideShortcutCommandView;
- (double)getShortcutCommandViewHeight;
- (void)layoutShortcutCommandView;
- (void)cleanupShortcutCommandResources;
- (id)p_createCapsuleView:(id)arg1 tag:(long long)arg2;
- (double)p_calculateCapsuleWidth:(id)arg1;
- (void)p_onCapsuleTouchDown:(id)arg1;
- (void)p_onCapsuleTouchUp:(id)arg1;
- (void)p_onCapsuleTapped:(id)arg1;
- (unsigned long long)p_getVisibleCapsuleCount;
- (void)notifyAudioSessionInterruptForRecord;
- (void)initRecordButton;
- (id)createRecordAdapterView;
- (void)layoutRecordAdapterView;
- (void)startRecording:(id)arg1;
- (void)realStartRecording;
- (void)realStartRecordingAfterImpactOccurred;
- (void)stopRecording;
- (void)cancelRecording;
- (BOOL)StopRecordingInTransState:(BOOL)arg1;
- (id)getChatCellWithMsg:(id)arg1;
- (double)getRecordButtonResponseY;
- (BOOL)onRecordWillStopWhenAppWillTerminate;
- (void)showCancel:(id)arg1;
- (void)ShowPreparing;
- (void)ShowRecording;
- (void)ShowTooLongTips;
- (void)ShowTooShortTips;
- (void)ShowStartFailTips:(id)arg1;
- (void)HideRecordTips;
- (BOOL)VoiceRecordNeedPopUpViewController;
- (BOOL)onRecordCountRemain:(long long)arg1;
- (BOOL)needShowTooLongTips;
- (void)onStopOrCancelRecording;
- (void)reStartRecorder;
- (BOOL)isShowingVoiceTransView;
- (void)SetPeakPower:(float)arg1;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)resetRecordView;
- (void)setVoiceEnabled:(BOOL)arg1;
- (void)updateRecordButtonDisabled;
- (void)voiceRecordSendOriginalVoice:(id)arg1;
- (void)voiceRecordSendText:(id)arg1;
- (void)voiceRecordMarkVoiceSendFailedWithLocalId:(unsigned int)arg1;
- (BOOL)voiceRecordCommitVoiceMessageWithLocalId:(unsigned int)arg1;
- (BOOL)voiceRecordStopRecordingForTranslate:(BOOL)arg1;
- (void)voiceRecordShouldLiftHostContentToBottom:(double)arg1;
- (void)voiceRecordShouldRestoreHostContentAnimated:(BOOL)arg1;
- (id)voiceRecordCurrentViewController;
- (void)voiceRecordDidShow;
- (void)voiceRecordDidHide;
- (void)voiceRecordAnimateSendContentView:(id)arg1 forLocalId:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)toRecordStautsPerparing;
- (void)toRecordStautsRecording;
- (void)toRecordStautsRecordCancelTips;
- (void)toRecordStautsTooLongTips;
- (void)toRecordStautsTooShortTips;
- (void)toRecordStautsIdle;
- (void)initKFCustomToolBarView;
- (BOOL)hasKFCustomToolBarItems;
- (double)getKFCustomToolBarHeight;
- (void)updateKFCustomToolBarItemList:(id)arg1 animated:(BOOL)arg2;
- (void)showKFCustomToolBarAnimated:(BOOL)arg1;
- (void)hideKFCustomToolBarAnimated:(BOOL)arg1;
- (void)handleKFCustomToolBarInViewDidAppear;
- (int)ecsKfRoomEnterScene;
- (void)onClickCustomToolBarItem:(id)arg1;
- (BOOL)openByEcsJumpInfoIfPossible:(id)arg1 extraData:(id)arg2 scene:(int)arg3;
- (void)onExposureCustomToolBarItem:(id)arg1;
- (id)configEmoticonView;
- (void)onShowFromClick;
- (void)initQuickSendEmoticonView;
- (void)onSendButtonClicked;
- (void)OnEmoticonStateDidChanged:(BOOL)arg1;
- (void)changeTextViewColorForEmoticonState:(BOOL)arg1;
- (void)onEmoticonSearchIconClicked;
- (void)onEmoticonBoardHeightChanged;
- (double)toolViewHeightForBoardExpand;
- (double)tipsViewHeightForBoardExpand;
- (id)getSnapShotForMerge;
- (void)didSelectorEmoticon:(id)arg1;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (id)GetCurrentViewController;
- (void)deleteEmoticon;
- (void)onHalfScreenPage:(id)arg1 contentTopChanged:(double)arg2;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (id)getRecentMessageWrapListForEmoticonRecommend;
- (id)getRecommendMessageContexts;
- (id)getRecentChatCtxsForEmoticonRecommend:(BOOL)arg1;
- (id)getRecommendPanelEmojiCtxs:(BOOL)arg1;
- (void)onRelatedEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)openRelativeEmoticonLiteAppWithEmoticonWrap:(id)arg1;
- (void)openRelativeEmoticonViewControllerWithEmoticonWrapIOS:(id)arg1 andMessageWrap:(id)arg2;
- (void)openRelativeEmoticonXiaoWeiHalfScreenWithEmoticonWrap:(id)arg1 andMessageWrap:(id)arg2;
- (void)showRelativeEmoticonViewControllerWithEmoticonWrap:(id)arg1 andMessageWrap:(id)arg2;
- (id)normalizeEmoticonMsgXmlForXiaoWei:(id)arg1 emoticonWrap:(id)arg2;
- (void)showSearchEmoticonViewController:(BOOL)arg1;
- (BOOL)shouldInterceptHideExpressionPanelOnKeyboardChanged;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (id)getMsgTableView;
- (void)onSearchEmoticonViewControllerDidClose;
- (void)onMergeRecommendEmoticon:(id)arg1 emoticonWrapList:(id)arg2 sessionId:(id)arg3 recSessionId:(id)arg4 remoteWordListMeta:(id)arg5;
- (void)onMMQuickSendEmoticonViewClickEmoticonWrap:(id)arg1 index:(unsigned long long)arg2;
- (void)onMMQuickSendEmoticonViewClickSearchMoreWithWrap:(id)arg1 index:(unsigned long long)arg2;
- (id)currentChatId;
- (BOOL)checkEmoticonCanSend:(id *)arg1;
- (BOOL)checkRemoteRecommendEmoticonCanSend:(id)arg1;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (void)onLiteAppLifeCycleEvent:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3 extraData:(id)arg4;
- (void)animateToPosition:(double)arg1;
- (void)updateAnimation:(id)arg1;
- (void)doClearTextIfFromSearch;
- (void)didSelectAttachmentAtIndex:(unsigned long long)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (id)getInputToolWeAppOpEntryAr;
- (id)getMsgSendOpEntry;
- (id)getContactForReport;
- (id)getServiceAppList;
- (int)_hasReddot:(id)arg1;
- (void)onMediaBrowserClicked:(id)arg1;
- (void)onCameraControllerClicked:(id)arg1;
- (void)onVoiceVoipButtonClicked:(id)arg1;
- (void)voiceVoipBtnRealClicked;
- (void)onVideoVoipButtonClicked:(id)arg1;
- (void)videoVoipBtnRealClicked;
- (void)onLocationButtonClicked:(id)arg1;
- (void)onRedEnvelopesClicked:(id)arg1;
- (void)onTransferButtonClicked:(id)arg1;
- (void)onCollectButtonClicked:(id)arg1;
- (void)showTransferOrCollectActionSheet;
- (void)startCollectFlowFromChatPanel;
- (void)onVoiceInputButtonClicked:(id)arg1;
- (void)voiceInputBtnRealClicked;
- (void)onXiaoWeiButtonClicked:(id)arg1;
- (void)onMyFavoritesButtonClicked:(id)arg1;
- (void)onShareCardButtonClicked:(id)arg1;
- (void)onFileBrowserClicked:(id)arg1;
- (void)on3rdServiceButtonClicked:(id)arg1;
- (void)onEnterpriseBrandEntryButtonClicked:(id)arg1;
- (void)onMusicButtonClicked:(id)arg1;
- (void)onGiftButtonClicked:(id)arg1;
- (void)onExposeGiftEntrance;
- (void)onExposeXiaoWeiEntrance;
- (BOOL)shouldShowRedDotInChatGiftIcon;
- (id)onGetGiftReportParams;
- (void)onSolitaireButtonClicked:(id)arg1;
- (void)onChatRoomToolButtonClick:(id)arg1;
- (void)onLiveButtonClicked:(id)arg1;
- (void)onMultiTalkButtonClicked:(id)arg1;
- (void)onFinderButtonClicked:(id)arg1;
- (void)realStartMultiTalk;
- (void)onCardPkgButtonClicked:(id)arg1;
- (void)onInputToolWeAppButtonClicked:(id)arg1;
- (void)onShowInputToolWeAppAr:(id)arg1;
- (void)onShowLiveEntrance;
- (void)onShowAttachViewWithPageIndex:(unsigned long long)arg1 items:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (BOOL)checkCanCallThisContactVideo:(BOOL)arg1;
- (void)logSightCameraEntranceWithCameraButton:(BOOL)arg1;
- (BOOL)isEnableVoiceVoipFromPlugin;
- (void)updateAttachmentView;
- (void)resetAttachmentButtonRedDot;
- (void)initAttachmentView;
- (void)resetSelectAttachmentView;
- (void)combineToolView;
- (void)initToolView;
- (void)initToolPanelView;
- (void)initAttachmentButton;
- (void)initExpressionButton;
- (void)initFullScreenButton;
- (void)initSendCaptrueView;
- (void)initInputModeChangeButton;
- (void)initHeadImageRelatedViews;
- (void)setHeadImageExtraView:(id)arg1;
- (id)svgName:(id)arg1 Size:(CGSize)arg2;
- (id)hlSvgName:(id)arg1 Size:(CGSize)arg2;
- (double)parentViewWidth;
- (void)setFMaxLength:(unsigned long long)arg1;
- (double)defaultBubbleBottomPadding;
- (void)fixBtnY;
- (double)fKeyboardAnimationDuration;
- (void)setFKeyboardAnimationDuration:(double)arg1;
- (long long)iKeyboardAnimationCurve;
- (void)setIKeyboardAnimationCurve:(long long)arg1;
- (BOOL)isInPageSheetMode;
- (id)GetCurrentText;
- (void)hideSendCaptrueViewAnimated:(BOOL)arg1;
- (void)hideSendCaptrueView;
- (void)showSendCaptrueViewAnimated:(BOOL)arg1;
- (void)SetButtonHighlighted:(BOOL)arg1;
- (void)updateContentSize;
- (void)updateToolViewHeight:(BOOL)arg1;
- (void)updateToolViewHeight:(BOOL)arg1 withAnimationBlock:(id /* block */)arg2;
- (void)updateHeadImageRelatedViews;
- (void)UpdateTabBarSendButtonState;
- (void)updateCustomToolView;
- (void)onInputTextChange:(id)arg1;
- (void)tryDoAnimationOnTextChange;
- (void)tryTransInputTextOnTextChange:(id)arg1;
- (void)initSubView;
- (BOOL)isInFloatingPageSheetMode;
- (id)voiceRecordSplitOverlayContainerView;
- (id)voiceRecordOverlayContainerView;
- (UIEdgeInsets)voiceRecordHorizontalLayoutInsetsForView:(id)arg1;
- (CGRect)calculateVoiceRecordOverlayFrameForContainerView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithUIDelegate:(id)arg1 ParentView:(id)arg2;
- (id)initWithUIDelegate:(id)arg1 ParentView:(id)arg2 scene:(unsigned int)arg3;
- (id)initWithUIDelegate:(id)arg1 ParentView:(id)arg2 scene:(unsigned int)arg3 delegate:(id)arg4;
- (void)Reset;
- (void)hideToolView:(BOOL)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)dictationEnabled;
- (BOOL)canStartVoiceByKeyBoard;
- (void)setDictationEnabled:(BOOL)arg1;
- (void)onWillDisappear;
- (void)onWillAppear;
- (void)onViewDidInit;
- (void)onViewWillDisappear;
- (void)onViewDidBePoped;
- (void)notifyToolViewAppear;
- (void)notifyToolViewDisappear;
- (void)onInputModeChangeButtonClicked:(id)arg1;
- (void)tryShowCaptrueButton;
- (void)showCaptrueButton;
- (void)onAttachmentModeChangeButtonClicked:(id)arg1;
- (void)onSendCaptrueButtonClicked:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onFullScreenButtonClicked;
- (id)entrys;
- (void)onTapMsgReplyView:(id)arg1;
- (void)animateInputModeTransition:(BOOL)arg1;
- (void)animateInputModeView:(id)arg1 toAlpha:(double)arg2 delay:(double)arg3 animated:(BOOL)arg4;
- (void)setInputMode:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)onPositionAnimationEnd;
- (float)getContentViewHeight:(unsigned long long)arg1;
- (void)didMoveToWindow;
- (void)setPoisitionMode:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)disvisibleContentTool;
- (void)NotifyViewControllerPostionChanged:(BOOL)arg1 Animated:(BOOL)arg2;
- (void)setContentMode:(unsigned long long)arg1 animated:(BOOL)arg2;
- (BOOL)isTracking;
- (void)insertString:(id)arg1;
- (void)deleteBackward;
- (void)resetText;
- (void)InputIsAvailableChanged:(BOOL)arg1;
- (void)BeginInterruption;
- (void)onDetectMicriphoneMuted;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (CGPoint)CheckVoiceBtnPressLocation;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isFirstResponder;
- (void)dealloc;
- (void)updateWeAppSessionMsgImageURL:(id)arg1 imageData:(id)arg2;
- (void)updateWeAppSessionMsgImageURL:(id)arg1 imageData:(id)arg2 hintTitle:(id)arg3;
- (void)updateWeAppSessionMsgScene:(unsigned int)arg1;
- (void)showWeAppSessionMsgBtn;
- (void)hideWeAppSessionMsgBtn;
- (void)initWeAppSessionMsgBtn;
- (void)layoutWeAppSessionMsgBtn;
- (void)onClickSendSessionMsgBtn;
- (id)replyingMessage;
- (id)displayViewForRefer;
- (id)replyingReferPartialInfo;
- (void)replyMessage:(id)arg1;
- (void)replyMessage:(id)arg1 becomeFirstResponder:(BOOL)arg2 showDisplayName:(BOOL)arg3;
- (double)getMsgReplyViewHeight;
- (void)resetReplyMessage;
- (void)setReplyingString:(id)arg1 replyImageView:(id)arg2;
- (void)onClearInputMsgRefer;
- (id)baseMsgContentViewController;
- (id)getChatUsername;
- (id)getChatNickname;
- (id)getContactForToolViewReport;
- (void)setContact:(id)arg1;
- (void)initGroupUndoneView;
- (BOOL)hasUndoneItems;
- (double)getGroupUndoneBarHeight;
- (double)getTransToolHeight;
- (void)hideLastUndoneView;
- (void)reloadCapsuleBarAnimated:(BOOL)arg1;
- (void)updateGroupUndoneList:(id)arg1 animated:(BOOL)arg2;
- (void)updateXiaoweiTaskList:(id)arg1 animated:(BOOL)arg2;
- (void)updateUndoneItem:(id)arg1;
- (void)removeUndoneItem:(id)arg1;
- (void)showUndoneBarAnimated:(BOOL)arg1;
- (void)hideUndoneBarAnimated:(BOOL)arg1;
- (void)addHeadImageClickActionWithTarget:(id)arg1 action:(SEL)arg2;
- (void)onClickXiaoweiTaskItem:(id)arg1 isLastItem:(BOOL)arg2;
- (void)onClickGroupUndoneItem:(id)arg1 isLastItem:(BOOL)arg2;
- (void)onCloseGroupUndoneItem:(id)arg1 isLastItem:(BOOL)arg2;
- (void)onCompleteGroupUndoneItem:(id)arg1 isLastItem:(BOOL)arg2;
- (void)onRevokeGroupUndoneItem:(id)arg1;
- (void)onBecomeActive:(id)arg1;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (id)fullScreenInputTransition;
- (void)jumpToFullScreenVC;
- (id)MsgFullScreenInput_getCurrentChatName;
- (void)onExitWithAttributedText:(id)arg1 selectedRange:(_NSRange)arg2 showKeyboard:(BOOL)arg3 showEmoticon:(BOOL)arg4;
- (void)onModifyDraft:(id)arg1 contact:(id)arg2 draftTime:(unsigned int)arg3;
- (id)inputText;
- (long long)referMsgSvrId;
- (double)toolViewHeight;
- (void)startDictation:(unsigned long long)arg1;
- (id)buildRedDotSourceList;
- (id)toolView35963ReportParams;
- (void)reportRedChatPlusExposure;
- (id)inputModeChangeButton;
- (void)setInputModeChangeButton:(id)arg1;
- (id)toolView;
- (void)setToolView:(id)arg1;
- (id)expressionView;
- (void)setExpressionView:(id)arg1;
- (id)relatedEmoticonViewController;
- (void)setRelatedEmoticonViewController:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)attachmentButton;
- (void)setAttachmentButton:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)recordingTipsView;
- (void)setRecordingTipsView:(id)arg1;
- (id)recordButton;
- (void)setRecordButton:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)inputMode;
- (void)setInputMode:(unsigned long long)arg1;
- (unsigned long long)positionMode;
- (void)setPositionMode:(unsigned long long)arg1;
- (unsigned long long)contentMode;
- (void)setContentMode:(unsigned long long)arg1;
- (BOOL)m_bPositioning;
- (void)setM_bPositioning:(BOOL)arg1;
- (id)_uiDelegate;
- (void)set_uiDelegate:(id)arg1;
- (SEL)mRecordSelector;
- (void)setMRecordSelector:(SEL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)toolPanelView;
- (void)setToolPanelView:(id)arg1;
- (BOOL)relatedEmoticonLiteApp;
- (void)setRelatedEmoticonLiteApp:(BOOL)arg1;
- (double)animateLiteAppContentViewTop;
- (void)setAnimateLiteAppContentViewTop:(double)arg1;
- (id)m_relativeEmoticonLiteViewController;
- (void)setM_relativeEmoticonLiteViewController:(id)arg1;
- (id)contact;
- (id)lastPastedText;
- (void)setLastPastedText:(id)arg1;
- (id)headImageExtraView;
- (CGVector)headImageExtraEdgeVector;
- (void)setHeadImageExtraEdgeVector:(CGVector)arg1;
- (id)recordAdapterView;
- (void)setRecordAdapterView:(id)arg1;
- (id)voiceTransView;
- (void)setVoiceTransView:(id)arg1;
- (id)dialectVoiceTransGuideBubbleView;
- (void)setDialectVoiceTransGuideBubbleView:(id)arg1;
- (BOOL)dialectVoiceTransGuideHostActive;
- (void)setDialectVoiceTransGuideHostActive:(BOOL)arg1;
- (BOOL)dialectVoiceTransGuideExposedInCurrentSession;
- (void)setDialectVoiceTransGuideExposedInCurrentSession:(BOOL)arg1;
- (BOOL)dialectVoiceTransGuideClosedInCurrentSession;
- (void)setDialectVoiceTransGuideClosedInCurrentSession:(BOOL)arg1;
- (id)pressGuideIconButton;
- (void)setPressGuideIconButton:(id)arg1;
- (id)pressGuideIconTextLabel;
- (void)setPressGuideIconTextLabel:(id)arg1;
- (unsigned long long)pressGuideIconAnimationGeneration;
- (void)setPressGuideIconAnimationGeneration:(unsigned long long)arg1;
- (id)pressGuideAccessoryRowView;
- (void)setPressGuideAccessoryRowView:(id)arg1;
- (BOOL)pressGuideSessionActive;
- (void)setPressGuideSessionActive:(BOOL)arg1;
- (BOOL)pressGuideExposedInCurrentSession;
- (void)setPressGuideExposedInCurrentSession:(BOOL)arg1;
- (BOOL)pressGuideActivatedInCurrentSession;
- (void)setPressGuideActivatedInCurrentSession:(BOOL)arg1;
- (BOOL)pressGuideDismissedByKeyboardInCurrentSession;
- (void)setPressGuideDismissedByKeyboardInCurrentSession:(BOOL)arg1;
- (BOOL)pressGuideKeyboardVisible;
- (void)setPressGuideKeyboardVisible:(BOOL)arg1;
- (id)pressGuideChatNameAtDisappear;
- (void)setPressGuideChatNameAtDisappear:(id)arg1;
- (BOOL)pressGuideNeedsOverlayReset;
- (void)setPressGuideNeedsOverlayReset:(BOOL)arg1;
- (id)pressGuidePlaceholderExposureViewID;
- (void)setPressGuidePlaceholderExposureViewID:(id)arg1;
- (long long)pressGuideTriggerStatus;
- (void)setPressGuideTriggerStatus:(long long)arg1;
- (unsigned long long)fMaxLength;
- (BOOL)weappSessionMsgBtnIgnoreFirstTextEdit;
- (void)setWeappSessionMsgBtnIgnoreFirstTextEdit:(BOOL)arg1;
- (BOOL)bNewTextInputHadShowSolitaireTips;
- (void)setBNewTextInputHadShowSolitaireTips:(BOOL)arg1;
- (id)msgRefView;
- (void)setMsgRefView:(id)arg1;
- (BOOL)hasShownVideoView;
- (void)setHasShownVideoView:(BOOL)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)undoneBar;
- (void)setUndoneBar:(id)arg1;
- (id)groupUndoneItems;
- (void)setGroupUndoneItems:(id)arg1;
- (id)xiaoweiTaskItems;
- (void)setXiaoweiTaskItems:(id)arg1;
- (void)setFullScreenInputTransition:(id)arg1;
- (id)shortcutCommandView;
- (void)setShortcutCommandView:(id)arg1;
- (id)shortcutCommandUserName;
- (void)setShortcutCommandUserName:(id)arg1;
- (unsigned long long)touchBeginTimestamp;
- (void)setTouchBeginTimestamp:(unsigned long long)arg1;
- (unsigned long long)requestRecordPermissionCallbackTimestamp;
- (void)setRequestRecordPermissionCallbackTimestamp:(unsigned long long)arg1;
- (CGPoint)pointInScreen;
- (void)setPointInScreen:(CGPoint)arg1;
- (id)originTouches;
- (void)setOriginTouches:(id)arg1;
- (BOOL)waitingForContinueRecording;
- (void)setWaitingForContinueRecording:(BOOL)arg1;
- (BOOL)hasDoneContinueRecording;
- (void)setHasDoneContinueRecording:(BOOL)arg1;
- (id)transToolView;
- (void)setTransToolView:(id)arg1;
- (id)fakeTextBackgroundView;
- (void)setFakeTextBackgroundView:(id)arg1;
- (void)setReplyingMessage:(id)arg1;
- (id)replyingPartialInfo;
- (void)setReplyingPartialInfo:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)sendButtonPresentAnimator;
- (void)setSendButtonPresentAnimator:(id)arg1;
- (id)sendButtonDismissAnimator;
- (void)setSendButtonDismissAnimator:(id)arg1;
- (CGPoint)voiceTransTouchPoint;
- (void)setVoiceTransTouchPoint:(CGPoint)arg1;
- (id)solitaireTipsView;
- (void)setSolitaireTipsView:(id)arg1;
- (id)quickSendEmoticonView;
- (void)setQuickSendEmoticonView:(id)arg1;
- (id)searchEmoticonViewControllerH5;
- (void)setSearchEmoticonViewControllerH5:(id)arg1;
- (id)searchEmoticonViewControllerLiteApp;
- (void)setSearchEmoticonViewControllerLiteApp:(id)arg1;
- (id)lastRequestEmoticonDesc;
- (void)setLastRequestEmoticonDesc:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)animationStartTime;
- (void)setAnimationStartTime:(double)arg1;
- (double)initialPosition;
- (void)setInitialPosition:(double)arg1;
- (double)targetPosition;
- (void)setTargetPosition:(double)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (BOOL)needUpdateRecommendCtxs;
- (void)setNeedUpdateRecommendCtxs:(BOOL)arg1;
- (id)recommendCtxs;
- (void)setRecommendCtxs:(id)arg1;
- (BOOL)showFromClick;
- (void)setShowFromClick:(BOOL)arg1;
- (id)report;
- (void)setReport:(id)arg1;
- (void)setEntrys:(id)arg1;
- (id)kfCustomToolBar;
- (void)setKfCustomToolBar:(id)arg1;
- (BOOL)bEnableTopicSearchInteraction;
- (void)setBEnableTopicSearchInteraction:(BOOL)arg1;
- (id)fullScreenButton;
- (void)setFullScreenButton:(id)arg1;
- (BOOL)presentingFullScreenInput;
- (void)setPresentingFullScreenInput:(BOOL)arg1;
- (id)fullScreenInputVC;
- (void)setFullScreenInputVC:(id)arg1;
- (void).cxx_destruct;
@end
