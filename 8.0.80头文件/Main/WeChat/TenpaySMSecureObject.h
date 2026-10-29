@interface TenpaySMSecureObject : NSObject
- (id)init;
- (int)getError;
- (id)getRandomBytes:(unsigned long long)arg1;
- (id)sm2Encrypt:(id)arg1 publicKey:(id)arg2;
- (id)sm3:(id)arg1;
- (id)generateSM4Key;
- (id)sm4EncryptCBC:(id)arg1 key:(id)arg2 iv:(id)arg3 noPadding:(BOOL)arg4;
- (id)sm4DecryptCBC:(id)arg1 key:(id)arg2 iv:(id)arg3 noPadding:(BOOL)arg4;
- (id)sha256:(id)arg1;
- (id)sha1:(id)arg1;
- (id)md5:(id)arg1;
@end
