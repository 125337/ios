@interface WCFinderLiveCompleteNavigateComponent : NSObject <WCFinderWebCompleteComponent>
{
    WCFinderLiveCompleteNavigateHelper * _helper; // +0x8
    WCFinderWebCompleteViewController * _webVC; // +0x10
}
- (id)componentIdentifier;
- (BOOL)isEnterDiagnoseForNavBarHandoff;
- (void)registerHandlersToConfig:(id)arg1;
- (id)helper;
- (void)setHelper:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (void).cxx_destruct;
@end
