@interface MMFinderLiveShopShelfAutoStyleBulkBuyCellAdapter : MMFinderLiveShopShelfBulkBuyCellAdapter
{
    MMFinderLiveShopShelfAnchorBulkBuyCellAdapter * _anchorAdapter; // +0x8
    MMFinderLiveShopShelfAudienceBulkBuyCellAdapter * _audienceAdapter; // +0x10
}
+ (void)registerClassInTableView:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (BOOL)useAudienceStyle;
- (id)currentAdapter;
- (id)identifier;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)anchorAdapter;
- (void)setAnchorAdapter:(id)arg1;
- (id)audienceAdapter;
- (void)setAudienceAdapter:(id)arg1;
- (void).cxx_destruct;
@end
