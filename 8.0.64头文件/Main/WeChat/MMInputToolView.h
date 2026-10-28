@interface MMInputToolView : MMUIView <MMGrowTextViewDelegate, WXKeyBoardActiveReceiver, TranslateToolViewDelegate, TranslateLanguageSelectViewDelegate, SolitaireTipsViewDelegate, RecordViewDelegate, MMTransparentButtonDelegate, MMRecordUIManager, WWKFCustomToolBarDelegate, MMQuickSendEmoticonViewDelegate, EmoticonSearchViewControllerDelegate, BaseEmoticonViewDelegate, EmoticonBoardViewDelegate, RelatedEmoticonHalfScreenViewControllerDelegate, SelectAttachmentViewControllerDelegate, WCActionSheetDelegate, WASendSessionMsgViewDelegate, MMInputMsgReferDelegate, EmoticonInputRecommendMgrExt, WCGroupUndoneActionDelegate, MsgFullScreenInputDelegate, ISessionInfoExt, AudioRecordCheckerExt, UITextViewDelegate, ISysCallCheckExt, WCActionSheetDelegate, IRecordPermissionCheckExt, MMMsgInputPresenter>
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
    SelectAttachmentViewController * m_selectAttachmentViewController; // +0x120
    SelectAttachmentView * _attachmentView; // +0x128
    BOOL _weappSessionMsgBtnIgnoreFirstTextEdit; // +0x130
    BOOL _bNewTextInputHadShowSolitaireTips; // +0x131
    BOOL _hasShownVideoView; // +0x132
    BOOL _bEnableTopicSearchInteraction; // +0x133
    BOOL _presentingFullScreenInput; // +0x134
    unsigned int _scene; // +0x138
    SEL mRecordSelector; // +0x140
    UIView * _toolPanelView; // +0x148
    CBaseContact * _contact; // +0x150
    NSString * _lastPastedText; // +0x158
    UIView * _headImageExtraView; // +0x160
    RecordAdapterView * _recordAdapterView; // +0x168
    unsigned long long _fMaxLength; // +0x170
    MMInputMsgReferView * _msgRefView; // +0x178
    MMHeadImageView * _headImageView; // +0x180
    WCGroupUndoneActionBar * _undoneBar; // +0x188
    MsgFullScreenInputAnimationController * _fullScreenInputTransition; // +0x190
    MsgFullScreenInputViewController * _fullScreenInputVC; // +0x198
    unsigned long long _touchBeginTimestamp; // +0x1a0
    unsigned long long _requestRecordPermissionCallbackTimestamp; // +0x1a8
    NSSet * _originTouches; // +0x1b0
    TranslateToolView * _transToolView; // +0x1b8
    UIView * _fakeTextBackgroundView; // +0x1c0
    CMessageWrap * _replyingMessage; // +0x1c8
    MMReferPartialInfo * _replyingPartialInfo; // +0x1d0
    UIButton * _sendButton; // +0x1d8
    UIViewPropertyAnimator * _sendButtonPresentAnimator; // +0x1e0
    UIViewPropertyAnimator * _sendButtonDismissAnimator; // +0x1e8
    SolitaireTipsView * _solitaireTipsView; // +0x1f0
    MMQuickSendEmoticonView * _quickSendEmoticonView; // +0x1f8
    NewEmoticonSearchViewController * _searchEmoticonViewControllerH5; // +0x200
    NSString * _lastRequestEmoticonDesc; // +0x208
    MsgSendOpEntry * _entrys; // +0x210
    WWKFCustomToolBar * _kfCustomToolBar; // +0x218
    MMUIButton * _fullScreenButton; // +0x220
    CGVector _headImageExtraEdgeVector; // +0x228
    CGPoint _pointInScreen; // +0x238
}
- (void)initTextView;
- (id)getGrowTextViewExtConfig;
- (void)updateGrowTextViewProperty;
- (void)resetGrowTextView;
- (double)getDefaultTextViewHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void)setTextKeyboardHeight:(double)arg1;
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
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewEndEditing:(id)arg1;
- (void)onAccessoryViewFrameChanged:(CGRect)arg1;
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
- (void)initSendButton;
- (void)onTapSendButton;
- (void)TextViewDidEnter_Solitaire:(id)arg1;
- (void)tryAnalysisSolitaireOnTextChange:(id)arg1;
- (void)showSolirateTipsWithObj:(id)arg1;
- (id)createSolitaireTipsView;
- (void)analysisSolitaireWithContent:(id)arg1;
- (void)onTapSolitaireTipsView:(id)arg1;
- (void)notifyAudioSessionInterruptForRecord;
- (void)initRecordButton;
- (id)createRecordAdapterView;
- (void)startRecording:(id)arg1;
- (void)realStartRecording;
- (void)realStartRecordingAfterImpactOccurred;
- (void)stopRecording;
- (void)cancelRecording;
- (BOOL)StopRecordingInTransState:(BOOL)arg1;
- (id)cancelRecordingAndTransVoiceWithLanguage:(unsigned int)arg1;
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
- (void)SetPeakPower:(float)arg1;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)resetRecordView;
- (void)setVoiceEnabled:(BOOL)arg1;
- (void)backSetRecordTransMsg:(id)arg1;
- (void)updateRecordButtonDisabled;
- (void)sendMsgWithText:(id)arg1;
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
- (void)onClickCustomToolBarItem:(id)arg1;
- (void)onExposureCustomToolBarItem:(id)arg1;
- (id)configEmoticonView;
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
- (id)getRecommendMessageContexts;
- (void)onRelatedEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)openRelativeEmoticonLiteAppWithEmoticonWrap:(id)arg1;
- (void)openRelativeEmoticonViewControllerWithEmoticonWrapIOS:(id)arg1 andMessageWrap:(id)arg2;
- (void)showRelativeEmoticonViewControllerWithEmoticonWrap:(id)arg1 andMessageWrap:(id)arg2;
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
- (void)didSelectAttachmentAtIndex:(unsigned long long)arg1;
- (long long)getInputToolWeAppNotShowIndex;
- (id)getInputToolWeAppOpEntryAr;
- (id)getMsgSendOpEntry;
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
- (void)onVoiceInputButtonClicked:(id)arg1;
- (void)voiceInputBtnRealClicked;
- (void)onMyFavoritesButtonClicked:(id)arg1;
- (void)onShareCardButtonClicked:(id)arg1;
- (void)onFileBrowserClicked:(id)arg1;
- (void)on3rdServiceButtonClicked:(id)arg1;
- (void)onEnterpriseBrandEntryButtonClicked:(id)arg1;
- (void)onMusicButtonClicked:(id)arg1;
- (void)onGiftButtonClicked:(id)arg1;
- (void)onExposeGiftEntrance;
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
- (void)layoutSubviews;
- (id)initWithUIDelegate:(id)arg1 ParentView:(id)arg2;
- (id)initWithUIDelegate:(id)arg1 ParentView:(id)arg2 scene:(unsigned int)arg3;
- (id)initWithUIDelegate:(id)arg1 ParentView:(id)arg2 scene:(unsigned int)arg3 delegate:(id)arg4;
- (void)Reset;
- (void)hideToolView:(BOOL)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)dictationEnabled;
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
- (id)getChatUsername;
- (void)setContact:(id)arg1;
- (void)initGroupUndoneView;
- (BOOL)hasUndoneItems;
- (double)getGroupUndoneBarHeight;
- (double)getTransToolHeight;
- (void)hideLastUndoneView;
- (void)updateGroupUndoneList:(id)arg1 animated:(BOOL)arg2;
- (void)updateUndoneItem:(id)arg1;
- (void)removeUndoneItem:(id)arg1;
- (void)showUndoneBarAnimated:(BOOL)arg1;
- (void)hideUndoneBarAnimated:(BOOL)arg1;
- (void)addHeadImageClickActionWithTarget:(id)arg1 action:(SEL)arg2;
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
- (id)contact;
- (id)lastPastedText;
- (void)setLastPastedText:(id)arg1;
- (id)headImageExtraView;
- (CGVector)headImageExtraEdgeVector;
- (void)setHeadImageExtraEdgeVector:(CGVector)arg1;
- (id)recordAdapterView;
- (void)setRecordAdapterView:(id)arg1;
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
- (void)setFullScreenInputTransition:(id)arg1;
- (id)fullScreenInputVC;
- (void)setFullScreenInputVC:(id)arg1;
- (unsigned long long)touchBeginTimestamp;
- (void)setTouchBeginTimestamp:(unsigned long long)arg1;
- (unsigned long long)requestRecordPermissionCallbackTimestamp;
- (void)setRequestRecordPermissionCallbackTimestamp:(unsigned long long)arg1;
- (CGPoint)pointInScreen;
- (void)setPointInScreen:(CGPoint)arg1;
- (id)originTouches;
- (void)setOriginTouches:(id)arg1;
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
- (id)solitaireTipsView;
- (void)setSolitaireTipsView:(id)arg1;
- (id)quickSendEmoticonView;
- (void)setQuickSendEmoticonView:(id)arg1;
- (id)searchEmoticonViewControllerH5;
- (void)setSearchEmoticonViewControllerH5:(id)arg1;
- (id)lastRequestEmoticonDesc;
- (void)setLastRequestEmoticonDesc:(id)arg1;
- (void)setEntrys:(id)arg1;
- (id)kfCustomToolBar;
- (void)setKfCustomToolBar:(id)arg1;
- (BOOL)bEnableTopicSearchInteraction;
- (void)setBEnableTopicSearchInteraction:(BOOL)arg1;
- (id)fullScreenButton;
- (void)setFullScreenButton:(id)arg1;
- (BOOL)presentingFullScreenInput;
- (void)setPresentingFullScreenInput:(BOOL)arg1;
- (void).cxx_destruct;
@end
