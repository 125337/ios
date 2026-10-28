@interface WCTimelineFooterViewModel : NSObject
{
    WCDataItem * _dataItem; // +0x8
    WCMomentsPostReportSession * _postSession; // +0x10
    WCMomentsPageContext * _pageContext; // +0x18
    NSObject<WCTimelineFooterItemViewModel> * _displayedViewModel; // +0x20
    WCMicroMerchantMoreViewModel * _microMerchantMoreViewModel; // +0x28
    WCMomentsFinderShareViewModel * _finderShareViewModel; // +0x30
    WCMomentsPoiShareViewModel * _poiShareViewModel; // +0x38
}
- (id)initWithDataItem:(id)arg1 pageContext:(id)arg2;
- (void)setPostSession:(id)arg1;
- (void)determineDisplayedViewModel;
- (void)willDisplayFooterCell;
- (id)dataItem;
- (id)postSession;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)displayedViewModel;
- (id)microMerchantMoreViewModel;
- (id)finderShareViewModel;
- (id)poiShareViewModel;
- (void).cxx_destruct;
@end
