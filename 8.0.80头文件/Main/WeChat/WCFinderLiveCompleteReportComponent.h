@interface WCFinderLiveCompleteReportComponent : NSObject <WCFinderWebCompleteComponent>
{
    WCFinderLiveNexusReporter * _nexusReporter; // +0x8
    WCFinderLiveCompletePageReporter * _reporter; // +0x10
    WCFinderWebCompleteViewController * _webVC; // +0x18
}
- (id)componentIdentifier;
- (void)registerHandlersToConfig:(id)arg1;
- (void)onWebVCDidAppear;
- (void)onWebVCDidDisappear;
- (id)nexusReporter;
- (void)setNexusReporter:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (void).cxx_destruct;
@end
