@interface MMFinderLiveNotifyCommentLogic : NSObject <MMFinderLiveCommentNotifyExt, MMFinderLiveLikeNotifyCommentDelegate, MMFinderLiveLikeV2NotifyCommentDelegate, MMFinderLiveFollowNotifyCommentDelegate, MMFinderLiveRealNameFriendLikeExt, MMFinderLiveInteractionNotifyCommentDelegate>
{
    BOOL _notifyCommentViewIsShown; // +0x8
    BOOL _isNotifyCommentItemArrAsyncOrderring; // +0x9
    BOOL _isDisplaying; // +0xa
    BOOL _allow30FpsAnimation; // +0xb
    id /* block */ _notifyCommentViewWillShownBlock; // +0x10
    id <MMFinderLiveNotifyCommentLogicDelegate> _delegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMFinderLiveLikeNotifyCommentLogic * _likeNotifyCommentLogic; // +0x28
    MMFinderLiveLikeV2NotifyCommentLogic * _likeV2NotifyCommentLogic; // +0x30
    MMFinderLiveFollowNotifyCommentLogic * _followNotifyCommentLogic; // +0x38
    MMFinderLiveInteractionNotifyCommentLogic * _interactionNotifyCommentLogic; // +0x40
    UIView * _containerView; // +0x48
    UITableView * _bottomTableView; // +0x50
    NSMutableArray * _notifyCommentItemArr; // +0x58
    NSMutableArray * _pendingNotifyCommentItemArr; // +0x60
    NSMutableArray * _removedNotifyCommentItemArr; // +0x68
    NSMutableOrderedSet * _commentMsgIdSet; // +0x70
    NSMutableSet * _notifyProductIdSet; // +0x78
    MMLiveCommentPubbleCell * _currentDisplayPubbleCell; // +0x80
    MMLiveCommentDataItem * _currentDisplayCommentItem; // +0x88
    MMFinderLiveLikeNotifyDataItem * _currentPreparingLikeNotifyDataItem; // +0x90
    MMFinderLiveRealNameFriendLikeCommentDataItem * _currentPreparingFriendLikeNotifyDataItem; // +0x98
    PAGView * _audienceJoinPAGAnimationView; // +0xa0
    PAGFile * _audienceJoinPAGFile; // +0xa8
    NSString * _lastAudienceJoinRankImageName; // +0xb0
    unsigned long long _forbidRecOptions; // +0xb8
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
- (void)updateDisplayNextNotifyItemWithCurrentPubbleCell:(id)arg1 duration:(double)arg2;
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
- (void)onPreparingDisplayLikeV2MsgInfoUpdate:(id)arg1;
- (void)onPreparingDisplayLikeInteraction:(id)arg1 fromContact:(id)arg2;
- (void)onPreparingDisplayFollowNotifyUpdate:(id)arg1;
- (void)onPreparingDisplayFollowInteraction:(id)arg1 fromContact:(id)arg2;
- (void)onFinderLiveRealNameFriendLikeNotificationShow;
- (void)onFinderLiveRealNameFriendLikeNotificationHalfWillShow;
- (void)onFinderLiveRealNameFriendLikeNotificationHalfClose;
- (void)cleanPendingMsg;
- (BOOL)forbidReceiveMsg;
- (void)onPreparingDisplayInteractionNotifyUpdate:(id)arg1;
- (id /* block */)notifyCommentViewWillShownBlock;
- (void)setNotifyCommentViewWillShownBlock:(id /* block */)arg1;
- (BOOL)notifyCommentViewIsShown;
- (void)setNotifyCommentViewIsShown:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)likeNotifyCommentLogic;
- (void)setLikeNotifyCommentLogic:(id)arg1;
- (id)likeV2NotifyCommentLogic;
- (void)setLikeV2NotifyCommentLogic:(id)arg1;
- (id)followNotifyCommentLogic;
- (void)setFollowNotifyCommentLogic:(id)arg1;
- (id)interactionNotifyCommentLogic;
- (void)setInteractionNotifyCommentLogic:(id)arg1;
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
- (id)currentDisplayPubbleCell;
- (void)setCurrentDisplayPubbleCell:(id)arg1;
- (id)currentDisplayCommentItem;
- (id)currentPreparingLikeNotifyDataItem;
- (void)setCurrentPreparingLikeNotifyDataItem:(id)arg1;
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
- (unsigned long long)forbidRecOptions;
- (void)setForbidRecOptions:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
