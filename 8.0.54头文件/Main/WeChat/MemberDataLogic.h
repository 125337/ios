@interface MemberDataLogic : NSObject <MemberDataLogicProtocol>
{
    NSString * m_adminName; // +0x8
    NSMutableDictionary * m_dicAllContacts; // +0x10
    NSMutableArray * m_searchFilterContacts; // +0x18
    NSMutableArray * m_keyArr; // +0x20
    NSMutableArray * m_allContacts; // +0x28
    NSMutableDictionary * m_dicMatchTip; // +0x30
    NSMutableDictionary * m_dicSessionTime; // +0x38
}
- (id)initWithMemberList:(id)arg1 admin:(id)arg2;
- (unsigned long long)getTotalCount;
- (id)getAllContacts;
- (id)addSectionKey:(id)arg1;
- (void)reloadMemberList:(id)arg1;
- (void)addContact:(id)arg1;
- (BOOL)removeContact:(id)arg1;
- (void)sortKeys;
- (void)fillSessionTime;
- (id)getKeyArray;
- (id)getKeyAtSection:(unsigned long long)arg1;
- (unsigned long long)getSectionCount;
- (unsigned long long)getSectionItemCount:(unsigned long long)arg1;
- (id)getItemInSection:(unsigned long long)arg1 atRow:(unsigned long long)arg2;
- (void)doSearch:(id)arg1;
- (void)cancelSearch;
- (id)getFilteredContacts;
- (id)filtContactsByName:(id)arg1;
- (id)getMatchTipForUsername:(id)arg1;
- (void)sortContacts:(id)arg1 matchTips:(id)arg2;
- (void).cxx_destruct;
@end

