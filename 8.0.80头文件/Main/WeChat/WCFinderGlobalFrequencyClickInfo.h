@interface WCFinderGlobalFrequencyClickInfo : NSObject
{
    BOOL _lastClickWithRedDot; // +0x8
    NSString * _lastClickEntryPath; // +0x10
    long long _lastTabType; // +0x18
    NSString * _lastFeedId; // +0x20
    NSString * _lastReportExtInfo; // +0x28
}
- (id)init;
- (id)lastClickEntryPath;
- (void)setLastClickEntryPath:(id)arg1;
- (BOOL)lastClickWithRedDot;
- (void)setLastClickWithRedDot:(BOOL)arg1;
- (long long)lastTabType;
- (void)setLastTabType:(long long)arg1;
- (id)lastFeedId;
- (void)setLastFeedId:(id)arg1;
- (id)lastReportExtInfo;
- (void)setLastReportExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
