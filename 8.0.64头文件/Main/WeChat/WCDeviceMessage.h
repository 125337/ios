@interface WCDeviceMessage : NSObject
{
    WCDevice * m_device; // +0x8
    unsigned long long m_sessionID; // +0x10
    NSData * m_data; // +0x18
    NSData * m_sessionBuffer; // +0x20
    unsigned int m_type; // +0x28
}
- (id)m_device;
- (void)setM_device:(id)arg1;
- (unsigned long long)m_sessionID;
- (void)setM_sessionID:(unsigned long long)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (id)m_sessionBuffer;
- (void)setM_sessionBuffer:(id)arg1;
- (unsigned int)m_type;
- (void)setM_type:(unsigned int)arg1;
- (void).cxx_destruct;
@end
