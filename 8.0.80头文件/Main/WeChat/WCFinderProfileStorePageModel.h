@interface WCFinderProfileStorePageModel : WCFinderStreamProfilePageModel
{
    id <WCFinderProfileStorePageModelDelegate> _delegate; // +0x8
    WCFinderStreamLoadingState * _loadingState; // +0x10
    NSMutableArray * _productItems; // +0x18
}
+ (int)tabId;
- (BOOL)shouldDisplayTab;
- (id)viewPageClassName;
- (id)displayName;
- (id)reportParams;
- (void)prepare;
- (void)requestPageData;
- (void)requestNextPage;
- (void)_doFetchPageData;
- (void)startFetchStoreTabCGI:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingState;
- (void)setLoadingState:(id)arg1;
- (id)productItems;
- (void)setProductItems:(id)arg1;
- (void).cxx_destruct;
@end
