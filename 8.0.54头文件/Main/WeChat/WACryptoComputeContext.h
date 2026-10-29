@interface WACryptoComputeContext : NSObject
{
    NSString * _keyTag; // +0x8
    NSString * _algorithm; // +0x10
    NSData * _publicKeyData; // +0x18
    NSData * _signature; // +0x20
    unsigned int _identifier; // +0x28
    NSString * _keyAlias; // +0x30
    unsigned long long _type; // +0x38
    NSMutableData * _data; // +0x40
    NSData * _cachedComputeResult; // +0x48
}
- (id)initWithId:(unsigned int)arg1 type:(id)arg2 algorithm:(id)arg3 keyAlias:(id)arg4 publicKey:(id)arg5 signature:(id)arg6 appId:(id)arg7;
- (void)updateWithData:(id)arg1;
- (id)encryptWithData:(id)arg1 error:(id *)arg2;
- (id)decryptWithData:(id)arg1 error:(id *)arg2;
- (id)signWithData:(id)arg1 error:(id *)arg2;
- (BOOL)verifyWithData:(id)arg1 error:(id *)arg2;
- (__CFString *)secKeyAlgorithmWithAlgorithmStr:(id)arg1;
- (unsigned int)identifier;
- (void)setIdentifier:(unsigned int)arg1;
- (id)keyAlias;
- (void)setKeyAlias:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)cachedComputeResult;
- (void)setCachedComputeResult:(id)arg1;
- (void).cxx_destruct;
@end

