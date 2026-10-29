@interface WCDeviceTask : NSObject
{
    unsigned char m_req; // +0x8
    unsigned char m_resp; // +0x9
    unsigned short m_seq; // +0xa
    long long m_taskId; // +0x10
    long long m_deviceId; // +0x18
    AccessoryCmd * m_cmd; // +0x20
}
- (void)dealloc;
- (long long)m_taskId;
- (void)setM_taskId:(long long)arg1;
- (long long)m_deviceId;
- (void)setM_deviceId:(long long)arg1;
- (unsigned short)m_seq;
- (void)setM_seq:(unsigned short)arg1;
- (AccessoryCmd *)m_cmd;
- (void)setM_cmd:(AccessoryCmd *)arg1;
- (unsigned char)m_req;
- (void)setM_req:(unsigned char)arg1;
- (unsigned char)m_resp;
- (void)setM_resp:(unsigned char)arg1;
@end

