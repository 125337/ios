@interface WCFinderHistoryCollectionPageModel : WCFinderHistoryPageModel
{
    id <WCFinderHistoryCollectionPageModelDelegate> _delegate; // +0x8
    WCFinderGroupSection * _collectionItems; // +0x10
    NSMutableDictionary * _collectionMap; // +0x18
}
- (id)init;
- (BOOL)hasContent;
- (void)onClear;
- (void)onDeleteFeed:(id)arg1;
- (void)doRequestFirstPage:(id /* block */)arg1;
- (void)doRequestNextPage:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionItems;
- (void)setCollectionItems:(id)arg1;
- (id)collectionMap;
- (void)setCollectionMap:(id)arg1;
- (void).cxx_destruct;
@end
