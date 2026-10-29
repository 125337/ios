@interface TenpayHKCertUtil : NSObject
{
    int gErrorCode; // +0x8
    struct m_keyPublic; // +0xc
    struct m_keyPrivate; // +0x20e
    NSString * _deviceId; // +0x790
    NSString * _businessId; // +0x798
    NSString * _userId; // +0x7a0
}
- (id)initWithDeviceId:(id)arg1 businessId:(id)arg2 userId:(id)arg3;
- (void)dealloc;
- (int)getError;
- (id)getCsr:(long long)arg1;
- (BOOL)importCert:(id)arg1 cert:(id)arg2;
- (BOOL)hasCert:(id)arg1;
- (double)getExpireTime:(id)arg1;
- (id)certSign:(id)arg1 message:(id)arg2;
- (id)certDecrypt:(id)arg1 cipher:(id)arg2;
- (id)certDecrypt:(id)arg1 base64Message:(id)arg2;
- (id)certEncrypt:(id)arg1 base64Message:(id)arg2;
- (BOOL)clearCert:(id)arg1;
- (BOOL)clearAllCert;
- (id)getAlgoToken:(id)arg1 type:(int)arg2 uid:(int)arg3 seed:(id)arg4 seedTime:(unsigned long long)arg5 currentTime:(unsigned long long)arg6 baseStep:(unsigned int)arg7 timeStepSize:(int)arg8;
- (void)checkCertPath;
@end
