@interface SearchVoiceInputViewController : MMUIViewController <IStreamVoiceInputExt, StreamVoiceInputControlViewDelegate, INetworkStatusMgrExt>
{
    NSMutableArray * _displayDataArray; // +0x70
    unsigned long long _longClickTime; // +0x78
    int _textChangeCount; // +0x80
    UIView * _recordLeftView; // +0x88
    UIImageView * _recordWarningView; // +0x90
    MMUILabel * _tooShortLabel; // +0x98
    UIImageView * _inputToolView; // +0xa0
    long long _recordingWordingIndex; // +0xa8
    NSString * _recordingWording; // +0xb0
    double _currentHalfViewHeight; // +0xb8
    long long _hasSetCursorPos; // +0xc0
    UIView * _coverView; // +0xc8
    BOOL _willHide; // +0xd0
    BOOL _bAlwayShowMaskView; // +0xd1
    BOOL _isNavVoice; // +0xd2
    unsigned int _scene; // +0xd4
    id <SearchVoiceInputViewControllerDelegate> _delegate; // +0xd8
    unsigned long long _inputStatus; // +0xe0
    NSString * _sessionId; // +0xe8
    NSString * _subSessionId; // +0xf0
    UIView * _containerView; // +0xf8
    MMGrowTextView * _inputResultView; // +0x100
    UILabel * _inputIntroLabel; // +0x108
    StreamVoiceInputControlView * _controlView; // +0x110
    StreamVoiceInputPrepareView * _prepareView; // +0x118
    MMTipsViewController * _tipsView; // +0x120
    UIButton * _cancelButton; // +0x128
    NSMutableDictionary * _inputLogicDic; // +0x130
    StreamVoiceInputLogic * _curInputLogic; // +0x138
    NSMutableArray * _voiceIdArray; // +0x140
    NSLayoutConstraint * _separatorLineHeightConstraint; // +0x148
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)initView;
- (double)tooShortTipViewOriginY;
- (void)initTooShortTipView;
- (void)handleSwipeFrom:(id)arg1;
- (void)showPrepareView;
- (void)showRecorderInitHoldView;
- (void)showRecordingViewForHold;
- (void)showRecordEndWaitingView;
- (void)showRecordEndView;
- (void)showInputEnd;
- (void)showTooShortTips;
- (void)showRecordingMaskView;
- (void)hideRecordingMaskView;
- (void)hideTooShortTips;
- (void)showCancelOrClearButton:(BOOL)arg1;
- (void)setInputStatus:(unsigned long long)arg1;
- (BOOL)ifGetResultAllEnd;
- (void)setAllEnd;
- (void)forceSetAllInputEnd;
- (int)getUncertainLength;
- (void)displayResultText;
- (void)resetResultTextView;
- (BOOL)hasVoiceInputResult;
- (void)displayInitingWording;
- (id)generateAttrTextFrom:(id)arg1 withUncertainLength:(int)arg2 withLastLargeFontLength:(int)arg3 withLastSavedTextCount:(int)arg4;
- (unsigned long long)startRecord;
- (void)stopRecord;
- (void)changeRecordingWording:(id)arg1;
- (id)getRecordingWording;
- (BOOL)checkCanDoFurtherAction;
- (BOOL)resizeContainerViewHeight;
- (void)setTextViewSelectionRange:(_NSRange)arg1;
- (void)showStreamVoiceInputView;
- (void)hideStreamVoiceInputView;
- (double)getContainerViewY;
- (void)OnStartRecord:(unsigned int)arg1;
- (void)OnEndRecord:(unsigned int)arg1;
- (void)OnLevelMeter:(unsigned long long)arg1 Peak:(float)arg2;
- (void)onGetResultText:(id)arg1 andInputId:(unsigned int)arg2;
- (void)OnError:(int)arg1 andInputId:(unsigned int)arg2;
- (void)OnVoiceTransEnd:(unsigned int)arg1;
- (void)userDidHoldBegin;
- (void)userDidHoldEnd:(BOOL)arg1;
- (void)userTryToRecord:(BOOL)arg1;
- (void)userTryToEndRecord:(BOOL)arg1;
- (void)delaySetStartStatus;
- (void)userDidCancel;
- (void)onTapCoverView;
- (void)onCoverViewSwipeFrom:(id)arg1;
- (void)textViewTextDidChange;
- (double)getVisibleHeight;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)inputStatus;
- (BOOL)bAlwayShowMaskView;
- (void)setBAlwayShowMaskView:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)isNavVoice;
- (void)setIsNavVoice:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)subSessionId;
- (void)setSubSessionId:(id)arg1;
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
- (id)inputLogicDic;
- (void)setInputLogicDic:(id)arg1;
- (id)curInputLogic;
- (void)setCurInputLogic:(id)arg1;
- (id)voiceIdArray;
- (void)setVoiceIdArray:(id)arg1;
- (id)separatorLineHeightConstraint;
- (void)setSeparatorLineHeightConstraint:(id)arg1;
- (void).cxx_destruct;
@end
