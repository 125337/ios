@interface WCFinderHalfProfileInfoView : UIView
{
    id <WCFinderHalfProfileInfoViewDelegate> _delegate; // +0x8
    WCFinderContactPreviewData * _previewData; // +0x10
    WCTableViewManager * _tableViewManager; // +0x18
}
+ (double)finderHalfProfileInfoViewWithPreviewData:(id)arg1;
- (void)updatePreViewData:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)showFinderProfile;
- (void)addFinderEntranceCellAtSection:(id)arg1 previewData:(id)arg2;
- (id)getFinderCellViewWithPreviewData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)previewData;
- (void)setPreviewData:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (void).cxx_destruct;
@end
