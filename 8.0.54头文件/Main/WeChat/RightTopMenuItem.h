@interface RightTopMenuItem : MMObject <NSCoding>
{
    NSString * m_nsID; // +0x8
    BOOL m_bShowNew; // +0x10
    BOOL m_bHasShowNew; // +0x11
    unsigned int m_uiNewVersion; // +0x14
    unsigned int m_uiOrder; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)m_nsID;
- (void)setM_nsID:(id)arg1;
- (BOOL)m_bShowNew;
- (void)setM_bShowNew:(BOOL)arg1;
- (BOOL)m_bHasShowNew;
- (void)setM_bHasShowNew:(BOOL)arg1;
- (unsigned int)m_uiNewVersion;
- (void)setM_uiNewVersion:(unsigned int)arg1;
- (unsigned int)m_uiOrder;
- (void)setM_uiOrder:(unsigned int)arg1;
- (void).cxx_destruct;
@end

