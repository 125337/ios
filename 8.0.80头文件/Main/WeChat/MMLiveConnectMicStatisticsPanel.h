@interface MMLiveConnectMicStatisticsPanel : MMPageSheetBaseView <MMLiveConnectMicStatisticsViewModelDelegate, MMLiveConnectMicStatisticsItemViewDelegate, MMLiveConnectMicKtvReplayListPanelDelegate, MMLiveConnectMicReplayFragmentListPanelDelegate>
{
    id <MMLiveConnectMicStatisticsPanelDelegate> _actionDelegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveConnectMicUser * _connectMicUser; // +0x18
    MMLiveConnectMicStatisticsViewModel * _viewModel; // +0x20
    WCFinderHeadImageView * _leftUserAvatarView; // +0x28
    UIView * _leftUserContainerView; // +0x30
    WCFinderHeadImageView * _rightUserAvatarView; // +0x38
    WCFinderHeadImageView * _ktvSingerUserAvatarView; // +0x40
    UILabel * _titleLabel; // +0x48
    UIView * _statisticsContainerView; // +0x50
    UILabel * _timeLabel; // +0x58
    MMLiveConnectMicStatisticsItemView * _seenItemView; // +0x60
    MMLiveConnectMicStatisticsItemView * _likesItemView; // +0x68
    MMLiveConnectMicStatisticsItemView * _heatItemView; // +0x70
    NSMutableArray * _itemViewsList; // +0x78
    UIView * _replayInfoContainerView; // +0x80
    UIView * _replayInfoTopLine; // +0x88
    UIView * _replayInfoBottomLine; // +0x90
    UILabel * _replayTitleLabel; // +0x98
    UIView * _replayStatusContainerView; // +0xa0
    UITapGestureRecognizer * _replayStatusTapGesture; // +0xa8
    UILabel * _replayStatusLabel; // +0xb0
    UIImageView * _replayArrowIconView; // +0xb8
    UIButton * _generateReplayButton; // +0xc0
    UIView * _generateReplayLoadingContainerView; // +0xc8
    MMUIActivityIndicatorView * _generateReplayLoadingView; // +0xd0
    UIView * _loadingContainerView; // +0xd8
    MMUIActivityIndicatorView * _loadingView; // +0xe0
    UILabel * _loadingTipsLabel; // +0xe8
    UILabel * _fetchDataFailedTipsLabel; // +0xf0
    UIView * _songRecordsContainerView; // +0xf8
    UIView * _songRecordsTopLine; // +0x100
    UIView * _songRecordsBottomLine; // +0x108
    UILabel * _songRecordsTitleLabel; // +0x110
    UILabel * _songRecordsCountLabel; // +0x118
    UIImageView * _songRecordsArrowIconView; // +0x120
    UITapGestureRecognizer * _songRecordsTapGesture; // +0x128
}
- (id)initWithTaskId:(id)arg1 connectMicUser:(id)arg2 frame:(CGRect)arg3;
- (id)liveTask;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configPageSheetAndDetailView;
- (void)configUI;
- (void)onClickGenerateReplayButton:(id)arg1;
- (void)handleReplayStatusTapGesture:(id)arg1;
- (void)handleSongRecordsTapGesture:(id)arg1;
- (void)pushKTVSongRecordsPageSheet;
- (double)fragmentListPageSheetDetailViewHeight;
- (void)navigateToPrimaryMicReplay;
- (void)updateViewsContentAndHidden;
- (void)updateReplayViewsContentAndHidden;
- (void)updateSongRecordsViewsContentAndHidden;
- (void)updateStatisticsItemView:(id)arg1 title:(id)arg2 value:(unsigned long long)arg3;
- (double)currentContentWidth;
- (void)layoutUI;
- (CGRect)statisticsContentFrame;
- (void)layoutStatisticsContainerView;
- (void)layoutReplayInfoContainerView;
- (void)layoutSongRecordsContainerView;
- (void)layoutReplayStatusContainerViewWithMaxWidth:(double)arg1;
- (void)layoutLoadingContainerView;
- (void)layoutFetchDataFailedTipsLabel;
- (void)reportConnectMicStatisticsActionWithType:(unsigned long long)arg1;
- (void)onMMLiveConnectMicStatisticsViewModelStatisticsUpdated;
- (void)onMMLiveConnectMicStatisticsViewModelReplayStatusUpdated;
- (void)onMMLiveConnectMicStatisticsItemViewTipsIconTapped:(id)arg1;
- (void)onLiveConnectMicKtvReplayListPanelShowReplayWithMicReplayInfo:(id)arg1;
- (void)onLiveConnectMicReplayFragmentListPanelPrimaryReplaySelected;
- (void)onLiveConnectMicReplayFragmentListPanelFragmentSelected:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)connectMicUser;
- (void)setConnectMicUser:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)leftUserAvatarView;
- (void)setLeftUserAvatarView:(id)arg1;
- (id)leftUserContainerView;
- (void)setLeftUserContainerView:(id)arg1;
- (id)rightUserAvatarView;
- (void)setRightUserAvatarView:(id)arg1;
- (id)ktvSingerUserAvatarView;
- (void)setKtvSingerUserAvatarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)statisticsContainerView;
- (void)setStatisticsContainerView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)seenItemView;
- (void)setSeenItemView:(id)arg1;
- (id)likesItemView;
- (void)setLikesItemView:(id)arg1;
- (id)heatItemView;
- (void)setHeatItemView:(id)arg1;
- (id)itemViewsList;
- (void)setItemViewsList:(id)arg1;
- (id)replayInfoContainerView;
- (void)setReplayInfoContainerView:(id)arg1;
- (id)replayInfoTopLine;
- (void)setReplayInfoTopLine:(id)arg1;
- (id)replayInfoBottomLine;
- (void)setReplayInfoBottomLine:(id)arg1;
- (id)replayTitleLabel;
- (void)setReplayTitleLabel:(id)arg1;
- (id)replayStatusContainerView;
- (void)setReplayStatusContainerView:(id)arg1;
- (id)replayStatusTapGesture;
- (void)setReplayStatusTapGesture:(id)arg1;
- (id)replayStatusLabel;
- (void)setReplayStatusLabel:(id)arg1;
- (id)replayArrowIconView;
- (void)setReplayArrowIconView:(id)arg1;
- (id)generateReplayButton;
- (void)setGenerateReplayButton:(id)arg1;
- (id)generateReplayLoadingContainerView;
- (void)setGenerateReplayLoadingContainerView:(id)arg1;
- (id)generateReplayLoadingView;
- (void)setGenerateReplayLoadingView:(id)arg1;
- (id)loadingContainerView;
- (void)setLoadingContainerView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)loadingTipsLabel;
- (void)setLoadingTipsLabel:(id)arg1;
- (id)fetchDataFailedTipsLabel;
- (void)setFetchDataFailedTipsLabel:(id)arg1;
- (id)songRecordsContainerView;
- (void)setSongRecordsContainerView:(id)arg1;
- (id)songRecordsTopLine;
- (void)setSongRecordsTopLine:(id)arg1;
- (id)songRecordsBottomLine;
- (void)setSongRecordsBottomLine:(id)arg1;
- (id)songRecordsTitleLabel;
- (void)setSongRecordsTitleLabel:(id)arg1;
- (id)songRecordsCountLabel;
- (void)setSongRecordsCountLabel:(id)arg1;
- (id)songRecordsArrowIconView;
- (void)setSongRecordsArrowIconView:(id)arg1;
- (id)songRecordsTapGesture;
- (void)setSongRecordsTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
