@interface MMFinderLiveShopShelfGroupedProductsAdapter : NSObject
{
    MMFinderLiveTaskId * _taskID; // +0x8
    id <MMFinderLiveShopShelfGroupedProductsAdapterDelegate> _delegate; // +0x10
    NSArray * _viewModels; // +0x18
    unsigned long long _fetchType; // +0x20
    FinderLiveGetPairingTabResponse * _data; // +0x28
}
- (id)init;
- (void)onNeedRefresh;
- (void)fetchWithIsRefresh:(BOOL)arg1;
- (void)onViewModelWillDisplayInIndex:(unsigned long long)arg1;
- (void)onFetchSuccess:(BOOL)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModels;
- (void)setViewModels:(id)arg1;
- (unsigned long long)fetchType;
- (void)setFetchType:(unsigned long long)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
