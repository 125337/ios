@interface TrustedFriendsCgi : MMObject <PBMessageObserverDelegate>
{
    id <TrustedFriendsCgiDelegate> _m_delegate; // +0x8
}
- (BOOL)getTrustedFriendsList;
- (BOOL)syncFriendsToTrustedList:(id)arg1;
- (void)handleGetTrustedFriendsResp:(id)arg1;
- (void)handleSyncTrustedFriendsResp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
