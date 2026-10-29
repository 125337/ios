@interface AudioSender : MMUserService <UploadVoiceDelegate, WCAudioModuleDelegate, AudioRecorderEventExt, MMNewVoiceInputCacheLogicDelegate, MMTranscriptionCoreDelegate, AudioRecorderDelegate, MMServiceProtocol>
{
    BaseUploadVoiceMgr * m_upload; // +0x8
    MMNewUploadVoiceMgr * m_cgiUpload; // +0x10
    NSString * m_monoServiceId; // +0x18
    BaseAudioRecorder * m_currentRecorder; // +0x20
    NSHashTable * m_interruptionDelegates; // +0x28
    BOOL useNewInterruptBehaviour; // +0x30
    BOOL _useTranscriptionCore; // +0x31
    BOOL _transcriptionAudioEnded; // +0x32
    unsigned int _transcriptionAudioId; // +0x34
    unsigned int _transcriptionInputId; // +0x38
    MMNewVoiceInputCacheLogic * _transcacheLogic; // +0x40
    UploadVoiceCDNMgr * _bypUploader; // +0x48
    MMTranscriptionCore * _transcriptionCore; // +0x50
    NSMutableData * _pendingTranscriptionPCMData; // +0x58
    NSData * _transcriptionExtraData; // +0x60
    NSString * _transcriptionChatName; // +0x68
    NSString * _transcriptionResultText; // +0x70
    id <MMTranscriptionReporter> _transcriptionReporter; // +0x78
}
+ (BOOL)IsVoiceUseCdnUpload;
+ (BOOL)supportOpusAudioPlayer;
- (void)OnPartSent:(id)arg1 ErrNo:(unsigned int)arg2;
- (void)onCdnUploadFail:(id)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)cancelUploadAudioMsg;
- (void)onGetResultText:(id)arg1 InputId:(unsigned int)arg2;
- (void)onEndVoiceTrans:(unsigned int)arg1 VoiceIds:(id)arg2;
- (void)onVoiceTransError:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)transcriptionCore:(id)arg1 didUpdateResult:(id)arg2;
- (void)transcriptionCore:(id)arg1 didFinishResult:(id)arg2 endFlag:(unsigned int)arg3;
- (void)transcriptionCore:(id)arg1 didFailWithError:(long long)arg2;
- (void)cleanVoiceTranscription;
- (void)onRecordStartFail:(id)arg1;
- (BOOL)OnRecorderPrepareSend:(id)arg1;
- (void)OnRecorderLevelMeter:(id)arg1 Peak:(float)arg2;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnRecorderEndRecording:(id)arg1;
- (void)OnOutputPcmBuffer:(id)arg1 UserData:(id)arg2;
- (void)tryShowVoiceTransMsgWithChatName:(id)arg1;
- (void)OnRecorderPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(BOOL)arg5 Duration:(unsigned int)arg6;
- (void)onAudioRecordStart;
- (void)onAudioRecordHandleBuffer;
- (id)getChatName:(id)arg1;
- (id)getAudioFileName:(id)arg1 LocalID:(unsigned int)arg2;
- (id)getTmpAudioFileName:(unsigned int)arg1;
- (void)resetVoiceTranscription;
- (BOOL)isVoiceTranscriptionMatchedWithChatName:(id)arg1 audioId:(unsigned int)arg2;
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
- (id)uploaderForMsgWrap:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (BOOL)isNeedSpeexAudioByUsrName:(id)arg1;
- (BOOL)isNeedRecordBySilkByUsername:(id)arg1;
- (BOOL)opusVoiceMessageOpen;
- (BOOL)isNeedRecordByOpusByUsername:(id)arg1;
- (BOOL)isSupportVoiceTranslate:(id)arg1;
- (BOOL)isTranslatableRecorder:(id)arg1;
- (id)createRecorderForToUser:(id)arg1;
- (id)createRecorderForFormat:(unsigned int)arg1;
- (BOOL)CanStartRecordFrom:(id)arg1 ToUser:(id)arg2;
- (BOOL)StartRecordFrom:(id)arg1 ToUser:(id)arg2 UserInfo:(id)arg3;
- (BOOL)syncStartUsingRecorder:(id)arg1;
- (void)asyncStartUsingRecorder:(id)arg1;
- (unsigned int)currentAudioDuration;
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
- (id)StartTranslateWithVoiceRecording:(unsigned int)arg1;
- (void)PauseVoiceTranslating;
- (void)ResumeVoiceTranslating;
- (void)StopVoiceTransWithInputId:(unsigned int)arg1;
- (BOOL)SendOriVoiceMsgWithUserData:(id)arg1;
- (void)setForInterrupt;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)StopRecordingInTransState:(BOOL)arg1;
- (void)addInterruptionDelegate:(id)arg1;
- (void)removeInterruptionDelegate:(id)arg1;
- (void)notifyInterruptionDelegates:(id)arg1 param:(id)arg2;
- (BOOL)newBehaviourForCallInterrupt;
- (id)transcacheLogic;
- (void)setTranscacheLogic:(id)arg1;
- (id)bypUploader;
- (void)setBypUploader:(id)arg1;
- (BOOL)useTranscriptionCore;
- (void)setUseTranscriptionCore:(BOOL)arg1;
- (id)transcriptionCore;
- (void)setTranscriptionCore:(id)arg1;
- (id)pendingTranscriptionPCMData;
- (void)setPendingTranscriptionPCMData:(id)arg1;
- (BOOL)transcriptionAudioEnded;
- (void)setTranscriptionAudioEnded:(BOOL)arg1;
- (id)transcriptionExtraData;
- (void)setTranscriptionExtraData:(id)arg1;
- (id)transcriptionChatName;
- (void)setTranscriptionChatName:(id)arg1;
- (unsigned int)transcriptionAudioId;
- (void)setTranscriptionAudioId:(unsigned int)arg1;
- (unsigned int)transcriptionInputId;
- (void)setTranscriptionInputId:(unsigned int)arg1;
- (id)transcriptionResultText;
- (void)setTranscriptionResultText:(id)arg1;
- (id)transcriptionReporter;
- (void)setTranscriptionReporter:(id)arg1;
- (void).cxx_destruct;
@end
