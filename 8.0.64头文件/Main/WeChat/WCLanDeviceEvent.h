@interface WCLanDeviceEvent : MMObject
{
    NSString * m_deviceId; // +0x8
    JSEvent * m_event; // +0x10
    long long m_cmd; // +0x18
}
- (id)m_deviceId;
- (void)setM_deviceId:(id)arg1;
- (id)m_event;
- (void)setM_event:(id)arg1;
- (long long)m_cmd;
- (void)setM_cmd:(long long)arg1;
- (void).cxx_destruct;
@end
