@interface MMMultiPOIDataSource : NSObject
{
    BOOL _listAllLoaded; // +0x8
    BOOL _loadingList; // +0x9
    BOOL _cancelled; // +0xa
    NSString * _bizUsername; // +0x10
    id <MMMultiPOIDataSourceDelegate> _delegate; // +0x18
    NSMutableArray * _mutableItems; // +0x20
    NSMutableDictionary * _itemById; // +0x28
    NSMutableSet * _inflightDetailIds; // +0x30
    NSData * _nextOffset; // +0x38
}
- (id)initWithBizUsername:(id)arg1;
- (void)dealloc;
- (id)items;
- (void)loadAllItems;
- (void)requestDetailForItemIds:(id)arg1;
- (void)cancelAllRequests;
- (void)_fetchNextRealPage;
- (void)_handleListResponse:(optional<NSData *>)arg1;
- (void)_requestDetailSlice:(id)arg1;
- (void)_handleDetailResponse:(optional<NSData *>)arg1 itemIds:(id)arg2;
- (void)notifyDidLoadItemsIsEnd:(BOOL)arg1;
- (void)notifyLoadFailedWithError:(id)arg1;
- (void)notifyDidLoadDetailForItems:(id)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)listAllLoaded;
- (void)setListAllLoaded:(BOOL)arg1;
- (BOOL)loadingList;
- (void)setLoadingList:(BOOL)arg1;
- (id)mutableItems;
- (void)setMutableItems:(id)arg1;
- (id)itemById;
- (void)setItemById:(id)arg1;
- (id)inflightDetailIds;
- (void)setInflightDetailIds:(id)arg1;
- (id)nextOffset;
- (void)setNextOffset:(id)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
