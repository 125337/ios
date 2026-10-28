@interface WCFinderFeedFriendRecommendCommentModel : NSObject
{
    FriendRecommendCommentInfo * _commentInfo; // +0x8
    unsigned long long _finderObjectCacheTime; // +0x10
    NSMutableOrderedSet * _myRecommendCommnetIDSet; // +0x18
    NSString * _cacheDisplayDesc; // +0x20
}
- (id)initWithDataItem:(id)arg1;
- (void)updateDataItem:(id)arg1;
- (BOOL)changeRecommendWithCommentID:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (BOOL)canShowFriendRecommendComment;
- (unsigned long long)refCommentID;
- (BOOL)checkTextViewOverMaxWidth:(double)arg1 content:(id)arg2 font:(id)arg3;
- (unsigned long long)friendRecommendCount;
- (id)displayUsername;
- (id)displayDescWithWidth:(double)arg1 font:(id)arg2;
- (id)getDisplayDescWithDisplayName:(id)arg1 recommendCount:(unsigned long long)arg2;
- (id)commentInfo;
- (void)setCommentInfo:(id)arg1;
- (unsigned long long)finderObjectCacheTime;
- (void)setFinderObjectCacheTime:(unsigned long long)arg1;
- (id)myRecommendCommnetIDSet;
- (void)setMyRecommendCommnetIDSet:(id)arg1;
- (id)cacheDisplayDesc;
- (void)setCacheDisplayDesc:(id)arg1;
- (void).cxx_destruct;
@end
