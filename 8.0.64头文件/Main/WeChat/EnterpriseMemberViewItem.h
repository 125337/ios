@interface EnterpriseMemberViewItem : MMObject
{
    unsigned int m_uiViewType; // +0x8
    NSString * m_nsUsrName; // +0x10
    NSString * m_nsAddUrl; // +0x18
    NSString * m_nsBrandName; // +0x20
}
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (unsigned int)m_uiViewType;
- (void)setM_uiViewType:(unsigned int)arg1;
- (id)m_nsAddUrl;
- (void)setM_nsAddUrl:(id)arg1;
- (id)m_nsBrandName;
- (void)setM_nsBrandName:(id)arg1;
- (void).cxx_destruct;
@end
