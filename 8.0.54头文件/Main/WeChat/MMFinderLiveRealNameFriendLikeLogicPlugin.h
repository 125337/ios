@interface MMFinderLiveRealNameFriendLikeLogicPlugin : MMLiveTaskBaseFunctionPlugin <WCFinderLiveExt>
{
    BOOL _isLiked; // +0x8
    BOOL _hasBubbleShowed; // +0x9
    BOOL _hasDismissBubble; // +0xa
    MMFinderLiveRealNameFriendLikeBubble * _currentBubble; // +0x10
    MMFinderLiveRealNameFriendLikeMenuInfo * _currentMenuInfo; // +0x18
    MMFinderLiveRealNameFriendLikeNotificationMsg * _currentNotificationMsg; // +0x20
    FinderLiveRealnameLikeClientBubble * _clientBubble; // +0x28
    MMFinderLiveRealNameFriendLikeBubbleView * _bubbleView; // +0x30
}
- (id)initWithLiveTask:(id)arg1;
- (void)dismissBubble:(BOOL)arg1;
- (void)likeEvent:(BOOL)arg1 source:(long long)arg2;
- (void)checkPerformDismissBubble;
- (void)delayDismissBubble;
- (BOOL)checkShowGuideIfNeeded:(long long)arg1;
- (void)notifyEnterFriendLikeGuidePage:(long long)arg1 sendReason:(unsigned long long)arg2;
- (void)notifyExitFriendLikeGuidePage:(long long)arg1;
- (void)postFriendLike:(BOOL)arg1 source:(long long)arg2;
- (void)notifyLikeStatus;
- (void)setIsLiked:(BOOL)arg1;
- (void)showBubbleIfNeeded:(id)arg1;
- (void)checkShowBubbleWhenLikeAction;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 liveGameData:(id)arg14 respContext:(id)arg15;
- (void)onJoinFinderLiveError:(id)arg1 finderDataItem:(id)arg2 joinLiveContext:(id)arg3 errorPage:(id)arg4;
- (BOOL)hasNotLikedBefore;
- (BOOL)isCurrentBubbleShow;
- (id)currentBubble;
- (void)setCurrentBubble:(id)arg1;
- (id)currentMenuInfo;
- (void)setCurrentMenuInfo:(id)arg1;
- (id)currentNotificationMsg;
- (void)setCurrentNotificationMsg:(id)arg1;
- (id)clientBubble;
- (void)setClientBubble:(id)arg1;
- (BOOL)isLiked;
- (BOOL)hasBubbleShowed;
- (void)setHasBubbleShowed:(BOOL)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (BOOL)hasDismissBubble;
- (void)setHasDismissBubble:(BOOL)arg1;
- (void).cxx_destruct;
@end

