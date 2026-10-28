@interface WCFinderFeedGroupWatcher : NSObject <WCFinderFeedArrayWatcherUpdatable>
+ (id)watchSnapshotChange:(id)arg1 action:(SEL)arg2;
+ (id)watchBatchUpdate:(id)arg1 action:(SEL)arg2;
@end
