@interface VoicePrintMgr : MMObject <AudioRecorderDelegate, UploadVoicePrintMgrDelegate>
{
    unsigned int _curVoiceID; // +0x8
    SPXAudioRecorder * _recoder; // +0x10
    UploadVoicePrintMgr * _uploadMgr; // +0x18
    BOOL bIsEnviromentCheckMode; // +0x20
}
- (id)init;
- (void)dealloc;
- (unsigned int)StartMatchingWithType:(unsigned int)arg1 withScene:(unsigned int)arg2 andResID:(unsigned int)arg3;
- (BOOL)StartEnviromentCheck;
- (void)StopEnviromentCheck;
- (void)UpdateResourceID:(unsigned int)arg1;
- (unsigned int)StartVoicePrintCreate:(unsigned int)arg1 withResId:(unsigned int)arg2;
- (unsigned int)StartVoicePrintCreateByRsa:(unsigned int)arg1 withVoiceKey:(id)arg2 andTicket:(id)arg3;
- (unsigned int)StartVoicePrintVerify:(unsigned int)arg1 withResId:(unsigned int)arg2;
- (unsigned int)StartVoicePrintVerifyByRsa:(unsigned int)arg1 withResId:(unsigned int)arg2 andTicket:(id)arg3;
- (BOOL)StopRecord:(unsigned int)arg1;
- (BOOL)StopUpload:(unsigned int)arg1;
- (BOOL)StopRecordAndUpload:(unsigned int)arg1;
- (BOOL)OnRecorderPrepareSend:(id)arg1;
- (void)OnRecorderLevelMeter:(id)arg1 Peak:(float)arg2;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnRecorderPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(BOOL)arg5 Duration:(unsigned int)arg6;
- (void)OnMgrLocalFileOperationError;
- (void)OnMgrNetworkError:(int)arg1 andMessage:(id)arg2;
- (void)OnMgrGetMatchingResult:(int)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrVerifyOkWithRandomKey:(id)arg1 VoiceId:(unsigned int)arg2;
- (void)OnMgrRegOkWithBioSigKey:(id)arg1 VoiceId:(unsigned int)arg2;
- (void).cxx_destruct;
@end
