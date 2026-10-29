@interface WCFinderInteractionedListCacheItem : NSObject <PBCoding>
{
    int _itemType; // +0x8
    NSString * _feedTid; // +0x10
    WCFinderInteractionedBriefCollectionInfo * _briefCollectionInfo; // +0x18
    NSString * _authorUsername; // +0x20
    unsigned long long _favoriteTimestamp; // +0x28
}
+ (void)PBArrayAdd_itemType;
+ (void)PBArrayAdd_feedTid;
+ (void)PBArrayAdd_briefCollectionInfo;
+ (void)PBArrayAdd_authorUsername;
+ (void)PBArrayAdd_favoriteTimestamp;
+ (void)initialize;
+ (id)itemWithListDataItem:(id)arg1;
- (id)getPBPropertyTable;
- (BOOL)isEqualToItem:(id)arg1;
- (int)itemType;
- (void)setItemType:(int)arg1;
- (id)feedTid;
- (void)setFeedTid:(id)arg1;
- (id)briefCollectionInfo;
- (void)setBriefCollectionInfo:(id)arg1;
- (id)authorUsername;
- (void)setAuthorUsername:(id)arg1;
- (unsigned long long)favoriteTimestamp;
- (void)setFavoriteTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
