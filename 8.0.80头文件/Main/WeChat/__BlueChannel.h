@interface __BlueChannel : NSObject
{
    int _m_state; // +0x8
    long long _m_deviceId; // +0x10
    long long _m_channelId; // +0x18
    long long _m_sessionId; // +0x20
}
- (long long)m_deviceId;
- (void)setM_deviceId:(long long)arg1;
- (long long)m_channelId;
- (void)setM_channelId:(long long)arg1;
- (long long)m_sessionId;
- (void)setM_sessionId:(long long)arg1;
- (int)m_state;
- (void)setM_state:(int)arg1;
@end
