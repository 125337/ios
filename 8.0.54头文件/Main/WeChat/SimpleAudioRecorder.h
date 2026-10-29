@interface SimpleAudioRecorder : NSObject
{
    MMTimer * _m_meterTimer; // +0x8
    SimpleRecordState * _m_bufferState; // +0x10
}
+ (void)sprintRetCode:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)onMeterChange;
- (void)setCheckMeterInterval:(double)arg1;
- (id)getState;
- (long long)RecordingTime;
- (BOOL)updateDataFormat;
- (void)clearQueue;
- (BOOL)updateQueue;
- (void)clearBuffer;
- (BOOL)updateBuffer;
- (BOOL)prepareRecord;
- (BOOL)audioQueueStart;
- (BOOL)audioQueueStop;
- (BOOL)record;
- (void)stop;
- (void)printRetCode:(int)arg1;
- (id)m_meterTimer;
- (void)setM_meterTimer:(id)arg1;
- (id)m_bufferState;
- (void)setM_bufferState:(id)arg1;
- (void).cxx_destruct;
@end

