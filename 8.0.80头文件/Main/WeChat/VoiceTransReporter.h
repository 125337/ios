@interface VoiceTransReporter : NSObject <MMTranscriptionReporter>
{
    BOOL _isOpeniLinkStream; // +0x8
    BOOL _didReport; // +0x9
    long long _scene; // +0x10
    NSString * _voiceId; // +0x18
    unsigned long long _userStartRecordTimestamp; // +0x20
    unsigned long long _recorderStartSuccessTimestamp; // +0x28
    unsigned long long _firstAudioDataTimestamp; // +0x30
    unsigned long long _stopRecordTimestamp; // +0x38
    unsigned long long _firstSendDataTimestamp; // +0x40
    unsigned long long _firstResponseTimestamp; // +0x48
    unsigned long long _firstTextTimestamp; // +0x50
    unsigned long long _lastSendDataTimestamp; // +0x58
    unsigned long long _finalResultTimestamp; // +0x60
    NSString * _translatedText; // +0x68
    long long _errorCode; // +0x70
}
- (id)initWithScene:(long long)arg1 voiceId:(id)arg2;
- (void)updateVoiceId:(id)arg1;
- (void)onUserStartRecordAtTimestamp:(unsigned long long)arg1;
- (void)onRecorderStartSuccessAtTimestamp:(unsigned long long)arg1;
- (void)onAudioDataGeneratedAtTimestamp:(unsigned long long)arg1;
- (void)onStopRecord;
- (void)onVoiceTransSendData;
- (void)onVoiceTransReceiveResponse;
- (void)onVoiceTransSendLastData;
- (void)onVoiceTransResultChanged:(id)arg1;
- (void)onVoiceTransEnd:(id)arg1;
- (void)onVoiceTransError:(long long)arg1;
- (void)_scheduleReport;
- (void)_doReport;
- (BOOL)isOpeniLinkStream;
- (void)setIsOpeniLinkStream:(BOOL)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)voiceId;
- (void)setVoiceId:(id)arg1;
- (unsigned long long)userStartRecordTimestamp;
- (void)setUserStartRecordTimestamp:(unsigned long long)arg1;
- (unsigned long long)recorderStartSuccessTimestamp;
- (void)setRecorderStartSuccessTimestamp:(unsigned long long)arg1;
- (unsigned long long)firstAudioDataTimestamp;
- (void)setFirstAudioDataTimestamp:(unsigned long long)arg1;
- (unsigned long long)stopRecordTimestamp;
- (void)setStopRecordTimestamp:(unsigned long long)arg1;
- (unsigned long long)firstSendDataTimestamp;
- (void)setFirstSendDataTimestamp:(unsigned long long)arg1;
- (unsigned long long)firstResponseTimestamp;
- (void)setFirstResponseTimestamp:(unsigned long long)arg1;
- (unsigned long long)firstTextTimestamp;
- (void)setFirstTextTimestamp:(unsigned long long)arg1;
- (unsigned long long)lastSendDataTimestamp;
- (void)setLastSendDataTimestamp:(unsigned long long)arg1;
- (unsigned long long)finalResultTimestamp;
- (void)setFinalResultTimestamp:(unsigned long long)arg1;
- (id)translatedText;
- (void)setTranslatedText:(id)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (BOOL)didReport;
- (void)setDidReport:(BOOL)arg1;
- (void).cxx_destruct;
@end
