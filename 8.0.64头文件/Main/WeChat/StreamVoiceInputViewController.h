@interface StreamVoiceInputViewController : MMUIViewController <IStreamVoiceInputExt, StreamVoiceInputControlViewDelegate, INetworkStatusMgrExt, InputControllerDelegate, WCActionSheetDelegate, IVOIPUILogicMgrExt>
{
    NSMutableArray * _displayDataArray; // +0x70
    double _textViewOffsetY; // +0x78
    unsigned long long _longClickTime; // +0x80
    int _textChangeCount; // +0x88
    unsigned long long _textChangeStartTime; // +0x90
    UIView * _recordLeftView; // +0x98
    UIImageView * _recordWarningView; // +0xa0
    MMUILabel * _tooShortLabel; // +0xa8
    NSMutableDictionary * _inputLogicDic; // +0xb0
    NSMutableArray * _voiceIdArray; // +0xb8
    ReportVoiceResultMgr * _reportResultMgr; // +0xc0
    UIImageView * _inputToolView; // +0xc8
    UIButton * _expressionButton; // +0xd0
    UIButton * _voiceButton; // +0xd8
    EmoticonBoardView * _emoticonBoardView; // +0xe0
    WCInputController * _inputController; // +0xe8
    double _currentKeyboardHeight; // +0xf0
    unsigned long long _inputControllerStatus; // +0xf8
    long long _savedTextRange; // +0x100
    long long _recordingWordingIndex; // +0x108
    NSString * _recordingWording; // +0x110
    double _currentHalfViewHeight; // +0x118
    long long _hasSetCursorPos; // +0x120
    UIView * _coverView; // +0x128
    BOOL _willHide; // +0x130
    BOOL _bIsEditingMode; // +0x131
    BOOL _needHideEmotion; // +0x132
    BOOL _userDidTapEndRecord; // +0x133
    int _inputStatus; // +0x134
    unsigned int _curInputLanguageType; // +0x138
    id <StreamVoiceInputViewControllerDelegate> _delegate; // +0x140
    NSString * _cachedToolViewText; // +0x148
    CMessageWrap * _cachedReplyingMessage; // +0x150
    NSString * _savedText; // +0x158
    NSString * _chatName; // +0x160
    long long _returnKeyType; // +0x168
    long long _scene; // +0x170
    UIView * _containerView; // +0x178
    MMGrowTextView * _inputResultView; // +0x180
    UILabel * _inputIntroLabel; // +0x188
    StreamVoiceInputControlView * _controlView; // +0x190
    StreamVoiceInputPrepareView * _prepareView; // +0x198
    MMTipsViewController * _tipsView; // +0x1a0
    UIButton * _cancelButton; // +0x1a8
    UIButton * _clearCancelButton; // +0x1b0
    UIButton * _sendButton; // +0x1b8
    UIButton * _clearButton; // +0x1c0
    StreamVoiceInputControlView * _editControllView; // +0x1c8
    UIButton * _editSendButton; // +0x1d0
    UILabel * _editInputIntroLabel; // +0x1d8
    UIView * _voiceKeyboardView; // +0x1e0
    UIView * _languageSwitchView; // +0x1e8
    UIButton * _languageButton; // +0x1f0
    WXKeyBoardTipsView * _keyboardTipsView; // +0x1f8
    StreamVoiceInputLogic * _curInputLogic; // +0x200
    NSString * _sessionID; // +0x208
    CGRect _viewFrame; // +0x210
}
- (id)initWithViewFrame:(CGRect)arg1;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)updateLanguageSupportView;
- (void)initView;
- (BOOL)shouldShowLanguageSwitchButton;
- (id)getSelectedLanguageName;
- (void)updateLanguageSwitchBtn;
- (void)showLanguageSelectView;
- (void)initTooShortTipView;
- (void)initInputToolView;
- (void)initEmoticonView;
- (void)initInputController;
- (void)recoverFromSavedText;
- (void)handleSwipeFrom:(id)arg1;
- (void)showPrepareView;
- (void)showPrepareView:(BOOL)arg1;
- (void)showRecorderInitHoldView;
- (void)showRecordingViewForHold;
- (void)showRecordEndWaitingView;
- (void)showRecordEndView;
- (void)showEditingView;
- (void)showInputEnd;
- (void)showEditingPrepareView;
- (void)showTooShortTips;
- (void)showRecordingMaskView;
- (void)hideRecordingMaskView;
- (void)hideTooShortTips;
- (void)showCancelOrClearButton:(BOOL)arg1;
- (void)setInputStatus:(int)arg1;
- (BOOL)ifGetResultAllEnd;
- (void)setAllEnd;
- (void)forceSetAllInputEnd;
- (void)saveEditedResult;
- (void)clearResult;
- (int)getUncertainLength;
- (BOOL)hasSuffixDotWithString:(id)arg1;
- (BOOL)hasPrefixDotWithString:(id)arg1;
- (id)getEndDotRemovedString:(id)arg1;
- (void)displayResultText;
- (void)resetResultTextView;
- (BOOL)hasVoiceInputResult;
- (void)displayInitingWording;
- (id)generateAttrTextFrom:(id)arg1 withUncertainLength:(int)arg2 withLastLargeFontLength:(int)arg3 withLastSavedTextCount:(int)arg4;
- (void)asyncStartRecord:(id /* block */)arg1;
- (id)curInputLogic;
- (void)stopRecord;
- (void)changeRecordingWording:(id)arg1;
- (id)getRecordingWording;
- (BOOL)checkCanDoFurtherAction;
- (BOOL)resizeContainerViewHeight;
- (void)setTextViewSelectionRange:(_NSRange)arg1;
- (double)getHalfScreenHeight;
- (void)showStreamVoiceInputView;
- (void)hideStreamVoiceInputView;
- (BOOL)isHidingStreamVoiceInputView;
- (void)makeStreamVoiceInputViewFullScreen;
- (void)resetStreamVoiceInputViewToHalfScreen;
- (void)pbReportReturn;
- (void)resizeView:(CGRect)arg1;
- (double)getContainerViewY;
- (void)adjustContentForLandScapeWith:(UIEdgeInsets)arg1;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)userDidHoldBegin;
- (void)userDidHoldEnd:(BOOL)arg1;
- (void)userTryToRecord:(BOOL)arg1;
- (void)userTryToEndRecord:(BOOL)arg1;
- (void)delaySetStartStatus;
- (void)sendStreamVoiceInputResult;
- (void)userDidCancel;
- (void)userDidSend;
- (void)userDidClear;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)onVoiceInputButtonClicked;
- (void)jumpToPlugin;
- (void)keyboardWillShow;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)textViewTextDidChange;
- (double)getVisibleHeight;
- (double)getVisibleBottomPadding;
- (void)didCommitText:(id)arg1;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(BOOL)arg2;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)adaptResultViewHeightToKeyboardHeight;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)inputStatus;
- (id)cachedToolViewText;
- (void)setCachedToolViewText:(id)arg1;
- (id)cachedReplyingMessage;
- (void)setCachedReplyingMessage:(id)arg1;
- (BOOL)bIsEditingMode;
- (void)setBIsEditingMode:(BOOL)arg1;
- (id)savedText;
- (void)setSavedText:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (long long)returnKeyType;
- (void)setReturnKeyType:(long long)arg1;
- (BOOL)needHideEmotion;
- (void)setNeedHideEmotion:(BOOL)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (BOOL)userDidTapEndRecord;
- (void)setUserDidTapEndRecord:(BOOL)arg1;
- (CGRect)viewFrame;
- (void)setViewFrame:(CGRect)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)inputResultView;
- (void)setInputResultView:(id)arg1;
- (id)inputIntroLabel;
- (void)setInputIntroLabel:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)prepareView;
- (void)setPrepareView:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)clearCancelButton;
- (void)setClearCancelButton:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)clearButton;
- (void)setClearButton:(id)arg1;
- (id)editControllView;
- (void)setEditControllView:(id)arg1;
- (id)editSendButton;
- (void)setEditSendButton:(id)arg1;
- (id)editInputIntroLabel;
- (void)setEditInputIntroLabel:(id)arg1;
- (id)voiceKeyboardView;
- (void)setVoiceKeyboardView:(id)arg1;
- (id)languageSwitchView;
- (void)setLanguageSwitchView:(id)arg1;
- (id)languageButton;
- (void)setLanguageButton:(id)arg1;
- (id)keyboardTipsView;
- (void)setKeyboardTipsView:(id)arg1;
- (unsigned int)curInputLanguageType;
- (void)setCurInputLanguageType:(unsigned int)arg1;
- (id)inputLogicDic;
- (void)setInputLogicDic:(id)arg1;
- (void)setCurInputLogic:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (void).cxx_destruct;
@end
