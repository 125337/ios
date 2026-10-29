@interface WCFinderSearchHotSpotViewModel : NSObject
{
    BOOL _hasClickShowMore; // +0x8
    id <WCFinderSearchHotSpotViewModelDelegate> _delegate; // +0x10
    WCFinderHotSpotHistorySectionModel * _historySectionModel; // +0x18
    WCFinderHotSpotTableViewSectionModel * _hotSpotSectionModel; // +0x20
}
- (id)init;
- (void)loadData;
- (void)reloadHistoryData;
- (unsigned long long)historySectionDataCount;
- (BOOL)hasMoreHistoryData;
- (void)clickShowMore;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)historySectionModel;
- (void)setHistorySectionModel:(id)arg1;
- (id)hotSpotSectionModel;
- (void)setHotSpotSectionModel:(id)arg1;
- (BOOL)hasClickShowMore;
- (void)setHasClickShowMore:(BOOL)arg1;
- (void).cxx_destruct;
@end
