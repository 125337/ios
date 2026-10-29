@interface WCMomentsHistoryGroupViewModel : NSObject <ContactsDataLogicDelegate>
{
    NSString * _title; // +0x8
    unsigned long long _m_commonSearchScene; // +0x10
    unsigned long long _contactDataScene; // +0x18
    ContactsDataLogic * _contactDataLogic; // +0x20
}
- (id)initWithContactDataScene:(unsigned long long)arg1;
- (unsigned long long)historyGroupCount;
- (id)historyGroupContacts;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)m_commonSearchScene;
- (void)setM_commonSearchScene:(unsigned long long)arg1;
- (unsigned long long)contactDataScene;
- (id)contactDataLogic;
- (void)setContactDataLogic:(id)arg1;
- (void).cxx_destruct;
@end

