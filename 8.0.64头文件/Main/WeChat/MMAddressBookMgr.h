@interface MMAddressBookMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol, IMsgExt>
{
    NSMutableArray * m_phoneContacts; // +0x8
    NSMutableDictionary * m_phoneAddressBooks; // +0x10
    NSMutableDictionary * m_emailAddressBooks; // +0x18
    AddressBookArchive * m_addressBookArchive; // +0x20
    BOOL m_isSyningAddressBook; // +0x28
    BOOL m_isFirstSync; // +0x29
    BOOL m_bLocalAddressBookChanged; // +0x2a
    NSString * m_curLang; // +0x30
    NSMutableArray * m_countryCodes; // +0x38
    BOOL m_bTempCanSyncAddressBook; // +0x40
    BOOL m_bHasLoadAddressBook; // +0x41
}
+ (id)validPhoneNumber:(id)arg1;
+ (id)validEmail:(id)arg1;
+ (void)InternalLoadMobile:(id)arg1 Email:(id)arg2 PhoneContacts:(id)arg3;
+ (void)InternalLoadMobile:(id)arg1 Email:(id)arg2 PhoneContacts:(id)arg3 AuthScene:(unsigned long long)arg4;
+ (id)getDefaultPhoneLabel;
+ (BOOL)isBindMobile;
+ (BOOL)isMobileVerifiedForStatic;
+ (id)loadCountryWrapFromStr:(id)arg1 lang:(id)arg2 locale:(id)arg3;
- (id)newContactStore;
- (BOOL)isAddressBookLoaded;
- (void)addToCacheInMainThreadWithPhone:(id)arg1 email:(id)arg2 phoneContacts:(id)arg3;
- (void)doLoadFromDBUseBlock:(BOOL)arg1;
- (void)load;
- (void)onContactStoreDidChange:(id)arg1;
- (void)tryLoad;
- (void)onServiceInit;
- (id)getAddressBookForPhone:(id)arg1;
- (BOOL)CheckPhoneInAddressBook:(id)arg1;
- (id)getNickNameForPhone:(id)arg1;
- (id)getPhoneContacts;
- (BOOL)SaveAddressBookArchive;
- (void)LoadAddressBookArchive;
- (void)updateUploadedList;
- (id)getNewPhones;
- (id)getNewMD5Emails;
- (void)uploadNewPhones:(id)arg1 withNewMD5Emails:(id)arg2;
- (void)trySyncAddressBook;
- (void)clearLocalSnapshot;
- (void)safeSyncedData:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)isMobileVerified;
- (BOOL)canSyncAddressBook;
- (BOOL)canSyncAddressBookWithShowLog:(BOOL)arg1;
- (void)setCanSyncAddressBook:(BOOL)arg1;
- (id)getAllCountryCode;
- (id)findCountryWrapFromCountryCode:(id)arg1;
- (id)findCountryWrapFromISOCountryCode:(id)arg1;
- (id)getCurCountryCode;
- (void)dealloc;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (unsigned int)getAddressBookStatus;
- (unsigned int)getAddressBookStatusForAuthScene:(unsigned long long)arg1;
- (BOOL)m_bTempCanSyncAddressBook;
- (void)setM_bTempCanSyncAddressBook:(BOOL)arg1;
- (void).cxx_destruct;
@end
