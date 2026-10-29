@interface CBTCoopV3TimelineService : NSObject <CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
    WCTimelineBatchGetFeedsCGI * _batchGetFeedsCGI; // +0x10
    NSString * _openingFeedId; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)handleOpenDetail:(id)arg1;
- (void)handleProfileShow:(id)arg1;
- (void)navigateToDetailWithDataItem:(id)arg1;
- (id)currentVisibleViewController;
- (id)topViewControllerFromViewController:(id)arg1;
- (id)detailHostViewControllerFromViewController:(id)arg1;
- (id)detailHostViewControllerFromNavigationController:(id)arg1;
- (id)batchGetFeedsCGI;
- (void)setBatchGetFeedsCGI:(id)arg1;
- (id)openingFeedId;
- (void)setOpeningFeedId:(id)arg1;
- (void).cxx_destruct;
@end
