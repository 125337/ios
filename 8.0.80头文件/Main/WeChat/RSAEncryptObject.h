@interface RSAEncryptObject : NSObject
{
    NSString * _m_publicPemKey; // +0x8
}
- (id)initWithRSAPublicPemKey:(id)arg1;
- (id)encryptWithSourceString:(id)arg1;
- (id)m_publicPemKey;
- (void)setM_publicPemKey:(id)arg1;
- (void).cxx_destruct;
@end
