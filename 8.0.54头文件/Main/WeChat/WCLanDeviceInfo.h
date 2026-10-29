@interface WCLanDeviceInfo : NSObject
{
    NSString * m_deviceType; // +0x8
    NSString * m_deviceId; // +0x10
    NSString * m_manufacturerData; // +0x18
}
- (id)m_deviceType;
- (void)setM_deviceType:(id)arg1;
- (id)m_deviceId;
- (void)setM_deviceId:(id)arg1;
- (id)m_manufacturerData;
- (void)setM_manufacturerData:(id)arg1;
- (void).cxx_destruct;
@end

