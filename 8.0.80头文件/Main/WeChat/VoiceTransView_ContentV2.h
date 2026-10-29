@interface VoiceTransView_ContentV2 : UIView <InputControllerDelegate, UIGestureRecognizerDelegate, UITextViewDelegate, IMMGrowTextViewExt, VoiceTransCommandControllerDelegate>
{
    BOOL _textDiffAnimating; // +0x8
    BOOL _entranceExpanding; // +0x9
    BOOL _hideDecorationsForSend; // +0xa
    BOOL _sugSelected; // +0xb
    BOOL _softProtocolVisible; // +0xc
    BOOL _hardProtocolVisible; // +0xd
    BOOL _hardProtocolForSend; // +0xe
    BOOL _pendingSendAfterDiff; // +0xf
    BOOL _applyingDiffText; // +0x10
    BOOL _textDiffStartedFromEmpty; // +0x11
    BOOL _userScrolledTextView; // +0x12
    BOOL _pendingCommandEditOffsetReset; // +0x13
    BOOL _usesRaisedContentVerticalAnchor; // +0x14
    BOOL _entranceAnimating; // +0x15
    BOOL _entranceCircleWaiting; // +0x16
    BOOL _pendingBecomeTextViewAfterExpand; // +0x17
    BOOL _commandEditTyping; // +0x18
    BOOL _suppressCommandRecognitionResumeOnEndEditing; // +0x19
    BOOL _keyboardDidShowed; // +0x1a
    id <VoiceTransView_ContentDelegate> _delegate; // +0x20
    unsigned long long _recordState; // +0x28
    NSString * _translatedText; // +0x30
    VoiceTransViewV2 * _hostView; // +0x38
    UIView * _bottomView; // +0x40
    MMUIButton * _closeButton; // +0x48
    UIView * _contentView; // +0x50
    VoiceTransTipsViewV2 * _tipsContainer; // +0x58
    VoiceTransTipsViewV2 * _xiaoweiTipsView; // +0x60
    DotLoadingViewV3 * _loadingView; // +0x68
    EmitterTextViewV2 * _emitTextView; // +0x70
    MMGrowTextView * _textView; // +0x78
    UIView * _caretView; // +0x80
    UIView * _inputBar; // +0x88
    WCInputController * _inputController; // +0x90
    MMUIButton * _inputModeButton; // +0x98
    EmoticonBoardView * _emoticonBoardView; // +0xa0
    UIButton * _sendButton; // +0xa8
    SightIconView * _sendLoadingView; // +0xb0
    UILabel * _softProtocolLabel; // +0xb8
    UIView * _hardProtocolPanel; // +0xc0
    UITextView * _hardProtocolAgreementView; // +0xc8
    UIButton * _hardProtocolPrimaryButton; // +0xd0
    UIButton * _hardProtocolCancelButton; // +0xd8
    NSString * _activeDiffTargetText; // +0xe0
    NSString * _pendingDiffTargetText; // +0xe8
    NSString * _deferredNormalASRText; // +0xf0
    unsigned long long _textDiffSessionId; // +0xf8
    double _textDiffLayoutWidth; // +0x100
    VoiceTransCommandController * _commandController; // +0x108
    NSString * _displayText; // +0x110
    UITapGestureRecognizer * _tapGesture; // +0x118
    CADisplayLink * _entranceExpandLink; // +0x120
    double _entranceExpandStartTime; // +0x128
    NSString * _committedTextPrefix; // +0x130
    CGSize _entranceExpandFinalSize; // +0x138
    CGPoint _entranceExpandFinalCenter; // +0x148
    CGPoint _entranceExpandStartCenter; // +0x158
    UIEdgeInsets _inputLayoutInsets; // +0x168
}
- (id)initWithBottomView:(id)arg1 hostView:(id)arg2;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (UIEdgeInsets)horizontalLayoutInsets;
- (double)horizontalLayoutWidth;
- (double)horizontalLayoutCenterX;
- (void)safeAreaInsetsDidChange;
- (double)contentTextWidthWithMaxContentWidth:(double)arg1;
- (void)applyHuggingTextWidthWithMaxContentWidth:(double)arg1;
- (double)bubbleTopMargin;
- (double)rawBubbleMaximumBottomWithStatusHeight:(double)arg1;
- (double)bubbleMaximumBottomWithStatusHeight:(double)arg1;
- (double)contentVerticalAnchor;
- (double)rawNormalStateMaximumTextHeightWithStatusHeight:(double)arg1;
- (BOOL)canFitMinimumTextBubble;
- (double)normalStateMaximumTextHeightWithTopMargin:(double)arg1 statusHeight:(double)arg2;
- (void)positionEmitTextViewToInnerTextView;
- (void)pSetSugSelected:(BOOL)arg1;
- (void)updateInputLayoutForCurrentBounds;
- (void)updateEntranceLayoutForSizeChange;
- (void)updateXiaoweiTipsLayoutForSizeChange;
- (void)layoutUI;
- (void)layoutTailLoading;
- (void)layoutSoftProtocolLabel;
- (void)layoutHardProtocolUIWithTopMargin:(double)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)configureInitialVerticalAnchorForQuickReplyEmoji:(BOOL)arg1;
- (void)raiseVerticalAnchorForXiaoweiSug;
- (void)changeRecordStateTo:(unsigned long long)arg1;
- (void)setSoftProtocolVisible:(BOOL)arg1;
- (void)showHardProtocolForSend:(BOOL)arg1;
- (void)hideHardProtocol;
- (void)commitCurrentTextAsPrefix;
- (void)playBubbleEntranceAnimation;
- (void)startEntranceCircleShadowPulse;
- (void)stopEntranceCircleShadowPulse;
- (id)entranceCircleShadowColorForState:(unsigned long long)arg1;
- (CGPoint)entranceCircleCenter;
- (void)beginEntranceExpandFromCircle;
- (BOOL)entranceContentIsMultiline;
- (void)refreshEntranceExpandTargetForCurrentText;
- (void)jumpEntranceToFinalSize;
- (void)applyCircleAppearanceForState:(unsigned long long)arg1;
- (void)startEntranceExpand;
- (void)onEntranceExpandTick;
- (void)finishEntranceExpand;
- (void)flushPendingBecomeTextViewIfNeeded;
- (void)setTranslatedText:(id)arg1;
- (void)coverTranslatedText:(id)arg1 commandAsrPending:(BOOL)arg2;
- (void)startTextDiffToText:(id)arg1;
- (void)continueTextDiffQueue;
- (id)effectiveTextSnapshot;
- (id)commandInputBoxTextSnapshotForHotwordReport;
- (void)finalizeCommandTextForImmediateSend;
- (void)finishTextDiffImmediately;
- (void)cancelTextDiffAndPendingState;
- (void)onTextDiffApplicationInactive;
- (void)setPeakPower:(float)arg1;
- (void)shakeCommandBubble;
- (void)updateCommandState:(BOOL)arg1 commandResultInvalid:(BOOL)arg2 commandAsrTextNotEmpty:(BOOL)arg3;
- (void)updateCommandOriginAsrText:(id)arg1;
- (BOOL)isCommandStateListening;
- (BOOL)isCommandStateProcessing;
- (BOOL)commandControllerIsRecordStateVisible:(id)arg1;
- (BOOL)commandControllerIsRecordStateCommandEdit:(id)arg1;
- (id)commandControllerCurrentTextViewText:(id)arg1;
- (id)commandControllerEffectiveTextSnapshot:(id)arg1;
- (id)commandControllerCommittedTextPrefix:(id)arg1;
- (id)commandControllerResolvedDiffTailText:(id)arg1;
- (BOOL)commandControllerIsTextDiffAnimating:(id)arg1;
- (BOOL)commandControllerIsEntranceAnimating:(id)arg1;
- (BOOL)commandControllerIsEntranceExpanding:(id)arg1;
- (BOOL)commandControllerIsEntranceCircleWaitingOrAnimating:(id)arg1;
- (struct)commandControllerTraceContext:(id)arg1;
- (void)commandController:(id)arg1 didChangeUIStateEntranceFrozen:(BOOL)arg2;
- (void)commandControllerShakeBubble:(id)arg1;
- (void)commandController:(id)arg1 executeDiffToTargetText:(id)arg2;
- (void)commandControllerMaterializeBubble:(id)arg1;
- (void)commandController:(id)arg1 applyInteractionLockSendEnabled:(BOOL)arg2 textEditable:(BOOL)arg3;
- (void)commandController:(id)arg1 setCommittedTextPrefix:(id)arg2;
- (void)commandControllerPauseRecognitionForTextEditing:(id)arg1;
- (void)commandControllerRestartRecognitionAfterTextEditing:(id)arg1;
- (void)commandControllerOutcomeSettledForRelease:(id)arg1;
- (void)onTranslateSuccess;
- (id)bubbleTextColorForCurrentState;
- (void)reapplyRecordTextColorImmediately;
- (void)recolorTextPreservingLayoutImmediately;
- (BOOL)isStillEntranceCircle;
- (void)hideDecorationsKeepBubble;
- (void)updateSendLoadingVisibility;
- (void)switchBubbleToLightGreenForSendWithCompletion:(id /* block */)arg1;
- (void)finalizeTextForSendCollapse:(id)arg1;
- (void)prepareForSendCollapse;
- (void)collapseBubbleWithAnimator:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (id)contentView;
- (id)tipsContainer;
- (BOOL)isCommandRecordStateVisible;
- (id)commandFeedbackTextForState:(unsigned long long)arg1;
- (unsigned long long)statusIconForCommandState:(unsigned long long)arg1;
- (void)configureCommandStatusViews;
- (double)commandStatusViewHeight;
- (void)layoutTipsContainerForCommandState:(BOOL)arg1;
- (void)configureXiaoweiTipsContent;
- (void)applyXiaoweiTipsViewTopAnimated:(BOOL)arg1;
- (void)crossfadeToXiaoweiTips:(BOOL)arg1;
- (void)playXiaoweiTipsRiseWithOffset:(double)arg1 duration:(double)arg2;
- (void)refreshXiaoweiTipsPosition;
- (BOOL)canFitXiaoweiSugTipsWithBottom:(double)arg1;
- (id)emitTextView;
- (id)committedTextPrefixSnapshot;
- (void)applyPreCommandSegmentFinalText:(id)arg1;
- (id)textView;
- (id)closeButton;
- (id)inputController;
- (id)emoticonBoardView;
- (id)inputBar;
- (id)inputModeButton;
- (id)sendButton;
- (id)sendLoadingView;
- (void)onClickHardProtocolPrimaryButton;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(_NSRange)arg3 interaction:(long long)arg4;
- (void)onTextViewPan:(id)arg1;
- (void)onClickCancelButton;
- (void)onTapInputModeButton;
- (id)controlIconColor;
- (void)onClickSendButton;
- (id)generateAttrTextFrom:(id)arg1 color:(id)arg2;
- (BOOL)isSingleLineForText:(id)arg1 font:(id)arg2;
- (void)cancelCheckDisplayText;
- (void)checkDisplayText;
- (void)_flushText:(id)arg1;
- (void)animateTextChange;
- (double)getVisibleHeight;
- (void)keyboardWillShow;
- (void)keyboardShowing;
- (void)keyboardHiding;
- (void)keyboardDidHide;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewEndEditing:(id)arg1;
- (void)textViewTextDidChange;
- (BOOL)canSelectEmoji:(id)arg1;
- (void)onDeleteEmoticon;
- (void)didCommitText:(id)arg1;
- (void)updateTextInputRelatedView;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)recordState;
- (void)setRecordState:(unsigned long long)arg1;
- (id)translatedText;
- (BOOL)textDiffAnimating;
- (void)setTextDiffAnimating:(BOOL)arg1;
- (BOOL)entranceExpanding;
- (void)setEntranceExpanding:(BOOL)arg1;
- (id)hostView;
- (void)setHostView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (UIEdgeInsets)inputLayoutInsets;
- (void)setInputLayoutInsets:(UIEdgeInsets)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTipsContainer:(id)arg1;
- (id)xiaoweiTipsView;
- (void)setXiaoweiTipsView:(id)arg1;
- (BOOL)hideDecorationsForSend;
- (void)setHideDecorationsForSend:(BOOL)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void)setEmitTextView:(id)arg1;
- (BOOL)sugSelected;
- (void)setSugSelected:(BOOL)arg1;
- (void)setTextView:(id)arg1;
- (id)caretView;
- (void)setCaretView:(id)arg1;
- (void)setInputBar:(id)arg1;
- (void)setInputController:(id)arg1;
- (void)setInputModeButton:(id)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setSendLoadingView:(id)arg1;
- (BOOL)softProtocolVisible;
- (id)softProtocolLabel;
- (void)setSoftProtocolLabel:(id)arg1;
- (BOOL)hardProtocolVisible;
- (void)setHardProtocolVisible:(BOOL)arg1;
- (BOOL)hardProtocolForSend;
- (void)setHardProtocolForSend:(BOOL)arg1;
- (id)hardProtocolPanel;
- (void)setHardProtocolPanel:(id)arg1;
- (id)hardProtocolAgreementView;
- (void)setHardProtocolAgreementView:(id)arg1;
- (id)hardProtocolPrimaryButton;
- (void)setHardProtocolPrimaryButton:(id)arg1;
- (id)hardProtocolCancelButton;
- (void)setHardProtocolCancelButton:(id)arg1;
- (id)activeDiffTargetText;
- (void)setActiveDiffTargetText:(id)arg1;
- (id)pendingDiffTargetText;
- (void)setPendingDiffTargetText:(id)arg1;
- (id)deferredNormalASRText;
- (void)setDeferredNormalASRText:(id)arg1;
- (BOOL)pendingSendAfterDiff;
- (void)setPendingSendAfterDiff:(BOOL)arg1;
- (BOOL)applyingDiffText;
- (void)setApplyingDiffText:(BOOL)arg1;
- (unsigned long long)textDiffSessionId;
- (void)setTextDiffSessionId:(unsigned long long)arg1;
- (double)textDiffLayoutWidth;
- (void)setTextDiffLayoutWidth:(double)arg1;
- (BOOL)textDiffStartedFromEmpty;
- (void)setTextDiffStartedFromEmpty:(BOOL)arg1;
- (id)commandController;
- (void)setCommandController:(id)arg1;
- (id)displayText;
- (void)setDisplayText:(id)arg1;
- (BOOL)userScrolledTextView;
- (void)setUserScrolledTextView:(BOOL)arg1;
- (BOOL)pendingCommandEditOffsetReset;
- (void)setPendingCommandEditOffsetReset:(BOOL)arg1;
- (BOOL)usesRaisedContentVerticalAnchor;
- (void)setUsesRaisedContentVerticalAnchor:(BOOL)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (BOOL)entranceAnimating;
- (void)setEntranceAnimating:(BOOL)arg1;
- (BOOL)entranceCircleWaiting;
- (void)setEntranceCircleWaiting:(BOOL)arg1;
- (BOOL)pendingBecomeTextViewAfterExpand;
- (void)setPendingBecomeTextViewAfterExpand:(BOOL)arg1;
- (id)entranceExpandLink;
- (void)setEntranceExpandLink:(id)arg1;
- (double)entranceExpandStartTime;
- (void)setEntranceExpandStartTime:(double)arg1;
- (CGSize)entranceExpandFinalSize;
- (void)setEntranceExpandFinalSize:(CGSize)arg1;
- (CGPoint)entranceExpandFinalCenter;
- (void)setEntranceExpandFinalCenter:(CGPoint)arg1;
- (CGPoint)entranceExpandStartCenter;
- (void)setEntranceExpandStartCenter:(CGPoint)arg1;
- (BOOL)commandEditTyping;
- (void)setCommandEditTyping:(BOOL)arg1;
- (BOOL)suppressCommandRecognitionResumeOnEndEditing;
- (void)setSuppressCommandRecognitionResumeOnEndEditing:(BOOL)arg1;
- (id)committedTextPrefix;
- (void)setCommittedTextPrefix:(id)arg1;
- (BOOL)keyboardDidShowed;
- (void)setKeyboardDidShowed:(BOOL)arg1;
- (void).cxx_destruct;
@end
