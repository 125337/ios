@interface VoiceTransReporter_ChatInput : NSObject
{
    BOOL _didReportFirstText; // +0x8
    unsigned long long _voiceTransRecordDuration; // +0x10
    NSString * _sessionId; // +0x18
    NSString * _chatName; // +0x20
    NSString * _voiceId; // +0x28
    unsigned long long _voiceTransViewAppearTimestamp; // +0x30
    NSString * _voiceTransResult; // +0x38
}
- (void)onToolViewLongPress:(id)arg1;
- (void)onVoiceTransLoadingViewAppear;
- (void)onVoiceTransViewAppear;
- (void)onVoiceTransViewCancel;
- (void)onVoiceTransStart:(id)arg1;
- (void)onVoiceTransGetText:(id)arg1;
- (void)onVoiceTransError:(unsigned int)arg1;
- (void)onSendVoiceTransResult:(long long)arg1;
- (unsigned long long)voiceTransRecordDuration;
- (void)setVoiceTransRecordDuration:(unsigned long long)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (unsigned long long)voiceTransViewAppearTimestamp;
- (void)setVoiceTransViewAppearTimestamp:(unsigned long long)arg1;
- (BOOL)didReportFirstText;
- (void)setDidReportFirstText:(BOOL)arg1;
- (id)voiceTransResult;
- (void)setVoiceTransResult:(id)arg1;
- (void).cxx_destruct;
@end
