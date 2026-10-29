@interface CBTBrandMultiToOneTalkingView : ChatBotBrandVoIPTalkingView <MMDictationLogicIconDelegate, UITextFieldDelegate, IChatBotVoIPSessionDelegate>
{
    BOOL _startPlayFlag; // +0x8
    BOOL _greenMicRecording; // +0x9
    BOOL _recordEndPlayFlag; // +0xa
    unsigned int _state; // +0xc
    unsigned int _onlineCount; // +0x10
    unsigned int _uvCount; // +0x14
    MMDictationLogicIcon * _dictationLogicIcon; // +0x18
    MMUITextField * _textField; // +0x20
    MMGrowTextView * _growTextView; // +0x28
    NSLayoutConstraint * _inputBarBottomCons; // +0x30
    UIView * _inputBarView; // +0x38
    MMUILabel * _onLineInfoLabel; // +0x40
    CBTBrandLiveCommentListView * _commentView; // +0x48
    NSTimer * _timer; // +0x50
    MemoryMappedKV * _mmkv; // +0x58
    NSString * _lastTraceId; // +0x60
    NSMutableSet * _traceIdSet; // +0x68
    long long _firstPullQuestionCount; // +0x70
    CBTBrandTextField * _brandTextField; // +0x78
    CGRect _originalInputBarViewFrame; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutHeadImageView;
- (void)layoutRoomNameLabel;
- (void)layoutOnLineInfoLabel;
- (void)updateUIState:(unsigned int)arg1;
- (void)layoutCommentView;
- (void)layoutInputText;
- (void)setupShadowForView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)handleSendAction;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)registerKeyboardNotifications;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)MMDictationLogicIcon_replaceRange:(_NSRange)arg1 withText:(id)arg2;
- (void)MMDictationLogicIconWillStart;
- (void)MMDictationLogicIconWillStop;
- (BOOL)checkCurrentRecordingStatus;
- (void)handleRouteChange:(id)arg1;
- (void)onTTSBegin:(id)arg1;
- (void)onTTSEnd:(id)arg1;
- (void)onRoomMemberChangeAsync:(int)arg1;
- (void)onTalkSucc;
- (void)addTipsCommentWithBadgeText:(id)arg1 queryContent:(id)arg2;
- (void)updateRoomOnlineInfo;
- (void)pullIncomingCommentNotFirst;
- (void)pullIncomingComment:(BOOL)arg1;
- (void)sendRoomMemberCountInfo;
- (void)willMoveToSuperview:(id)arg1;
- (unsigned int)state;
- (void)setState:(unsigned int)arg1;
- (id)dictationLogicIcon;
- (void)setDictationLogicIcon:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)inputBarBottomCons;
- (void)setInputBarBottomCons:(id)arg1;
- (id)inputBarView;
- (void)setInputBarView:(id)arg1;
- (id)onLineInfoLabel;
- (void)setOnLineInfoLabel:(id)arg1;
- (CGRect)originalInputBarViewFrame;
- (void)setOriginalInputBarViewFrame:(CGRect)arg1;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned int)onlineCount;
- (void)setOnlineCount:(unsigned int)arg1;
- (unsigned int)uvCount;
- (void)setUvCount:(unsigned int)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (BOOL)startPlayFlag;
- (void)setStartPlayFlag:(BOOL)arg1;
- (id)lastTraceId;
- (void)setLastTraceId:(id)arg1;
- (id)traceIdSet;
- (void)setTraceIdSet:(id)arg1;
- (long long)firstPullQuestionCount;
- (void)setFirstPullQuestionCount:(long long)arg1;
- (BOOL)greenMicRecording;
- (void)setGreenMicRecording:(BOOL)arg1;
- (id)brandTextField;
- (void)setBrandTextField:(id)arg1;
- (BOOL)recordEndPlayFlag;
- (void)setRecordEndPlayFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
