@interface WCFinderMentionFeedOpenParams : NSObject
{
    BOOL _showCommentList; // +0x8
    BOOL _fromCommentTab; // +0x9
    BOOL _showFriendLike; // +0xa
    BOOL _fromFirstLike; // +0xb
    BOOL _fromThankMention; // +0xc
    int _customTLFollowEnterType; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    unsigned long long _refCommentID; // +0x20
    unsigned long long _replyCommentID; // +0x28
    NSArray * _friendUsernames; // +0x30
    NSString * _authorThankTips; // +0x38
    NSString * _thankSharingTips; // +0x40
    WCFinderJumpInfo * _enterShowJumpInfo; // +0x48
    double _enterTargetTimestamp; // +0x50
}
- (id)initWithDataItem:(id)arg1;
- (void)setCommentListShowWithRefCommentID:(unsigned long long)arg1;
- (void)setFriendLikeShowWithFriendUsernames:(id)arg1;
- (id)convertToMentionDetailVCPatamsWithScene:(int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)showCommentList;
- (void)setShowCommentList:(BOOL)arg1;
- (unsigned long long)refCommentID;
- (void)setRefCommentID:(unsigned long long)arg1;
- (BOOL)fromCommentTab;
- (void)setFromCommentTab:(BOOL)arg1;
- (unsigned long long)replyCommentID;
- (void)setReplyCommentID:(unsigned long long)arg1;
- (BOOL)showFriendLike;
- (void)setShowFriendLike:(BOOL)arg1;
- (id)friendUsernames;
- (void)setFriendUsernames:(id)arg1;
- (BOOL)fromFirstLike;
- (void)setFromFirstLike:(BOOL)arg1;
- (BOOL)fromThankMention;
- (void)setFromThankMention:(BOOL)arg1;
- (id)authorThankTips;
- (void)setAuthorThankTips:(id)arg1;
- (id)thankSharingTips;
- (void)setThankSharingTips:(id)arg1;
- (id)enterShowJumpInfo;
- (void)setEnterShowJumpInfo:(id)arg1;
- (int)customTLFollowEnterType;
- (void)setCustomTLFollowEnterType:(int)arg1;
- (double)enterTargetTimestamp;
- (void)setEnterTargetTimestamp:(double)arg1;
- (void).cxx_destruct;
@end
