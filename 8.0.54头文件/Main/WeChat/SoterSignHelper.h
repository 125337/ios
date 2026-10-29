@interface SoterSignHelper : NSObject
{
    NSString * _m_publicKey; // +0x8
    NSString * _m_privateKey; // +0x10
}
- (id)init;
- (id)getPublicKey;
- (id)getPrivateKey;
- (id)rawSignWithString:(id)arg1;
- (BOOL)rawVerifyWithString:(id)arg1 WithSignatureString:(id)arg2;
- (void)genRsaKeyPair;
- (id)m_publicKey;
- (void)setM_publicKey:(id)arg1;
- (id)m_privateKey;
- (void)setM_privateKey:(id)arg1;
- (void).cxx_destruct;
@end

