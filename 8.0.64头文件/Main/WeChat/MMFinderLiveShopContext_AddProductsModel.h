@interface MMFinderLiveShopContext_AddProductsModel : NSObject
{
    unsigned long long _openType; // +0x8
    FinderWxAppInfo * _shopAssistApp; // +0x10
    FinderWxAppInfo * _selectionCenterHomePage; // +0x18
}
- (void)updateWithShopShelfInfo:(id)arg1;
- (unsigned long long)openType;
- (void)setOpenType:(unsigned long long)arg1;
- (id)shopAssistApp;
- (void)setShopAssistApp:(id)arg1;
- (id)selectionCenterHomePage;
- (void)setSelectionCenterHomePage:(id)arg1;
- (void).cxx_destruct;
@end
