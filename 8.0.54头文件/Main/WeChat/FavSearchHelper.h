@interface FavSearchHelper : MMObject <IFavLocationMgrExt>
{
    unsigned int _currentEventID; // +0x8
    id <FavSearchHelperDelegate> _delegate; // +0x10
    NSMutableArray * _arrLocItem; // +0x18
}
+ (id)filterAndAggregateSearchResult:(id)arg1 withSearchText:(id)arg2 withSearchType:(long long)arg3 withTagList:(id)arg4;
+ (id)aggregatePicSearchResult:(id)arg1;
+ (id)convertFavDataToSimpleInfo:(id)arg1 inItem:(id)arg2;
- (id)init;
- (void)getAddressWithLocation:(id)arg1;
- (void)getFavItemsAddress:(id)arg1;
- (void)getAddressInQueue;
- (void)requestAddressFromLocation:(id)arg1;
- (void)onFindFavAddress:(id)arg1 eventID:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)currentEventID;
- (void)setCurrentEventID:(unsigned int)arg1;
- (id)arrLocItem;
- (void)setArrLocItem:(id)arg1;
- (void).cxx_destruct;
@end

