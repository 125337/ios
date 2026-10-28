@interface WCFinderLongVideoListViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WCFinderLongVideoListViewModelDelegate, WCFinderEmptyTipsViewDelegate, WCFinderLongVideoSeeLaterCellDelegate, WCFinderLongVideoListCellDelegate, WCFinderStreamFooterViewActionDelegate, EGORefreshTableHeaderDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFullShareListViewControllerDelegate, WCFinderStreamHotAreaTriggerDelegate, WCFinderDataItemExt>
{
    BOOL _isFirstLoad; // +0x70
    BOOL _isViewExposing; // +0x71
    BOOL _closeDetectionValidity; // +0x72
    float _cellExposePercentage; // +0x74
    LVFeedListCostReport * _timeCostReport; // +0x78
    MegaVideoPageMonitorHelper * _pageMonitorHelper; // +0x80
    UICollectionView * _collectionView; // +0x88
    UICollectionViewDiffableDataSource * _collectionViewSource; // +0x90
    WCFinderLongVideoListViewModel * _viewModel; // +0x98
    WCFinderEmptyTipsView * _emptyTipsView; // +0xa0
    WCFinderStreamFooterView * _footerView; // +0xa8
    WCFinderPullDownRefreshHeaderView * _refreshHeaderView; // +0xb0
    double _refreshHeaderViewLastAlpha; // +0xb8
    WCFinderStreamHotAreaTrigger * _hotAreaTrigger; // +0xc0
    NSNumber * _dragStartOffset; // +0xc8
    unsigned long long _nextPageInType; // +0xd0
    NSMutableDictionary * _longVideoCellExposeDict; // +0xd8
    NSDate * _viewExposeDate; // +0xe0
    WCFinderLongVideoListCell * _playingCell; // +0xe8
    UIView * _lastExitFeedHint; // +0xf0
    MMTimer * _detectionValidityTimer; // +0xf8
    unsigned long long _lastdetectionValidityTimestamp; // +0x100
    NSData * _lastCheckBuffer; // +0x108
    unsigned long long _maxLaterLVExposeIndex; // +0x110
    unsigned long long _maxLVExposeIndex; // +0x118
    NSValue * _fixOffsetDue2Rotate; // +0x120
    CGPoint _lastExitFeedHintStartOffset; // +0x128
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupUI;
- (void)setupDataSource;
- (void)setupNotification;
- (void)removeNotification;
- (void)viewWillAppear:(BOOL)arg1;
- (void)startDetectionFeedsValidity;
- (void)stopDetectionFeedsValidity;
- (void)_addDetectionFeedsValidityTimerWithTimeInterval:(double)arg1;
- (void)detectionFeedsValidity;
- (void)deleteLVFeedWithTid:(id)arg1;
- (void)onFinderDataItemDeleteBySpamList:(id)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)reportPageInOut:(id)arg1;
- (void)reportExpose;
- (void)reportUnexpose;
- (void)reportCellExpose;
- (void)reportCellUnexpose;
- (void)getLongVideoListCGIWithTabType:(int)arg1 finderCtrlInfo:(id)arg2;
- (void)requestDataWithTabType:(int)arg1 finderCtrlInfo:(id)arg2;
- (void)goSeeLaterList;
- (void)resetHeaderView;
- (void)startLoadingHeaderView;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForegound:(id)arg1;
- (void)onShowLastExitFeedHint:(id)arg1;
- (void)hideLastExitFeedHint;
- (void)hideLastExitFeedHint:(BOOL)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)reportLongVideoSeeLaterCellExpose:(id)arg1;
- (double)cellAppearPercentage:(id)arg1;
- (BOOL)isCellAppearForPercentage:(double)arg1;
- (void)reportLongVideoListCell:(id)arg1 event:(id)arg2;
- (void)reportLongVideoListCell:(id)arg1 event:(id)arg2 cellAppearPercentage:(id)arg3;
- (void)reloadData;
- (void)fetchNextPage;
- (void)onSeeLaterCellClickDeleteWithContentVM:(id)arg1;
- (int)seeLaterCellGetCommentScene;
- (void)finderLongVideoStartLoading;
- (void)finderLongVideoLoadingSuccessful:(BOOL)arg1;
- (void)finderLongVideoLoadingFailure;
- (void)startRequestLongVideoDataWithPullType:(unsigned long long)arg1;
- (void)endRequestLongVideoDataWithPullType:(unsigned long long)arg1 isPrefetchCache:(BOOL)arg2 success:(BOOL)arg3 cgiTimeCost:(unsigned long long)arg4;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)onLongVideoListCellClickSeeLaterButtonWithContentVM:(id)arg1 currentSeeLaterState:(BOOL)arg2;
- (void)longVideoListCell:(id)arg1 longPressRecognizedWithContentVM:(id)arg2;
- (int)longVideoListCellGetCommentScene;
- (void)longVideoListCell:(id)arg1 landscapeClicked:(id)arg2;
- (void)longVideoAutoPlay:(id)arg1;
- (void)openLandscapePlayerDetailWithContentVM:(id)arg1 currentPlayTime:(double)arg2 playSessionId:(id)arg3 forceLandscape:(BOOL)arg4 fromCell:(id)arg5;
- (void)longVideoListCell:(id)arg1 contentVMUpdated:(id)arg2;
- (void)onDislikeWithContentVM:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (id)identifierForSupportFocusCell:(id)arg1 cell:(id)arg2 distance:(double *)arg3;
- (void)hotAreaCell:(id)arg1 acquireFocus:(id)arg2;
- (id /* block */)hotAreaCell:(id)arg1 releaseFocus:(id)arg2;
- (void)onFullScreenDidEndPlayContentVM:(id)arg1 finderPlayerReport:(id)arg2;
- (void)reportAdditionalPageEvent:(id)arg1;
- (id)currentFocusCell;
- (BOOL)canFocusPlay;
- (void)startPlayCell:(id)arg1;
- (void)stopCell:(id)arg1;
- (void)resumeFocusPlay;
- (void)stopCurrentMedia;
- (void)onLVMinimizeActive:(id)arg1;
- (void)onLVMinimizeDeactive:(id)arg1;
- (void)onLVMinimizePlay:(id)arg1;
- (void)onLVMinimizePaused:(id)arg1;
- (id)timeCostReport;
- (void)setTimeCostReport:(id)arg1;
- (id)pageMonitorHelper;
- (void)setPageMonitorHelper:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewSource;
- (void)setCollectionViewSource:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)emptyTipsView;
- (void)setEmptyTipsView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)refreshHeaderView;
- (void)setRefreshHeaderView:(id)arg1;
- (double)refreshHeaderViewLastAlpha;
- (void)setRefreshHeaderViewLastAlpha:(double)arg1;
- (id)hotAreaTrigger;
- (void)setHotAreaTrigger:(id)arg1;
- (id)dragStartOffset;
- (void)setDragStartOffset:(id)arg1;
- (unsigned long long)nextPageInType;
- (void)setNextPageInType:(unsigned long long)arg1;
- (id)longVideoCellExposeDict;
- (void)setLongVideoCellExposeDict:(id)arg1;
- (BOOL)isFirstLoad;
- (void)setIsFirstLoad:(BOOL)arg1;
- (BOOL)isViewExposing;
- (void)setIsViewExposing:(BOOL)arg1;
- (id)viewExposeDate;
- (void)setViewExposeDate:(id)arg1;
- (id)playingCell;
- (void)setPlayingCell:(id)arg1;
- (float)cellExposePercentage;
- (void)setCellExposePercentage:(float)arg1;
- (id)lastExitFeedHint;
- (void)setLastExitFeedHint:(id)arg1;
- (CGPoint)lastExitFeedHintStartOffset;
- (void)setLastExitFeedHintStartOffset:(CGPoint)arg1;
- (id)detectionValidityTimer;
- (void)setDetectionValidityTimer:(id)arg1;
- (unsigned long long)lastdetectionValidityTimestamp;
- (void)setLastdetectionValidityTimestamp:(unsigned long long)arg1;
- (id)lastCheckBuffer;
- (void)setLastCheckBuffer:(id)arg1;
- (unsigned long long)maxLaterLVExposeIndex;
- (void)setMaxLaterLVExposeIndex:(unsigned long long)arg1;
- (unsigned long long)maxLVExposeIndex;
- (void)setMaxLVExposeIndex:(unsigned long long)arg1;
- (BOOL)closeDetectionValidity;
- (void)setCloseDetectionValidity:(BOOL)arg1;
- (id)fixOffsetDue2Rotate;
- (void)setFixOffsetDue2Rotate:(id)arg1;
- (void).cxx_destruct;
@end
