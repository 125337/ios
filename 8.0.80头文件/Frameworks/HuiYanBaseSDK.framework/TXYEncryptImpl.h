@interface TXYEncryptImpl : NSObject
{
    NSString * _version; // +0x8
}
+ (id)sha256Encrypt:(id)arg1;
- (id)stripPublicKeyHeader:(id)arg1;
- (__SecKey *)addPublicKey:(id)arg1;
- (__SecKey *)getPublicKey:(id)arg1;
- (id)encryptAsymmetricRSAEncode:(id)arg1;
- (id)encryptSymmetricAESEncode:(id)arg1;
- (id)encryptSymmetricAESDecode:(id)arg1;
- (id)generateRandomAESKey;
- (id)version;
- (void)setVersion:(id)arg1;
- (void).cxx_destruct;
@end
