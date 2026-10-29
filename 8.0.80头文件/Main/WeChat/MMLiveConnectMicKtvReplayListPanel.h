@interface MMLiveConnectMicKtvReplayListPanel : MMPageSheetBaseView <MMLiveConnectMicStatisticsViewModelKtvInfoDelegate, MMLiveConnectMicKtvReplayListViewDelegate>
{
    id <MMLiveConnectMicKtvReplayListPanelDelegate> _actionDelegate; // +0x8
    MMLiveConnectMicStatisticsViewModel * _viewModel; // +0x10
    MMLiveConnectMicKtvReplayListView * _replayListView; // +0x18
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configPageSheetAndDetailView;
- (void)layoutReplayListView;
- (double)currentContentWidth;
- (void)onMMLiveConnectMicStatisticsViewModelKtvInfoListUpdated;
- (void)onLiveConnectMicKtvReplayListViewShowReplayWithMicReplayInfo:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)replayListView;
- (void)setReplayListView:(id)arg1;
- (void).cxx_destruct;
@end
