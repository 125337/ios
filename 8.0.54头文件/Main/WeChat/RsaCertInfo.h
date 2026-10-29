@interface RsaCertInfo : NSObject <NSCoding>
{
    unsigned int m_uiCertVersion; // +0x8
    NSString * m_nsCertE; // +0x10
    NSString * m_nsCertN; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)m_uiCertVersion;
- (void)setM_uiCertVersion:(unsigned int)arg1;
- (id)m_nsCertE;
- (void)setM_nsCertE:(id)arg1;
- (id)m_nsCertN;
- (void)setM_nsCertN:(id)arg1;
- (void).cxx_destruct;
@end

