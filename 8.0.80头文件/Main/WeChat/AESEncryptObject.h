@interface AESEncryptObject : NSObject
{
    NSString * _m_aesKey; // +0x8
    NSString * _m_rsaEncryptedKey; // +0x10
}
- (id)initWithAesKey:(id)arg1 withRSAEncryptedKey:(id)arg2;
- (id)rsaEncryptedKey;
- (id)encryptWithSourceString:(id)arg1;
- (id)m_aesKey;
- (void)setM_aesKey:(id)arg1;
- (id)m_rsaEncryptedKey;
- (void)setM_rsaEncryptedKey:(id)arg1;
- (void).cxx_destruct;
@end
