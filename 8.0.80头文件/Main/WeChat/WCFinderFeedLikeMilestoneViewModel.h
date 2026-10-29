@interface WCFinderFeedLikeMilestoneViewModel : NSObject
{
    WCFinderFeedLikeMilestoneInfo * _inProgressMilestone; // +0x8
}
+ (unsigned long long)_hasGetToBreakPoints:(id)arg1 likeType:(unsigned long long)arg2 forFeed:(id)arg3 usingInfoPtr:(id *)arg4 tag:(id)arg5;
+ (id)_likeTipsForBreakPoint:(unsigned long long)arg1 feed:(id)arg2 likeType:(unsigned long long)arg3;
+ (id)shouldShowReachBreakPointToast:(unsigned long long)arg1 forFeed:(id)arg2 reportExpt:(BOOL)arg3 callbackReachCount:(unsigned long long *)arg4;
+ (id)shouldShowMilestone:(unsigned long long)arg1 forFeed:(id)arg2 inProgressMilestone:(id)arg3 triggerType:(unsigned long long)arg4;
- (void)onMilestoneWillShow:(id)arg1;
- (void)onMilestoneDidShow:(id)arg1;
- (void)resetInProgressMilestone;
- (id)inProgressMilestone;
- (void)setInProgressMilestone:(id)arg1;
- (void).cxx_destruct;
@end
