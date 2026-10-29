@interface MultiTalkMemberList : MMObject <PBCoding, WCTColumnCoding>
{
    NSArray * _memberList; // +0x8
}
+ (void)PBArrayAdd_memberList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)memberList;
- (void)setMemberList:(id)arg1;
- (void).cxx_destruct;
@end

