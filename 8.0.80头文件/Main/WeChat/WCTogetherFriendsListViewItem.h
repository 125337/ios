@interface WCTogetherFriendsListViewItem : NSObject
{
    BOOL _showsTogetherFriends; // +0x8
    BOOL _canClickFriendsInfo; // +0x9
    id <WCTogetherFriendsListViewItemDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    NSArray * _togetherFriendsContacts; // +0x20
    NSString * _togetherFriendsNameText; // +0x28
    NSString * _togetherFriendsCountText; // +0x30
}
- (Class)cellClass;
- (id)init;
- (void)setTogetherFriendsContacts:(id)arg1;
- (void)generateTogetherFriendsTextsIfNeeded;
- (void)clearTogetherFriendsTexts;
- (void)didClickFriendsInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)showsTogetherFriends;
- (void)setShowsTogetherFriends:(BOOL)arg1;
- (id)togetherFriendsContacts;
- (id)togetherFriendsNameText;
- (id)togetherFriendsCountText;
- (BOOL)canClickFriendsInfo;
- (void).cxx_destruct;
@end
