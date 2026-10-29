@interface EnterpriseRoomData : MMObject <PBCoding, WCTColumnCoding>
{
    unsigned int _m_uiMaxMemberCount; // +0x8
    NSMutableArray * _m_aryMemberList; // +0x10
    NSString * _m_nsOwner; // +0x18
}
+ (void)PBArrayAdd_m_aryMemberList;
+ (void)PBArrayAdd_m_uiMaxMemberCount;
+ (void)PBArrayAdd_m_nsOwner;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)m_aryMemberList;
- (void)setM_aryMemberList:(id)arg1;
- (unsigned int)m_uiMaxMemberCount;
- (void)setM_uiMaxMemberCount:(unsigned int)arg1;
- (id)m_nsOwner;
- (void)setM_nsOwner:(id)arg1;
- (void).cxx_destruct;
@end

