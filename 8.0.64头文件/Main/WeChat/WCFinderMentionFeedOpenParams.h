@interface WCFinderMentionFeedOpenParams : NSObject
{
    BOOL _showCommentList; // +0x8
    BOOL _showFriendLike; // +0x9
    BOOL _fromFirstLike; // +0xa
    BOOL _fromThankMention; // +0xb
    int _customTLFollowEnterType; // +0xc
    WCFinderDataItem * _dataItem; // +0x10
    unsigned long long _refCommentID; // +0x18
    unsigned long long _replyCommentID; // +0x20
    NSArray * _friendUsernames; // +0x28
    NSString * _authorThankTips; // +0x30
    NSString * _thankSharingTips; // +0x38
    WCFinderJumpInfo * _enterShowJumpInfo; // +0x40
    double _enterTargetTimestamp; // +0x48
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
