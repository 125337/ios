@interface MJTimelineReorderView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, MJSegmentReusableViewDelegate>
{
    id <MJTimelineReorderViewDelegate> _delegate; // +0x8
    MJTimelineViewModel * _timelineVM; // +0x10
    MJPlaybackViewModel * _playbackVM; // +0x18
    UILongPressGestureRecognizer * _longPressGR; // +0x20
    UICollectionView * _collectionView; // +0x28
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x30
    UILabel * _titleLabel; // +0x38
    NSArray * _initialOrder; // +0x40
    OMCBatchThumbnailProvider * _batchThumbnailProvider; // +0x48
}
- (id)initWithTimelineViewModel:(id)arg1 playbackViewModel:(id)arg2;
- (void)dealloc;
- (void)setupThumbnailProvider;
- (void)setupViews;
- (void)layoutViews;
- (void)bindViews;
- (void)setupGestures;
- (BOOL)hasChanges;
- (void)handleLongPressGesture:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)updateVisibleCellNumbers;
- (void)handleSelectSegmentAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)timelineVM;
- (id)playbackVM;
- (id)longPressGR;
- (void)setLongPressGR:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)initialOrder;
- (void)setInitialOrder:(id)arg1;
- (id)batchThumbnailProvider;
- (void)setBatchThumbnailProvider:(id)arg1;
- (void).cxx_destruct;
@end
