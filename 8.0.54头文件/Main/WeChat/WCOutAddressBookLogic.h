@interface WCOutAddressBookLogic : MMObject
{
    CNContactStore * m_cnContactStore; // +0x8
    BOOL m_isLoadingAddressBook; // +0x10
    BOOL m_hasLoadAddressBook; // +0x11
    BOOL m_localAddressBookChanged; // +0x12
    NSArray * m_phoneContacts; // +0x18
    double m_lastUpdateAddressBookTime; // +0x20
    NSRecursiveLock * m_oLock; // +0x28
    id <WCOutAddressBookLogicDelegate> _delegate; // +0x30
}
- (void)dealloc;
- (id)init;
- (void)refetchAddressBook;
- (void)requestAccessForContactsDone:(BOOL)arg1;
- (void)loadAddressBook;
- (id)getPhoneContacts;
- (BOOL)addressBookStatusIsDenied;
- (BOOL)canSyncAddressBook;
- (void)onContactStoreDidChange:(id)arg1;
- (void)tryLoad;
- (void)loadAsyncNeedUpdate:(BOOL)arg1;
- (void)addCacheWithPhoneContacts:(id)arg1;
- (void)localAddressBookChanged;
- (unsigned int)addressAuthStatus;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)hasLoadPhoneContacts;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

