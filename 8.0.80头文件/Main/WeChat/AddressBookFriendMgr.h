@interface AddressBookFriendMgr : MMUserService <MMServiceProtocol, IFriendListMgrExt>
{
    NSMutableDictionary * m_friends; // +0x8
}
- (void)LoadData;
- (id)getAddressBookFriends;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned int)arg2 Message:(id)arg3;
- (BOOL)trySyncAddressBookFriends;
- (id)init;
- (void).cxx_destruct;
@end
