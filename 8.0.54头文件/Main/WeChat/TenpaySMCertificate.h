@interface TenpaySMCertificate : NSObject
{
    struct baseCtx; // +0x8
    int gErrorCode; // +0x2d0
}
- (id)initWithRootPath:(id)arg1 deviceId:(id)arg2 businessId:(id)arg3 userId:(id)arg4;
- (id)passwordEncryptWithCertPem:(id)arg1 pass:(id)arg2 salt:(id)arg3 timestamp:(unsigned long long)arg4 nonce:(id)arg5 headType:(int)arg6 verify:(BOOL)arg7;
- (id)payPasswordEncrypt:(id)arg1 salt:(id)arg2 timestamp:(unsigned long long)arg3 nonce:(id)arg4 headType:(int)arg5;
- (int)getError;
@end

