@interface VoicePrintVerifyLogic : NSObject <VoicePrintVerifyViewControllerDelegate, IVoicePrintMgrExt>
{
    BOOL _loggedIn; // +0x8
    BOOL _recordingTooShort; // +0x9
    unsigned int _voiceId; // +0xc
    NSString * _loggingUsername; // +0x10
    NSString * _loggingTicket; // +0x18
    MMUIViewController * _fromViewController; // +0x20
    VoicePrintVerifyViewController * _verifyViewController; // +0x28
    id /* block */ _completion; // +0x30
    VoicePrintMgr * _voicePrintManager; // +0x38
    VoicePrintResourceItem * _resourceItem; // +0x40
    double _recordingBeginTime; // +0x48
    NSNumber * _result; // +0x50
    NSString * _randomAuthKey; // +0x58
}
- (id)init;
- (void)startLogicFromViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)presentVerifyViewController;
- (void)endVerifyWithResult:(unsigned int)arg1;
- (void)onMicrophonePermissionDenied;
- (void)onAudioNotActiveOrInterrupted;
- (void)onVerifyStarted;
- (void)onVerifyEnded;
- (void)onVerifyClose;
- (void)OnStartRecord;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnUploadError:(int)arg1 withVoiceId:(unsigned int)arg2 andMessage:(id)arg3;
- (void)OnVerifyOkWithRandomKey:(id)arg1 andVoiceId:(unsigned int)arg2;
- (void)OnLevelMeter:(unsigned int)arg1 Peak:(float)arg2;
- (BOOL)isLoggedIn;
- (void)setLoggedIn:(BOOL)arg1;
- (id)loggingUsername;
- (void)setLoggingUsername:(id)arg1;
- (id)loggingTicket;
- (void)setLoggingTicket:(id)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)verifyViewController;
- (void)setVerifyViewController:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)voicePrintManager;
- (void)setVoicePrintManager:(id)arg1;
- (id)resourceItem;
- (void)setResourceItem:(id)arg1;
- (unsigned int)voiceId;
- (void)setVoiceId:(unsigned int)arg1;
- (double)recordingBeginTime;
- (void)setRecordingBeginTime:(double)arg1;
- (BOOL)isRecordingTooShort;
- (void)setRecordingTooShort:(BOOL)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)randomAuthKey;
- (void)setRandomAuthKey:(id)arg1;
- (void).cxx_destruct;
@end
