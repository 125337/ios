@interface __WCDeviceSendDataTask : WCDeviceTask
{
    int _m_sendState; // +0x8
    long long _m_sessionId; // +0x10
    unsigned long long _m_sendCGIFinishTime; // +0x18
}
- (id)init;
- (long long)m_sessionId;
- (void)setM_sessionId:(long long)arg1;
- (int)m_sendState;
- (void)setM_sendState:(int)arg1;
- (unsigned long long)m_sendCGIFinishTime;
- (void)setM_sendCGIFinishTime:(unsigned long long)arg1;
@end
