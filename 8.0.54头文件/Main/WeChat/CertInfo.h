@interface CertInfo : NSObject <NSCoding>
{
    unsigned int m_uiVersion; // +0x8
    unsigned int m_uiKey; // +0xc
    unsigned int m_uiLastUpdateTime; // +0x10
    NSString * m_nsDesc; // +0x18
    UIImage * m_imgIcon; // +0x20
}
- (void)preInit;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned int)m_uiVersion;
- (void)setM_uiVersion:(unsigned int)arg1;
- (unsigned int)m_uiKey;
- (void)setM_uiKey:(unsigned int)arg1;
- (unsigned int)m_uiLastUpdateTime;
- (void)setM_uiLastUpdateTime:(unsigned int)arg1;
- (id)m_nsDesc;
- (void)setM_nsDesc:(id)arg1;
- (id)m_imgIcon;
- (void)setM_imgIcon:(id)arg1;
- (void).cxx_destruct;
@end

