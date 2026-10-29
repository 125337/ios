@interface TenpayCertificate : NSObject
{
    struct m_keyPublic; // +0x8
    struct m_keyPrivate; // +0x20a
    int _lastError; // +0x78c
    NSString * myToken; // +0x790
}
- (id)init;
- (id)stringByEscapingForURLQuery:(id)arg1;
- (id)getCSR:(id)arg1 structureName:(id)arg2 csrType:(int)arg3;
- (BOOL)importCert:(id)arg1;
- (id)certSign:(id)arg1 message:(id)arg2;
- (id)certDecrypt:(id)arg1 message:(id)arg2;
- (BOOL)delCert:(id)arg1;
- (BOOL)isCertExist:(id)arg1;
- (id)privateDecrypt:(id)arg1 message:(id)arg2;
- (BOOL)setToken:(id)arg1 certId:(id)arg2 useSM4:(BOOL)arg3 sm4Key:(id)arg4;
- (long long)getRemainTokenNum:(id)arg1;
- (void)cleanToken:(id)arg1;
- (id)getToken:(id)arg1;
- (double)getExpireTime:(id)arg1;
- (id)tokenEncode:(id)arg1 message:(id)arg2;
- (void)checkCertPath;
- (id)myToken;
- (void)setMyToken:(id)arg1;
- (int)lastError;
- (void)setLastError:(int)arg1;
@end

