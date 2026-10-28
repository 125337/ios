@interface WCDeviceSvrMsg : NSObject
{
    int m_type; // +0x8
    unsigned int m_wifiStatus; // +0xc
    NSString * m_deviceId; // +0x10
    NSString * m_deviceType; // +0x18
    long long m_sessionId; // +0x20
    NSData * m_data; // +0x28
}
- (int)m_type;
- (void)setM_type:(int)arg1;
- (id)m_deviceId;
- (void)setM_deviceId:(id)arg1;
- (id)m_deviceType;
- (void)setM_deviceType:(id)arg1;
- (long long)m_sessionId;
- (void)setM_sessionId:(long long)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (unsigned int)m_wifiStatus;
- (void)setM_wifiStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end
