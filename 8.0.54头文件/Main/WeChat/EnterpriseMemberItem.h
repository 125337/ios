@interface EnterpriseMemberItem : MMObject <PBCoding>
{
    NSString * _m_nsUsrName; // +0x8
    NSString * _m_nsContactDisplayName; // +0x10
    unsigned long long _m_uiContactVer; // +0x18
}
+ (void)PBArrayAdd_m_nsUsrName;
+ (void)PBArrayAdd_m_nsContactDisplayName;
+ (void)PBArrayAdd_m_uiContactVer;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (id)m_nsContactDisplayName;
- (void)setM_nsContactDisplayName:(id)arg1;
- (unsigned long long)m_uiContactVer;
- (void)setM_uiContactVer:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

