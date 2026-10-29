@interface MJTimelineContentRangeEditView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, MJSegmentReusableViewDelegate>
{
    MJTimelineViewModel * _timelineVM; // +0x8
    MJPlaybackViewModel * _playbackVM; // +0x10
    id <MJTimelineContentRangeEditViewDelegate> _delegate; // +0x18
    MJSegmentCellBorderView * _contentRangeBorderView; // +0x20
    UIView * _leftMaskView; // +0x28
    UIView * _rightMaskView; // +0x30
    MJCollectionView * _thumbnailCollectionView; // +0x38
    UICollectionViewFlowLayout * _thumbnailCollectionViewLayout; // +0x40
    UICollectionView * _segmentCollectionView; // +0x48
    UICollectionViewFlowLayout * _segmentCollectionViewLayout; // +0x50
    id <OMCThumbnailProvider> _thumbnailProvider; // +0x58
    MMUIView * _playheadView; // +0x60
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x68
    OMCBatchThumbnailProvider * _batchThumbnailProvider; // +0x70
    CGRect _currentBounds; // +0x78
    UIEdgeInsets _playheadTouchInsets; // +0x98
}
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;
- (void)dealloc;
- (void)setupThumbnailProvider;
- (void)setupViews;
- (void)layoutViews;
- (void)layoutPlayheadView;
- (void)layoutSubviews;
- (void)bindViews;
- (void)reloadData;
- (void)setupGestureRecognizers;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)numberOfThumbnailTiles;
- (void)setupThumbnailCell:(id)arg1 atIndexPath:(id)arg2;
- (void)setupSegmentCell:(id)arg1 atIndexPath:(id)arg2;
- (void)reloadOnFocusSegmentDidChange;
- (void)requestThumbnailImageForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)cancelThumbnailImageRequestForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)didEndScrubbingTimelineView;
- (void)updateSegmentContentRange;
- (void)scrollToContentRange;
- (struct)playbackTimeFromPlayheadOffset;
- (void)skimAndNotify;
- (void)layoutMaskView;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)updatePlayheadWithGesture:(id)arg1;
- (void)stopPlayingAndBeginClipSkimming;
- (struct)timeForOffset:(double)arg1 shouldClamp:(BOOL)arg2 contentRangeClamp:(BOOL)arg3;
- (double)offsetForTime:(struct)arg1;
- (struct)timeRangeForOffsetRange:(MCOffsetRange)arg1;
- (id)timelineVM;
- (id)playbackVM;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentRangeBorderView;
- (void)setContentRangeBorderView:(id)arg1;
- (id)leftMaskView;
- (void)setLeftMaskView:(id)arg1;
- (id)rightMaskView;
- (void)setRightMaskView:(id)arg1;
- (id)thumbnailCollectionView;
- (void)setThumbnailCollectionView:(id)arg1;
- (id)thumbnailCollectionViewLayout;
- (void)setThumbnailCollectionViewLayout:(id)arg1;
- (id)segmentCollectionView;
- (void)setSegmentCollectionView:(id)arg1;
- (id)segmentCollectionViewLayout;
- (void)setSegmentCollectionViewLayout:(id)arg1;
- (CGRect)currentBounds;
- (void)setCurrentBounds:(CGRect)arg1;
- (id)thumbnailProvider;
- (void)setThumbnailProvider:(id)arg1;
- (id)playheadView;
- (void)setPlayheadView:(id)arg1;
- (UIEdgeInsets)playheadTouchInsets;
- (void)setPlayheadTouchInsets:(UIEdgeInsets)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (id)batchThumbnailProvider;
- (void)setBatchThumbnailProvider:(id)arg1;
- (void).cxx_destruct;
@end

