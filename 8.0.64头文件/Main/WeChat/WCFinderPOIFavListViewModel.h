@interface WCFinderPOIFavListViewModel : NSObject <IFavoritesExt>
{
    id <WCFinderPOIFavListViewModelDelegate> _delegate; // +0x8
    WCFinderListLoadingStateModel * _loadingModel; // +0x10
    NSMutableArray * _poiItems; // +0x18
    NSMutableArray * _unfavPOIItems; // +0x20
    NSData * _lastBuffer; // +0x28
}
- (id)init;
- (void)fetchData;
- (BOOL)dataEmpty;
- (id)dataWithIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingModel;
- (void)setLoadingModel:(id)arg1;
- (id)poiItems;
- (void)setPoiItems:(id)arg1;
- (id)unfavPOIItems;
- (void)setUnfavPOIItems:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end
