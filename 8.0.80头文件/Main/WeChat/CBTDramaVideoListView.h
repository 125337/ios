@interface CBTDramaVideoListView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, ICBTDramaMgr, ICBTDramaItemDataControllerExt, CBTDramaVideoProgressViewDelegate, CBTDramaItemViewModelDelegate, CBTDramaShotItemCellModelDelegate, IChatBotVoIPSessionDelegate, ChatBotReCommendMsgViewDelegate>
{
    BOOL _shouldShowRecommendMsg; // +0x8
    BOOL _scrolling; // +0x9
    BOOL _isInPreviewMode; // +0xa
    BOOL _showQuestionWhenRecvData; // +0xb
    BOOL _showQuestionWhenCloseMic; // +0xc
    BOOL _hasShowedQuestions; // +0xd
    BOOL _microphoneEnabled; // +0xe
    BOOL _isAITalking; // +0xf
    CBTDramaItemDataController * _dramaItemDataController; // +0x10
    UICollectionView * _collectionView; // +0x18
    CBTDramaVideoProgressView * _progressView; // +0x20
    UITapGestureRecognizer * _edgeTapGR; // +0x28
    UICollectionViewFlowLayout * _flowLayout; // +0x30
    NSMutableArray * _dataSource; // +0x38
    id <CBTDramaVideoListViewDelegate> _delegate; // +0x40
    CBTDramaShotItemCellModel * _focusedCellModel; // +0x48
    CBTDramaItemViewModel * _currentPlayDramaItemViewModel; // +0x50
    long long _previewIndex; // +0x58
    long long _draggingFocusedIndex; // +0x60
    MMUIImageView * _previewImageView; // +0x68
    NSMutableDictionary * _previewImages; // +0x70
    MMUILabel * _previewTopicLabel; // +0x78
    NSArray * _firstTimeQuestions; // +0x80
    NSArray * _latestQuestions; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)initializeDataSource;
- (id)currentPlayDramaItem;
- (BOOL)isLatestDramaShot;
- (BOOL)isLatestDrama;
- (id)progressLongPressGR;
- (id)progressTapGR;
- (void)playOrPauseVideo:(BOOL)arg1;
- (void)onUpdateMicrophone:(BOOL)arg1;
- (void)setMute:(BOOL)arg1;
- (long long)remainShotItemCount;
- (void)goToNextShotItem;
- (void)setFocusedCellModel:(id)arg1;
- (void)setCurrentPlayDramaItemViewModel:(id)arg1;
- (void)setIsInPreviewMode:(BOOL)arg1;
- (void)goToLatestDrama;
- (void)jumpToDramaAtIndex:(long long)arg1;
- (id)currentShotItem;
- (void)layoutSubviews;
- (void)layoutCollectionView;
- (void)layoutPreviewImageView;
- (void)layoutProgressView;
- (void)layoutProgressViewWithTopMargin:(double)arg1;
- (void)resetProgress;
- (void)playIndexDidChange:(id)arg1 playIndex:(long long)arg2;
- (void)playProgressDidChange:(id)arg1 progressRatio:(double)arg2;
- (void)videoDidPlayToEndTime:(id)arg1 loopTimes:(long long)arg2;
- (BOOL)pageCanPlayVideo;
- (void)onRecvRecommendMsgInfo:(id)arg1;
- (void)onTTSBegin:(id)arg1;
- (void)onTTSEnd:(id)arg1;
- (void)onClickRecommendMsg:(id)arg1;
- (id)recommendMsgView;
- (BOOL)isShowingRecommendQuestions;
- (void)setShouldShowRecommendMsg:(BOOL)arg1;
- (void)showRecommendQuestions:(BOOL)arg1;
- (void)hideRecommendQuestions;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)onDramaItemDataDidLoadMore:(id)arg1 shouldReload:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)onDramaUpdate:(id)arg1;
- (id)edgeTapGestureHotZones;
- (id)collectionViewHotZones;
- (id)switchVideoGestureHotZones;
- (BOOL)pointInRects:(CGPoint)arg1 rects:(id)arg2;
- (BOOL)pointInEdgeTapHotZones:(CGPoint)arg1;
- (BOOL)pointInSwitchHotZones:(CGPoint)arg1;
- (BOOL)pointInProgressView:(CGPoint)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onEdgeTap:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)progressView:(id)arg1 didBeginLongPressAtSegmentIndex:(long long)arg2;
- (void)progressView:(id)arg1 didEndLongPressAtSegmentIndex:(long long)arg2;
- (void)progressView:(id)arg1 didRequestSeekToSegmentIndex:(long long)arg2;
- (void)finishScrollingAndUpdateFocus;
- (long long)currentPageIndex;
- (void)updateFocusAfterScrollStopped;
- (void)applyPlaybackState;
- (long long)commonSuffixCountByDramaIdOld:(id)arg1 new:(id)arg2;
- (void)jumpWithNoAnimationToIndex:(long long)arg1;
- (void)reloadPreviewImages;
- (void)rebuildDataSourceFromCurrentDrama;
- (void)updateCurrentPlayDramaItemViewModel:(id)arg1 scrollToLatestShot:(BOOL)arg2;
- (long long)getLocationForJumpToDrama:(id)arg1;
- (void)goToShotItemAtIndex:(long long)arg1;
- (void)jumpToDramaAtIndex:(long long)arg1 beginningIndex:(long long)arg2;
- (id)dramaItemDataController;
- (void)setDramaItemDataController:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)edgeTapGR;
- (void)setEdgeTapGR:(id)arg1;
- (BOOL)shouldShowRecommendMsg;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)focusedCellModel;
- (id)currentPlayDramaItemViewModel;
- (long long)previewIndex;
- (void)setPreviewIndex:(long long)arg1;
- (BOOL)scrolling;
- (void)setScrolling:(BOOL)arg1;
- (long long)draggingFocusedIndex;
- (void)setDraggingFocusedIndex:(long long)arg1;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg1;
- (id)previewImages;
- (void)setPreviewImages:(id)arg1;
- (id)previewTopicLabel;
- (void)setPreviewTopicLabel:(id)arg1;
- (BOOL)isInPreviewMode;
- (id)firstTimeQuestions;
- (void)setFirstTimeQuestions:(id)arg1;
- (id)latestQuestions;
- (void)setLatestQuestions:(id)arg1;
- (BOOL)showQuestionWhenRecvData;
- (void)setShowQuestionWhenRecvData:(BOOL)arg1;
- (BOOL)showQuestionWhenCloseMic;
- (void)setShowQuestionWhenCloseMic:(BOOL)arg1;
- (BOOL)hasShowedQuestions;
- (void)setHasShowedQuestions:(BOOL)arg1;
- (BOOL)microphoneEnabled;
- (void)setMicrophoneEnabled:(BOOL)arg1;
- (BOOL)isAITalking;
- (void)setIsAITalking:(BOOL)arg1;
- (void).cxx_destruct;
@end
