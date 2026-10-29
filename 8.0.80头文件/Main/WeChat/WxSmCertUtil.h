@interface WxSmCertUtil : NSObject
{
    struct baseCtx; // +0x8
    int gErrorCode; // +0x2d0
}
- (id)initWithRootPath:(id)arg1 deviceId:(id)arg2 businessId:(id)arg3 userId:(id)arg4;
- (int)getCaCertVersion;
- (BOOL)updateCaCert:(int)arg1 certs:(id)arg2;
- (id)makeCsr:(id)arg1 commonName:(id)arg2;
- (BOOL)importCert:(id)arg1 cert:(id)arg2 verify:(BOOL)arg3;
- (BOOL)hasCert:(id)arg1;
- (id)getCertValidTime:(id)arg1;
- (id)certSign:(id)arg1 message:(id)arg2 userId:(id)arg3;
- (BOOL)certVerify:(id)arg1 message:(id)arg2 userId:(id)arg3 sign:(id)arg4;
- (id)certEncrypt:(id)arg1 plain:(id)arg2;
- (id)certDecrypt:(id)arg1 cipher:(id)arg2;
- (BOOL)clearCert:(id)arg1;
- (BOOL)clearAllCert;
- (int)getError;
- (BOOL)setToken:(id)arg1 token:(id)arg2;
- (id)getToken:(id)arg1;
- (int)getTokenCount:(id)arg1;
- (BOOL)clearToken:(id)arg1;
- (BOOL)setTokenSeed:(id)arg1 seed:(id)arg2;
- (id)getTokenSeed:(id)arg1;
- (BOOL)cleanTokenSeed:(id)arg1;
@end
