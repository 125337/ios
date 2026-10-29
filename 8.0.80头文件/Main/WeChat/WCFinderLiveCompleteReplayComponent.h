@interface WCFinderLiveCompleteReplayComponent : NSObject <WCFinderWebCompleteComponent>
{
    BOOL _autoShowChecked; // +0x8
    WCFinderLiveCompleteReplayHelper * _helper; // +0x10
    WCFinderWebCompleteViewController * _webVC; // +0x18
}
- (id)componentIdentifier;
- (void)registerHandlersToConfig:(id)arg1;
- (void)onWebVCDidAppear;
- (id)helper;
- (void)setHelper:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (BOOL)autoShowChecked;
- (void)setAutoShowChecked:(BOOL)arg1;
- (void).cxx_destruct;
@end
