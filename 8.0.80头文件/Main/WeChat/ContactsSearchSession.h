@interface ContactsSearchSession : NSObject <ContactsSearchContactProvidingDelegate>
{
    id <ContactsSearchSessionDelegate> _delegate; // +0x8
    ContactsSearchSnapshot * _snapshot; // +0x10
    id <ContactsSearchContactProviding> _contactProvider; // +0x18
    id <ContactsSearchKeywordMatching> _keywordMatcher; // +0x20
    NSString * _currentQuery; // +0x28
}
- (id)init;
- (id)initWithContactProvider:(id)arg1 keywordMatcher:(id)arg2;
- (void)reload;
- (void)applyQuery:(id)arg1;
- (void)applyFilterState:(id)arg1;
- (id)contactsForFilterCandidates;
- (id)filterState;
- (void)contactsSearchContactProviderDidChange:(id)arg1;
- (void)rebuildSnapshot;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (id)contactProvider;
- (void)setContactProvider:(id)arg1;
- (id)keywordMatcher;
- (void)setKeywordMatcher:(id)arg1;
- (id)currentQuery;
- (void)setCurrentQuery:(id)arg1;
- (void).cxx_destruct;
@end
