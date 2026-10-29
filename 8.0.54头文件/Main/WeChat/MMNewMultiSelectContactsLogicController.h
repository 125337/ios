@interface MMNewMultiSelectContactsLogicController : MMObject <IFTSContactMgrExt, ContactsDataLogicDelegate>
{
    id <MMNewMultiSelectContactsLogicDelegate> _delegate; // +0x8
    NSMutableArray * _contactsKeyArray; // +0x10
    NSMutableDictionary * _contactsDict; // +0x18
    NSArray * _chatroomMemberList; // +0x20
    unsigned long long _dataMode; // +0x28
    NSMutableArray * _existContactList; // +0x30
    NSString * _taskKey; // +0x38
    CContact * _chatroomContact; // +0x40
    NSMutableArray * _searchContactList; // +0x48
    NSString * _searchKeyword; // +0x50
    NSMutableArray * _strangerContactList; // +0x58
    NSMutableArray * _selectedContacts; // +0x60
    unsigned long long _multiSelectLimitCount; // +0x68
}
- (void)dealloc;
- (id)initWithAllFriendContacts;
- (id)initWithChatRoomContact:(id)arg1;
- (void)commonInit;
- (void)initDatasWithAllFriendContacts;
- (void)initDatasWithChatRoomContact:(id)arg1;
- (void)initDatasWithAllFriendContactsAndChatroomContact;
- (void)setLimitCount:(unsigned long long)arg1;
- (void)setExistCotnactArray:(id)arg1;
- (id)getAllExistContact;
- (BOOL)isContactExist:(id)arg1;
- (BOOL)isContactSelected:(id)arg1;
- (id)getContactKeyArray;
- (id)getAllContactsWithKey:(id)arg1;
- (id)getAllChatRoomContact;
- (id)getAllSearchResult;
- (id)getContactWithIndexPath:(id)arg1 isSearching:(BOOL)arg2;
- (void)handleContactSearchDidBegin;
- (void)handleContactSearchWithKeyword:(id)arg1;
- (void)handleContactSearchDidExit;
- (void)handleContactsTableViewSelectWithIndexPath:(id)arg1 isSearching:(BOOL)arg2;
- (id)getAllSelectedContacts;
- (unsigned long long)getCurrentSelectedContactCount;
- (BOOL)hasSelectedContact;
- (void)handleUnSelectWithContact:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)removeSelectContact:(id)arg1;
- (void)addContact:(id)arg1;
- (id)addSectionKey:(id)arg1;
- (void)handleContactSearchInAllFriendsBegin;
- (void)searchContactInAllFriendsWithKeyword:(id)arg1;
- (void)handleContactSearchInAllFriendsExit;
- (void)delaySearch:(id)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)handleContactSearchInChatRoomMemberListBegin;
- (void)searchContactInChatRoomMemberListWithKeyword:(id)arg1;
- (void)handleContactSearchChatRoomMemberListExit;
- (id)doChatRoomSearch:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contactsKeyArray;
- (void)setContactsKeyArray:(id)arg1;
- (id)contactsDict;
- (void)setContactsDict:(id)arg1;
- (id)chatroomMemberList;
- (void)setChatroomMemberList:(id)arg1;
- (unsigned long long)dataMode;
- (void)setDataMode:(unsigned long long)arg1;
- (id)existContactList;
- (void)setExistContactList:(id)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)chatroomContact;
- (void)setChatroomContact:(id)arg1;
- (id)searchContactList;
- (void)setSearchContactList:(id)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (id)strangerContactList;
- (void)setStrangerContactList:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (unsigned long long)multiSelectLimitCount;
- (void)setMultiSelectLimitCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

