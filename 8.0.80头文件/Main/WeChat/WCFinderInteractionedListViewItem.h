@interface WCFinderInteractionedListViewItem : NSObject
{
    int _itemType; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    FinderCollectionInfo * _collectionInfo; // +0x18
    WCFinderContact * _contact; // +0x20
    unsigned long long _favoriteTimestamp; // +0x28
    WCFinderFavoriteCollectionFlowConfiguration * _collectionConfiguration; // +0x30
    _TtC6WeChat36FinderFavoriteLinkStyleConfiguration * _linkStyleConfiguration; // +0x38
}
+ (id)itemWithListDataItem:(id)arg1 scene:(int)arg2;
+ (id)itemWithCacheItem:(id)arg1 scene:(int)arg2;
- (id)collectionConfiguration;
- (id)linkStyleConfiguration;
- (BOOL)isEqualToItem:(id)arg1;
- (int)itemType;
- (void)setItemType:(int)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (unsigned long long)favoriteTimestamp;
- (void)setFavoriteTimestamp:(unsigned long long)arg1;
- (void)setCollectionConfiguration:(id)arg1;
- (void)setLinkStyleConfiguration:(id)arg1;
- (void).cxx_destruct;
@end
