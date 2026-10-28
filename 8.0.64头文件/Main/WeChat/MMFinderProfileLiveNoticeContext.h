@interface MMFinderProfileLiveNoticeContext : NSObject
{
    BOOL _showsMoreNoticesAutomatically; // +0x8
    BOOL _profileHasTakenActions; // +0x9
    BOOL _profileHasCheckedMoreNoticesAutomatically; // +0xa
    BOOL _profileHasShowedMoreNotices; // +0xb
    double _timeoutIntervalForShowingMoreNoticesAutomatically; // +0x10
    double _profileLoadTime; // +0x18
}
- (void)recordProfileDidLoad;
- (void)recordProfileDidTakeActions;
- (void)recordProfileDidCheckMoreNoticesAutomatically;
- (void)recordProfileDidShowMoreNotices;
- (BOOL)canShowMoreNoticesAutomatically;
- (BOOL)showsMoreNoticesAutomatically;
- (void)setShowsMoreNoticesAutomatically:(BOOL)arg1;
- (double)timeoutIntervalForShowingMoreNoticesAutomatically;
- (void)setTimeoutIntervalForShowingMoreNoticesAutomatically:(double)arg1;
- (double)profileLoadTime;
- (BOOL)profileHasTakenActions;
- (BOOL)profileHasCheckedMoreNoticesAutomatically;
- (BOOL)profileHasShowedMoreNotices;
@end
