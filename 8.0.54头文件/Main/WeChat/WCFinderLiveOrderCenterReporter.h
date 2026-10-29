@interface WCFinderLiveOrderCenterReporter : NSObject <MMOrderCenterReporter>
{
    WCFinderDataItem * _finderDataItem; // +0x8
    WCFinderLiveAudienceComodityLogReporter * _reporter; // +0x10
}
- (id)initWithFinderDataItem:(id)arg1 underlyingReporter:(id)arg2;
- (id)entrySource;
- (void)reportEvent:(id)arg1 parameters:(id)arg2;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end

