@interface AudioSender : MMUserService <UploadVoiceDelegate, WCAudioModuleDelegate, AudioRecorderEventExt, MMNewVoiceInputCacheLogicDelegate, AudioRecorderDelegate, MMServiceProtocol>
{
    SPXAudioRecorder * m_spxrecorder; // +0x8
    SilkAudioRecorder * m_silkRecorder; // +0x10
    BaseUploadVoiceMgr * m_upload; // +0x18
    MMNewUploadVoiceMgr * m_cgiUpload; // +0x20
    NSString * m_monoServiceId; // +0x28
    AMRAudioRecorder * m_amrrecorder; // +0x30
    MMNewVoiceInputCacheLogic * _transcacheLogic; // +0x38
}
+ (BOOL)IsVoiceUseCdnUpload;
- (void)OnPartSent:(id)arg1 ErrNo:(unsigned int)arg2;
- (void)onCdnUploadFail:(id)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)cancelUploadAudioMsg;
- (void)onGetResultText:(id)arg1 InputId:(unsigned int)arg2;
- (void)onEndVoiceTrans:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)onVoiceTransTimeout:(unsigned int)arg1;
- (void)cleanTranscacheLogic;
- (void)onRecordStartFail:(id)arg1;
- (BOOL)OnRecorderPrepareSend:(id)arg1;
- (void)OnRecorderLevelMeter:(id)arg1 Peak:(float)arg2;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnRecorderEndRecording:(id)arg1;
- (void)OnOutputPcmBuffer:(id)arg1 UserData:(id)arg2;
- (void)tryShowVoiceTransMsgWithChatName:(id)arg1;
- (void)OnRecorderPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(BOOL)arg5 Duration:(unsigned int)arg6;
- (id)getChatName:(id)arg1;
- (id)getAudioFileName:(id)arg1 LocalID:(unsigned int)arg2;
- (id)getTmpAudioFileName:(unsigned int)arg1;
- (BOOL)addMessageToDB:(id)arg1;
- (BOOL)updateMessageToDB:(id)arg1;
- (BOOL)deleteMessageFromDB:(id)arg1;
- (BOOL)prepareSend:(id)arg1;
- (void)notifyOnBeginRecording:(unsigned int)arg1 ErrNo:(int)arg2;
- (void)notifyOnEndRecording:(unsigned int)arg1;
- (void)addMonoService;
- (void)removeMonoService;
- (id)init;
- (void)initFacade:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (BOOL)isNeedSpeexAudioByUsrName:(id)arg1;
- (BOOL)isNeedRecordBySilkByUsername:(id)arg1;
- (BOOL)isNeedRecordBySilkForQQOfflineMsg;
- (BOOL)CanStartRecordFrom:(id)arg1 ToUser:(id)arg2;
- (BOOL)StartRecordFrom:(id)arg1 ToUser:(id)arg2 UserInfo:(id)arg3;
- (BOOL)syncStartUsingRecorder:(id)arg1;
- (void)asyncStartUsingRecorder:(id)arg1;
- (unsigned int)silkAudioDuration;
- (unsigned int)receivedBufferCount;
- (BOOL)canStartRecordForFormat:(unsigned int)arg1;
- (unsigned int)startRecordForFormat:(unsigned int)arg1;
- (id)GetTmpAudio:(unsigned int)arg1;
- (id)getCurrentRecorder;
- (BOOL)CancelRecord;
- (void)stop;
- (BOOL)StopRecord;
- (BOOL)StopRecordWithAudioId:(unsigned int)arg1;
- (BOOL)isRecording;
- (BOOL)IsNeedRecordPrepareStatus;
- (id)StartTranslateWithVoiceRecording:(unsigned int)arg1;
- (void)PauseVoiceTranslating;
- (void)ResumeVoiceTranslating;
- (void)StopVoiceTransWithInputId:(unsigned int)arg1;
- (id)StopRecordAndStartTransVoiceMsgWithLanguage:(unsigned int)arg1;
- (unsigned int)reTransVoiceWithLanguage:(unsigned int)arg1;
- (BOOL)SendOriVoiceMsgWithUserData:(id)arg1;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)StopRecordingInTransState:(BOOL)arg1;
- (id)transcacheLogic;
- (void)setTranscacheLogic:(id)arg1;
- (void).cxx_destruct;
@end

