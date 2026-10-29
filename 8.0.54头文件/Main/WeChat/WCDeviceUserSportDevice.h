@interface WCDeviceUserSportDevice : MMObject
{
    BOOL m_isHealThkitOrApp; // +0x8
    unsigned int m_stepCount; // +0xc
    NSString * m_deviceId; // +0x10
    NSString * m_deviceType; // +0x18
    NSString * m_bundleId; // +0x20
    NSString * m_appName; // +0x28
    NSString * m_deviceName; // +0x30
    NSString * m_iconUrl; // +0x38
    NSString * m_connProto; // +0x40
    long long m_bleSimpleProtol; // +0x48
    long long m_DID; // +0x50
    NSString * _m_iconName; // +0x58
}
- (BOOL)isM7Device;
- (BOOL)isBLEDevice;
- (BOOL)isSimpleProfileDevcie;
- (BOOL)m_isHealThkitOrApp;
- (void)setM_isHealThkitOrApp:(BOOL)arg1;
- (id)m_deviceId;
- (void)setM_deviceId:(id)arg1;
- (id)m_deviceType;
- (void)setM_deviceType:(id)arg1;
- (id)m_bundleId;
- (void)setM_bundleId:(id)arg1;
- (id)m_appName;
- (void)setM_appName:(id)arg1;
- (id)m_deviceName;
- (void)setM_deviceName:(id)arg1;
- (id)m_iconUrl;
- (void)setM_iconUrl:(id)arg1;
- (id)m_connProto;
- (void)setM_connProto:(id)arg1;
- (long long)m_bleSimpleProtol;
- (void)setM_bleSimpleProtol:(long long)arg1;
- (long long)m_DID;
- (void)setM_DID:(long long)arg1;
- (unsigned int)m_stepCount;
- (void)setM_stepCount:(unsigned int)arg1;
- (id)m_iconName;
- (void)setM_iconName:(id)arg1;
- (void).cxx_destruct;
@end

