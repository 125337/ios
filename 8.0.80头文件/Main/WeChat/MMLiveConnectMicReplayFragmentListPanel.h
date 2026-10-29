@interface MMLiveConnectMicReplayFragmentListPanel : MMPageSheetBaseView <MMLiveConnectMicReplayFragmentListViewDelegate>
{
    id <MMLiveConnectMicReplayFragmentListPanelDelegate> _delegate; // +0x8
    MMLiveConnectMicStatisticsViewModel * _viewModel; // +0x10
    MMLiveConnectMicReplayFragmentListView * _fragmentListView; // +0x18
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configPageSheetAndDetailView;
- (void)layoutReplayListView;
- (double)currentContentWidth;
- (void)onLiveConnectMicReplayFragmentListViewPrimaryReplaySelected;
- (void)onLiveConnectMicReplayFragmentListViewFragmentSelected:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)fragmentListView;
- (void)setFragmentListView:(id)arg1;
- (void).cxx_destruct;
@end
