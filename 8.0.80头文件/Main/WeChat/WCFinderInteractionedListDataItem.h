@interface WCFinderInteractionedListDataItem : NSObject
{
    int _itemType; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    FinderCollectionInfo * _collectionInfo; // +0x18
    WCFinderContact * _contact; // +0x20
    unsigned long long _favoriteTimestamp; // +0x28
}
+ (id)itemWithData:(id)arg1;
+ (id)itemWithCacheItem:(id)arg1;
- (int)itemType;
- (void)setItemType:(int)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)favoriteTimestamp;
- (void)setFavoriteTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
