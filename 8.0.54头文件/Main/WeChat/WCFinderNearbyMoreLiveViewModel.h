@interface WCFinderNearbyMoreLiveViewModel : WCFinderLiveTabPageBaseViewModel
{
    BOOL _hasRefreshLiveTabList; // +0x8
    int _fromScene; // +0xc
    id <WCFinderNearbyMoreLiveViewModelDelegate> _delegate; // +0x10
}
- (id)initWithLiveTabList:(id)arg1 fromScene:(int)arg2;
- (void)requestLiveTabList;
- (BOOL)checkNeedRefreshReddot:(unsigned long long)arg1;
- (BOOL)checkNeedRequestLocationAuth:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasRefreshLiveTabList;
- (void)setHasRefreshLiveTabList:(BOOL)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (void).cxx_destruct;
@end

