@interface WCFinderFeedArrayWatcher : NSObject
+ (id)watchSnapshot:(id /* block */)arg1;
+ (id)watchFeedArrayChange:(id)arg1 action:(SEL)arg2;
+ (id)watchBatchUpdate:(id)arg1 action:(SEL)arg2;
- (void)onFeedArraySourceDidChange:(id)arg1;
@end
