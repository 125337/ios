@interface ContactsSearchContactProvider : NSObject <ContactsDataLogicDelegate, ContactsSearchContactProviding>
{
    id <ContactsSearchContactProvidingDelegate> _delegate; // +0x8
    ContactsDataLogic * _contactsDataLogic; // +0x10
    ContactsFilterState * _filterState; // +0x18
    NSDictionary * _cachedSessionCreateTime; // +0x20
}
- (void)reload;
- (void)applyFilterState:(id)arg1;
- (BOOL)isFilterActive;
- (id)defaultSections;
- (id)filteredContactsFlat;
- (id)sanitizedContacts:(id)arg1;
- (id)openImContactsFlat;
- (id)unfilteredCandidates;
- (long long)normalCount;
- (long long)friendCountInContacts:(id)arg1;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contactsDataLogic;
- (void)setContactsDataLogic:(id)arg1;
- (id)filterState;
- (void)setFilterState:(id)arg1;
- (id)cachedSessionCreateTime;
- (void)setCachedSessionCreateTime:(id)arg1;
- (void).cxx_destruct;
@end
