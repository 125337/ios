@interface WCFinderOrderCenterReporter : NSObject <MMOrderCenterReporter>
{
    WCFinderLiveAudienceComodityLogReporter * _reporter; // +0x8
}
- (id)initWithUnderlyingReporter:(id)arg1;
- (id)entrySource;
- (void)reportEvent:(id)arg1 parameters:(id)arg2;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end
