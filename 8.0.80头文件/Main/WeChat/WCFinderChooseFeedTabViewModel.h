@interface WCFinderChooseFeedTabViewModel : NSObject <WCFinderFeedPickerPreviewListViewModelProtocol>
{
    BOOL _continueFlag; // +0x8
    id <WCFinderChooseFeedTabViewModelDelegate> _delegate; // +0x10
    unsigned long long _dataFilterType; // +0x18
    WCFinderFeedPickerParams * _params; // +0x20
    unsigned long long _state; // +0x28
    NSMutableArray * _dataArray; // +0x30
    NSMutableSet * _tidContainSet; // +0x38
    NSData * _lastBuffer; // +0x40
}
+ (BOOL)canShowPublishTab;
+ (BOOL)canShowFinderPicker;
- (id)tabTitle;
- (void)loadData:(BOOL)arg1;
- (BOOL)isPublishTabModel;
- (BOOL)hasMoreData;
- (unsigned long long)dataCount;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMOfTid:(id)arg1;
- (long long)indexOfTid:(id)arg1;
- (void)loadFirstPageData;
- (void)loadNextPageData;
- (void)insertContentVM:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onServerGetDataArr:(id)arg1 continueFlag:(BOOL)arg2 hasError:(BOOL)arg3;
- (void)notifyOnDataChanged:(BOOL)arg1;
- (id)dataArray;
- (id)tidContainSet;
- (int)tabType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)dataFilterType;
- (void)setDataFilterType:(unsigned long long)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void)setDataArray:(id)arg1;
- (void)setTidContainSet:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
