@interface __DeviceInfo : NSObject
{
    short _m_seq; // +0x8
    int _m_authState; // +0xc
    int _m_cryptMethod; // +0x10
    long long _m_did; // +0x18
    NSString * _m_deviceId; // +0x20
    NSString * _m_deviceType; // +0x28
    NSString * _m_usrname; // +0x30
    unsigned long long _m_expireTime; // +0x38
    unsigned long long _m_blockTimeout; // +0x40
    unsigned long long _m_lastAuthTime; // +0x48
    NSData * _m_sessionKey; // +0x50
    NSData * _m_AESSessionKey; // +0x58
    NSData * _m_sessionBuffer; // +0x60
}
- (long long)m_did;
- (void)setM_did:(long long)arg1;
- (id)m_deviceId;
- (void)setM_deviceId:(id)arg1;
- (id)m_deviceType;
- (void)setM_deviceType:(id)arg1;
- (id)m_usrname;
- (void)setM_usrname:(id)arg1;
- (int)m_authState;
- (void)setM_authState:(int)arg1;
- (unsigned long long)m_expireTime;
- (void)setM_expireTime:(unsigned long long)arg1;
- (unsigned long long)m_blockTimeout;
- (void)setM_blockTimeout:(unsigned long long)arg1;
- (unsigned long long)m_lastAuthTime;
- (void)setM_lastAuthTime:(unsigned long long)arg1;
- (id)m_sessionKey;
- (void)setM_sessionKey:(id)arg1;
- (id)m_AESSessionKey;
- (void)setM_AESSessionKey:(id)arg1;
- (id)m_sessionBuffer;
- (void)setM_sessionBuffer:(id)arg1;
- (short)m_seq;
- (void)setM_seq:(short)arg1;
- (int)m_cryptMethod;
- (void)setM_cryptMethod:(int)arg1;
- (void).cxx_destruct;
@end

