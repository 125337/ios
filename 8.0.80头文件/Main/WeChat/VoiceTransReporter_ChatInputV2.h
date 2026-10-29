@interface VoiceTransReporter_ChatInputV2 : NSObject
{
    BOOL _isCommandFullScreen; // +0x8
    BOOL _voiceTransViewReport; // +0x9
    BOOL _startWithKeyboardShow; // +0xa
    BOOL _didEnterEditState; // +0xb
    BOOL _firstEditInEdit; // +0xc
    BOOL _editAllSpaceInEdit; // +0xd
    BOOL _editContainChatInEdit; // +0xe
    BOOL _editContainTextInEdit; // +0xf
    BOOL _didEnterEditStateInCommand; // +0x10
    BOOL _firstEditInCommand; // +0x11
    BOOL _editAllSpaceInCommand; // +0x12
    BOOL _editContainChatInCommand; // +0x13
    BOOL _editContainTextInCommand; // +0x14
    BOOL _softProtocolExposed; // +0x15
    BOOL _hardProtocolExposed; // +0x16
    unsigned int _currentCommandId; // +0x18
    int _hardProtocolExposedSource; // +0x1c
    NSString * _chatName; // +0x20
    NSString * _sessionId; // +0x28
    NSString * _voiceTransId; // +0x30
    NSString * _commandEditStartText; // +0x38
    NSString * _commandEditEndText; // +0x40
    unsigned long long _state; // +0x48
    unsigned long long _stateStartTime; // +0x50
    NSMutableString * _stateString; // +0x58
    NSMutableArray * _voiceInfoList; // +0x60
    NSMutableArray * _commandInfoList; // +0x68
    NSMutableString * _commandStateTrace; // +0x70
    unsigned long long _recordLaunchTime; // +0x78
    unsigned long long _firstResponseTime; // +0x80
    unsigned long long _firstResponseWithTextTime; // +0x88
    unsigned long long _startEditTime; // +0x90
    unsigned long long _endEditTime; // +0x98
}
- (id)init;
- (void)onTouchStartInState:(unsigned long long)arg1;
- (void)onTouchMoveToState:(unsigned long long)arg1;
- (void)onTouchEnd;
- (void)onStartNewTransSegment:(id)arg1 type:(int)arg2;
- (void)setChatName:(id)arg1;
- (void)onInputViewPlaceHolderAppear;
- (void)onRecordButtonBorderAppear;
- (void)onDialectInputGuideExpose;
- (void)onDialectInputGuideClose;
- (void)addPressGuideTriggerStatusIfNeeded:(long long)arg1 toParams:(id)arg2;
- (void)onPressGuideViewExpose:(id)arg1 triggerStatus:(long long)arg2;
- (void)onPressGuideViewClick:(id)arg1;
- (void)onVoiceTransViewDisappear:(int)arg1;
- (void)onInputViewLongPressForVoiceTrans:(BOOL)arg1 touchPoint:(CGPoint)arg2 touchWidth:(double)arg3 triggerStatus:(long long)arg4;
- (void)onRecordStartSuccess:(id)arg1;
- (void)onRecordStartFail:(id)arg1 reason:(int)arg2;
- (void)onDisplayText:(id)arg1;
- (void)onStartPullLastPacket:(id)arg1;
- (void)onCancelPullLastPacket:(id)arg1 lastText:(id)arg2;
- (void)onPullLastPacketTimeout:(id)arg1 lastText:(id)arg2;
- (void)onFinishPullLastPacket:(id)arg1 lastText:(id)arg2;
- (void)onTouchEndSendText:(id)arg1;
- (void)onTouchEndEditBegin;
- (void)onTouchEndEditEnd;
- (void)onClickEmoticonButtonInEdit;
- (void)onEditText:(id)arg1;
- (unsigned int)editActionTypeInEdit;
- (void)onClickSendButtonInEdit:(id)arg1;
- (void)onClickCloseButtonInEdit:(id)arg1;
- (void)onSlideToExitInEdit:(id)arg1;
- (void)onCommandStateStart;
- (void)onUpdateCommandId:(unsigned int)arg1;
- (void)onCommandStateListening;
- (void)onCommandStateExecuting;
- (void)onCommandStateExecuteFail:(int)arg1;
- (void)onCommandStateExecuteStartFrom:(id)arg1 to:(id)arg2;
- (void)onCommandStateExecuteFinish;
- (void)onExecuteSendCommand:(id)arg1;
- (void)onEnterCommandMode;
- (void)onClickSendButtonInCommand;
- (void)onStartEditTextInCommand:(id)arg1;
- (void)onEditTextInCommand:(id)arg1;
- (void)onCommandEditEndTextChanged:(id)arg1;
- (unsigned int)editActionTypeInCommand;
- (id)commandEditTrace;
- (void)onClickCloseButtonInCommand;
- (void)onLeaveCommandMode:(int)arg1;
- (void)onSoftProtocolExpose:(int)arg1;
- (void)onHardProtocolExpose:(int)arg1;
- (void)onHardProtocolClickLink;
- (void)onHardProtocolClickAgree;
- (void)onHardProtocolClickCancel;
- (id)commonInfo;
- (id)commonInfo2;
- (id)voiceInfo:(id)arg1;
- (id)voiceInfoString;
- (id)chatName;
- (BOOL)isCommandFullScreen;
- (void)setIsCommandFullScreen:(BOOL)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)voiceTransId;
- (void)setVoiceTransId:(id)arg1;
- (unsigned int)currentCommandId;
- (void)setCurrentCommandId:(unsigned int)arg1;
- (id)commandEditStartText;
- (void)setCommandEditStartText:(id)arg1;
- (id)commandEditEndText;
- (void)setCommandEditEndText:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)stateStartTime;
- (void)setStateStartTime:(unsigned long long)arg1;
- (id)stateString;
- (void)setStateString:(id)arg1;
- (id)voiceInfoList;
- (void)setVoiceInfoList:(id)arg1;
- (id)commandInfoList;
- (void)setCommandInfoList:(id)arg1;
- (id)commandStateTrace;
- (void)setCommandStateTrace:(id)arg1;
- (BOOL)voiceTransViewReport;
- (void)setVoiceTransViewReport:(BOOL)arg1;
- (BOOL)startWithKeyboardShow;
- (void)setStartWithKeyboardShow:(BOOL)arg1;
- (unsigned long long)recordLaunchTime;
- (void)setRecordLaunchTime:(unsigned long long)arg1;
- (unsigned long long)firstResponseTime;
- (void)setFirstResponseTime:(unsigned long long)arg1;
- (unsigned long long)firstResponseWithTextTime;
- (void)setFirstResponseWithTextTime:(unsigned long long)arg1;
- (unsigned long long)startEditTime;
- (void)setStartEditTime:(unsigned long long)arg1;
- (unsigned long long)endEditTime;
- (void)setEndEditTime:(unsigned long long)arg1;
- (BOOL)didEnterEditState;
- (void)setDidEnterEditState:(BOOL)arg1;
- (BOOL)firstEditInEdit;
- (void)setFirstEditInEdit:(BOOL)arg1;
- (BOOL)editAllSpaceInEdit;
- (void)setEditAllSpaceInEdit:(BOOL)arg1;
- (BOOL)editContainChatInEdit;
- (void)setEditContainChatInEdit:(BOOL)arg1;
- (BOOL)editContainTextInEdit;
- (void)setEditContainTextInEdit:(BOOL)arg1;
- (BOOL)didEnterEditStateInCommand;
- (void)setDidEnterEditStateInCommand:(BOOL)arg1;
- (BOOL)firstEditInCommand;
- (void)setFirstEditInCommand:(BOOL)arg1;
- (BOOL)editAllSpaceInCommand;
- (void)setEditAllSpaceInCommand:(BOOL)arg1;
- (BOOL)editContainChatInCommand;
- (void)setEditContainChatInCommand:(BOOL)arg1;
- (BOOL)editContainTextInCommand;
- (void)setEditContainTextInCommand:(BOOL)arg1;
- (BOOL)softProtocolExposed;
- (void)setSoftProtocolExposed:(BOOL)arg1;
- (BOOL)hardProtocolExposed;
- (void)setHardProtocolExposed:(BOOL)arg1;
- (int)hardProtocolExposedSource;
- (void)setHardProtocolExposedSource:(int)arg1;
- (void).cxx_destruct;
@end
