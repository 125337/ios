@interface WCTimelineFooterViewModel : NSObject
{
    WCDataItem * _dataItem; // +0x8
    WCMomentsPostReportSession * _postSession; // +0x10
    WCMomentsPostShareBaseViewModel * _displayedViewModel; // +0x18
    WCMomentsFinderShareViewModel * _finderShareViewModel; // +0x20
    WCMomentsNewLifeShareViewModel * _newlifeShareViewModel; // +0x28
}
- (id)initWithDataItem:(id)arg1;
- (void)setPostSession:(id)arg1;
- (void)determineDisplayedViewModel;
- (void)willDisplayFooterCell;
- (id)dataItem;
- (id)postSession;
- (id)displayedViewModel;
- (id)finderShareViewModel;
- (id)newlifeShareViewModel;
- (void).cxx_destruct;
@end

