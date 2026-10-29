@interface MJTimelineThumbnailView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, MJSegmentReusableViewDelegate>
{
    MJTimelineViewModel * _timelineVM; // +0x8
    MJPlaybackViewModel * _playbackVM; // +0x10
    id <MJTimelineThumbnailViewDelegate> _delegate; // +0x18
    UICollectionView * _collectionView; // +0x20
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x28
    UILabel * _timeLabel; // +0x30
    id <OMCThumbnailProvider> _thumbnailProvider; // +0x38
    MMUIView * _playheadView; // +0x40
    CGRect _currentBounds; // +0x48
}
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;
- (void)dealloc;
- (void)setupViews;
- (void)layoutViews;
- (void)layoutSubviews;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)numberOfThumbnailTiles;
- (void)setupThumbnailCell:(id)arg1 atIndexPath:(id)arg2;
- (void)requestThumbnailImageForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)cancelThumbnailImageRequestForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)didEndScrubbingTimelineView;
- (void)scrollToContentRange;
- (struct)playbackTimeFromPlayheadOffset;
- (void)skimAndNotify;
- (void)didFinish;
- (void)didCancel;
- (void)stopScrollIfNeeded;
- (void)syncTimelinePlayheadTime;
- (struct)timeForOffset:(double)arg1 shouldClamp:(BOOL)arg2 contentRangeClamp:(BOOL)arg3;
- (double)offsetForTime:(struct)arg1;
- (struct)timeRangeForOffsetRange:(MCOffsetRange)arg1;
- (id)timelineVM;
- (id)playbackVM;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (CGRect)currentBounds;
- (void)setCurrentBounds:(CGRect)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)thumbnailProvider;
- (void)setThumbnailProvider:(id)arg1;
- (id)playheadView;
- (void)setPlayheadView:(id)arg1;
- (void).cxx_destruct;
@end

