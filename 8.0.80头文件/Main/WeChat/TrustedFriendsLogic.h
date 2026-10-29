@interface TrustedFriendsLogic : MMObject <MultiSelectContactsViewControllerDelegate, TrustedFriendsCgiDelegate>
{
    BOOL _m_isListHadChanged; // +0x8
    unsigned int _m_maxTrustedFriendCount; // +0xc
    id <TrustedFriendsLogicDelegate> _m_delegate; // +0x10
    TrustedFriendsCgi * _m_trustedFriendCgi; // +0x18
    NSMutableArray * _m_trustedFriendList; // +0x20
}
- (id)initWithDelegate:(id)arg1;
- (id)getTrustedFriendViewController;
- (unsigned long long)getTrustedFriendsCount;
- (unsigned long long)getMaxLimit;
- (id)getTrustedFriends;
- (BOOL)canAddFriendToTrustedFriendList;
- (BOOL)shouldNofityUserForCurrentFriendNotEnough;
- (BOOL)shouldSyncTrustedFriendList;
- (void)startChooseTrustedFriendsForAdding;
- (void)startChooseTrustedFriendsForRemoving:(id)arg1;
- (void)startGetTrustedFriends;
- (void)startSyncTrustedFriends;
- (id)getContactsFromTrustedFriendContacts:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onGetTrustedFriendsListSuccess:(id)arg1;
- (void)onSyncTrustedFriendsSuccess:(id)arg1;
- (void)onCgiFailed:(unsigned int)arg1 error:(int)arg2 msg:(id)arg3;
- (BOOL)showErrorTips:(id)arg1 forReason:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_trustedFriendCgi;
- (void)setM_trustedFriendCgi:(id)arg1;
- (id)m_trustedFriendList;
- (void)setM_trustedFriendList:(id)arg1;
- (unsigned int)m_maxTrustedFriendCount;
- (void)setM_maxTrustedFriendCount:(unsigned int)arg1;
- (BOOL)m_isListHadChanged;
- (void)setM_isListHadChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end
