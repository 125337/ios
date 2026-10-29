@interface MMLiveConnectMicKtvReplayListViewController : MMUIViewController <MMLiveConnectMicKtvReplayListViewDelegate, MMFinderLiveKtvReplayDownloadMgrDelegate>
{
    KtvReplayInfo * _ktvReplayInfo; // +0x70
    MMLiveConnectMicKtvReplayDownloadFragmentItemsProvider * _fragmentItemsProvider; // +0x78
    MMLiveConnectMicKtvReplayListView * _replayListView; // +0x80
    MMLiveKtvReplayDownloadLoadingView * _loadingView; // +0x88
    MMLiveConnectMicStatisticsCardView * _statisticsCardView; // +0x90
    MMUILabel * _replayTitleLabel; // +0x98
    MMUILabel * _replayVideoDownloadTips; // +0xa0
    MMUIButton * _downloadAllButton; // +0xa8
}
- (id)initWithKtvReplayInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (CGRect)recommendedFrameOfReplayListView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (void)reportViewExposure;
- (void)onLiveConnectMicKtvReplayListViewShowReplayWithMicReplayInfo:(id)arg1;
- (void)onDownloadAllButtonTap;
- (void)showDownloadAgainConfirmation;
- (void)startDownload;
- (void)dealloc;
- (void)setupTipsAndDownloadButton;
- (void)layoutTipsAndDownloadButton;
- (void)setupLoadingView;
- (void)onKtvReplayDownloadProgress:(long long)arg1 total:(long long)arg2;
- (void)onKtvReplayDownloadCompleted;
- (id)ktvReplayInfo;
- (void)setKtvReplayInfo:(id)arg1;
- (id)fragmentItemsProvider;
- (void)setFragmentItemsProvider:(id)arg1;
- (id)replayListView;
- (void)setReplayListView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)statisticsCardView;
- (void)setStatisticsCardView:(id)arg1;
- (id)replayTitleLabel;
- (void)setReplayTitleLabel:(id)arg1;
- (id)replayVideoDownloadTips;
- (void)setReplayVideoDownloadTips:(id)arg1;
- (id)downloadAllButton;
- (void)setDownloadAllButton:(id)arg1;
- (void).cxx_destruct;
@end
