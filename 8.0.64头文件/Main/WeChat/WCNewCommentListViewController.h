@interface WCNewCommentListViewController : WCCommentListViewController
{
    BOOL _shouldShowSubSectionTitle; // +0xe8
    NSMutableArray * _arrRelatedToMeCommentList; // +0xf0
    NSMutableArray * _arrMutualFriendsCommentList; // +0xf8
    NSMutableArray * _arrMoreCommentList; // +0x100
    NSMutableArray * _arrSectionTitleType; // +0x108
    NSString * _curUserName; // +0x110
}
- (id)arrRelatedToMeCommentList;
- (id)arrMutualFriendsCommentList;
- (id)arrMoreCommentList;
- (id)arrSectionTitleType;
- (id)curUserName;
- (BOOL)isMentionedMySelf:(id)arg1;
- (BOOL)isRefSelfCommentWithMsg:(id)arg1;
- (BOOL)isMessageRelatedToMe:(id)arg1;
- (id)createRelatedToMeCell:(id)arg1;
- (id)createCommonFriendsCell:(id)arg1;
- (id)createAllMessagesCell;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initTableFooterView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)commentListVCTitle;
- (id)mutualFriendCommentListVCTitle;
- (id)relatedToMeCommentListVCTitle;
- (id)rightBarButtonItem;
- (id)tableViewTailColor;
- (long long)tableViewStyle;
- (id)getWCMessagesWithDataArray:(id)arg1;
- (long long)getWCCommentListCount:(long long)arg1;
- (long long)getCommentMessageListType:(id)arg1 dataItem:(id)arg2 moreData:(BOOL)arg3;
- (void)addWCMessages:(id)arg1 forListType:(long long)arg2;
- (BOOL)removeWCMessages:(id)arg1 indexPath:(id)arg2;
- (void)updateArrSectionTitleType;
- (void)updateCommentListTitle;
- (void)clearCommentLists;
- (void)displayMoreMessages:(id)arg1;
- (void)updateMutualFriendsInteractionReminderState:(BOOL)arg1;
- (void)setArrRelatedToMeCommentList:(id)arg1;
- (void)setArrMutualFriendsCommentList:(id)arg1;
- (void)setArrMoreCommentList:(id)arg1;
- (void)setArrSectionTitleType:(id)arg1;
- (void)setCurUserName:(id)arg1;
- (BOOL)shouldShowSubSectionTitle;
- (void)setShouldShowSubSectionTitle:(BOOL)arg1;
- (void).cxx_destruct;
@end
