@interface SimpleAudioRecorder : NSObject
{
    BOOL _forceToUseBuiltInMic; // +0x8
    double _checkMeterInterval; // +0x10
    MMTimer * _m_meterTimer; // +0x18
    SimpleRecordState * _m_bufferState; // +0x20
}
+ (void)sprintRetCode:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)onMeterChange;
- (float)getPeakPower;
- (float)getAveragePower;
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
- (void)selectBuiltInMic;
- (BOOL)forceToUseBuiltInMic;
- (void)setForceToUseBuiltInMic:(BOOL)arg1;
- (double)checkMeterInterval;
- (id)m_meterTimer;
- (void)setM_meterTimer:(id)arg1;
- (id)m_bufferState;
- (void)setM_bufferState:(id)arg1;
- (void).cxx_destruct;
@end
