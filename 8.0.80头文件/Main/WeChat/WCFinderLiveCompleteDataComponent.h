@interface WCFinderLiveCompleteDataComponent : NSObject <WCFinderWebCompleteComponent>
{
    BOOL _isAudience; // +0x8
    MMFinderLiveTask * _liveTask; // +0x10
    WCFinderWebCompleteViewController * _webVC; // +0x18
}
- (id)componentIdentifier;
- (id)initialDataForWebVC;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (void).cxx_destruct;
@end
