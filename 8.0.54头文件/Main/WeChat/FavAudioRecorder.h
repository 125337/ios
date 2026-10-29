@interface FavAudioRecorder : NSObject <WCAudioModuleDelegate>
{
    AMRAudioRecorder * m_amrRecorder; // +0x8
    SPXAudioRecorder * m_spxRecorder; // +0x10
    SilkAudioRecorder * m_silkRecorder; // +0x18
    unsigned int m_audioFormat; // +0x20
    BOOL needStopInBackground; // +0x24
    NSString * m_filePath; // +0x28
    id <FavAudioRecorderDelegate> _delegate; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)resetRecordInBackground;
- (BOOL)StopRecord;
- (void)stop;
- (unsigned int)StartRecord:(unsigned int)arg1;
- (unsigned int)startSilkRecorder;
- (unsigned int)StartAmrRecorder;
- (unsigned int)startSpxRecorder;
- (id)getTmpAudioFileName:(unsigned int)arg1;
- (void)OnRecorderLevelMeter:(id)arg1 Peak:(float)arg2;
- (void)OnRecorderBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnRecorderPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(BOOL)arg5 Duration:(unsigned int)arg6;
- (BOOL)OnRecorderPrepareSend:(id)arg1;
- (void)OnRecorderEndRecording:(id)arg1;
- (void)OnOutputPcmBuffer:(id)arg1 UserData:(id)arg2;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)handleInterruptionBy3rdApp;
- (id)m_filePath;
- (void)setM_filePath:(id)arg1;
- (BOOL)needStopInBackground;
- (void)setNeedStopInBackground:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

