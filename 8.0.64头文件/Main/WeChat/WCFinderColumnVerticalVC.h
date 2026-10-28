@interface WCFinderColumnVerticalVC : WCFinderFeedListViewController <WCFinderFeedListTransitionVerticalGestureBehavior>
{
    long long _enterFocusIdnex; // +0x70
}
- (void)configVerticalScrollToMinimize;
- (double)bottomOffset;
- (id)currentFocusContentVMWithIsInitiator:(BOOL)arg1;
- (long long)enterFocusIdnex;
- (void)setEnterFocusIdnex:(long long)arg1;
@end
