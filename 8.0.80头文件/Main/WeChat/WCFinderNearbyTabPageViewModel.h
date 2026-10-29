@interface WCFinderNearbyTabPageViewModel : WCFinderLiveTabPageBaseViewModel
{
    FinderLiveLbsInfo * _nearbyVideoTabInfo; // +0x8
    id <WCFinderNearbyTabPageViewModelDelegate> _delegate; // +0x10
}
- (id)init;
- (void)requestLiveTabList:(BOOL)arg1;
- (id)queryCityTabInfoFromList;
- (void)setNearbyVideoTabInfo:(id)arg1;
- (id)nearbyVideoTabInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
