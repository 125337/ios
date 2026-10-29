@interface WCFinderTingAlbumViewModel : NSObject <WCFinderMusicTopicDataProviderExt>
{
    int _innerType; // +0x8
    id <WCFinderTingAlbumViewModelDelegate> _delegate; // +0x10
    WCFinderMusicTopicDataProvider * _dataProvider; // +0x18
}
- (id)initWithDataProvider:(id)arg1 innerType:(int)arg2;
- (void)onMusicDataProviderFetchSuc:(int)arg1;
- (void)requestNextPage;
- (long long)numberOfItems;
- (id)contentVMAtItem:(long long)arg1;
- (id)loadingState;
- (id)getDetailListViewModel;
- (int)innerType;
- (void)setInnerType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (void).cxx_destruct;
@end
