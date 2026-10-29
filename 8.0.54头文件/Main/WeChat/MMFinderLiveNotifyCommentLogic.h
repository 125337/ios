@interface MMFinderLiveNotifyCommentLogic : NSObject <MMFinderLiveCommentNotifyExt, MMFinderLiveLikeNotifyCommentDelegate, MMFinderLiveFollowNotifyCommentDelegate, MMFinderLiveRealNameFriendLikeExt>
{
    BOOL _notifyCommentViewIsShown; // +0x8
    BOOL _isNotifyCommentItemArrAsyncOrderring; // +0x9
    BOOL _isDisplaying; // +0xa
    BOOL _allow30FpsAnimation; // +0xb
    id /* block */ _notifyCommentViewWillShownBlock; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMFinderLiveLikeNotifyCommentLogic * _likeNotifyCommentLogic; // +0x20
    MMFinderLiveFollowNotifyCommentLogic * _followNotifyCommentLogic; // +0x28
    UIView * _containerView; // +0x30
    UITableView * _bottomTableView; // +0x38
    NSMutableArray * _notifyCommentItemArr; // +0x40
    NSMutableArray * _pendingNotifyCommentItemArr; // +0x48
    NSMutableArray * _removedNotifyCommentItemArr; // +0x50
    NSMutableOrderedSet * _commentMsgIdSet; // +0x58
    NSMutableSet * _notifyProductIdSet; // +0x60
    MMLiveCommentDataItem * _currentDisplayCommentItem; // +0x68
    MMFinderLiveLikeNotifyDataItem * _currentPreparingLikeNotifyDataItem; // +0x70
    MMFinderLiveFollowNotifyDataItem * _currentPreparingFollowNotifyDataItem; // +0x78
    MMFinderLiveRealNameFriendLikeCommentDataItem * _currentPreparingFriendLikeNotifyDataItem; // +0x80
    PAGView * _audienceJoinPAGAnimationView; // +0x88
    PAGFile * _audienceJoinPAGFile; // +0x90
    NSString * _lastAudienceJoinRankImageName; // +0x98
}
- (id)initWithContainerView:(id)arg1 bottomTableView:(id)arg2 taskId:(id)arg3;
- (void)onEnterLive;
- (void)onExitLive;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)rejectHotSalesForCurrentPromotingProduct;
- (BOOL)startDisplayWithLast:(id)arg1;
- (void)startAudienceJoinAnimationForComment:(id)arg1;
- (void)stopAudienceJoinAnimation;
- (void)updateDisplayNextNotifyItemWithCurrentPubbleCell:(id)arg1;
- (double)displayDurationForCommentItem:(id)arg1;
- (long long)animationTypeForNextCommentItem:(id)arg1 last:(id)arg2;
- (unsigned int)getNextNotifyCommentType;
- (BOOL)appendNotifyComment:(id)arg1;
- (BOOL)checkIsShoppingHasNotify:(id)arg1;
- (void)tagHasNotifyShopping:(id)arg1;
- (void)onNewNotifyCommentUpdate:(id)arg1;
- (BOOL)innerAppendNewNotifyComments:(id)arg1;
- (void)innerAppendFilterNotifyCommentsWithSyncSort:(id)arg1;
- (void)innerAppendFilterNotifyCommentsWithAsyncSort:(id)arg1;
- (void)removeUnusedCommentItem;
- (void)removeUnusedCommentMsgId;
- (void)removeNotifyCommentItem:(id)arg1;
- (id)getFinderLiveTask;
- (id)notifyCommentItemArr;
- (id)commentMsgIdSet;
- (id)notifyProductIdSet;
- (id)removedNotifyCommentItemArr;
- (id)pendingNotifyCommentItemArr;
- (void)setCurrentDisplayCommentItem:(id)arg1;
- (id)getFilterNotifyCommentArr:(id)arg1;
- (id)getCommentArrayFilterRepeatCommit:(id)arg1;
- (id)getCommentArrayFilterType:(id)arg1 validType:(id)arg2;
- (id)getCommentArrayFilterUnNeedCommit:(id)arg1;
- (void)onPreparingDisplayLikeMsgInfoUpdate:(id)arg1;
- (void)onPreparingDisplayFollowNotifyUpdate:(id)arg1;
- (void)onFinderLiveRealNameFriendLikeNotificationShow;
- (id /* block */)notifyCommentViewWillShownBlock;
- (void)setNotifyCommentViewWillShownBlock:(id /* block */)arg1;
- (BOOL)notifyCommentViewIsShown;
- (void)setNotifyCommentViewIsShown:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)likeNotifyCommentLogic;
- (void)setLikeNotifyCommentLogic:(id)arg1;
- (id)followNotifyCommentLogic;
- (void)setFollowNotifyCommentLogic:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)bottomTableView;
- (void)setBottomTableView:(id)arg1;
- (void)setNotifyCommentItemArr:(id)arg1;
- (void)setPendingNotifyCommentItemArr:(id)arg1;
- (void)setRemovedNotifyCommentItemArr:(id)arg1;
- (void)setCommentMsgIdSet:(id)arg1;
- (void)setNotifyProductIdSet:(id)arg1;
- (BOOL)isNotifyCommentItemArrAsyncOrderring;
- (void)setIsNotifyCommentItemArrAsyncOrderring:(BOOL)arg1;
- (BOOL)isDisplaying;
- (void)setIsDisplaying:(BOOL)arg1;
- (id)currentDisplayCommentItem;
- (id)currentPreparingLikeNotifyDataItem;
- (void)setCurrentPreparingLikeNotifyDataItem:(id)arg1;
- (id)currentPreparingFollowNotifyDataItem;
- (void)setCurrentPreparingFollowNotifyDataItem:(id)arg1;
- (id)currentPreparingFriendLikeNotifyDataItem;
- (void)setCurrentPreparingFriendLikeNotifyDataItem:(id)arg1;
- (id)audienceJoinPAGAnimationView;
- (void)setAudienceJoinPAGAnimationView:(id)arg1;
- (id)audienceJoinPAGFile;
- (void)setAudienceJoinPAGFile:(id)arg1;
- (id)lastAudienceJoinRankImageName;
- (void)setLastAudienceJoinRankImageName:(id)arg1;
- (BOOL)allow30FpsAnimation;
- (void)setAllow30FpsAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end

