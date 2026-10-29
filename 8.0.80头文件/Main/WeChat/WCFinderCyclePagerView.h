@interface WCFinderCyclePagerView : UIView <UICollectionViewDelegateFlowLayout>
{
    BOOL _isInfiniteLoop; // +0x8
    BOOL _reloadDataNeedResetIndex; // +0x9
    BOOL _disableAutoContentOffsetX; // +0xa
    BOOL _needClearLayout; // +0xb
    BOOL _didReloadData; // +0xc
    BOOL _didLayout; // +0xd
    BOOL _needResetIndex; // +0xe
    id <WCFinderCyclePagerViewDataSource> _dataSource; // +0x10
    id <WCFinderCyclePagerViewDelegate> _delegate; // +0x18
    UICollectionView * _collectionView; // +0x20
    WCFinderCyclePagerViewLayoutParams * _layoutParams; // +0x28
    double _autoScrollInterval; // +0x30
    NSTimer * _timer; // +0x38
    UICollectionViewDiffableDataSource * _diffableDataSource; // +0x40
    long long _numberOfItems; // +0x48
    NSArray * _identifiers; // +0x50
    long long _dequeueSection; // +0x58
    long long _firstScrollIndex; // +0x60
    struct _indexSection; // +0x68
    struct _beginDragIndexSection; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configureProperty;
- (void)addCollectionView;
- (void)setupDiffableDataSource;
- (void)willMoveToSuperview:(id)arg1;
- (void)addTimer;
- (void)removeTimer;
- (void)timerFired:(id)arg1;
- (id)layoutParams;
- (long long)curIndex;
- (CGPoint)contentOffset;
- (BOOL)tracking;
- (BOOL)dragging;
- (BOOL)decelerating;
- (id)backgroundView;
- (id)cellWithIndex:(long long)arg1;
- (id)curIndexCell;
- (id)visibleCells;
- (void)setBackgroundView:(id)arg1;
- (void)setAutoScrollInterval:(double)arg1;
- (void)reloadData;
- (void)updateData;
- (void)applyDiffSnapshot;
- (void)applyDiffSnapshotWithCompletion:(id /* block */)arg1;
- (void)scrollToNearlyIndexAtDirection:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)scrollToItemAtIndex:(long long)arg1 animate:(BOOL)arg2;
- (void)scrollToItemAtIndexSection:(struct)arg1 animate:(BOOL)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(long long)arg2;
- (void)updateLayout;
- (void)clearLayout;
- (void)setNeedClearLayout;
- (void)setNeedUpdateLayout;
- (BOOL)isValidIndexSection:(struct)arg1;
- (struct)nearlyIndexPathAtDirection:(unsigned long long)arg1;
- (struct)nearlyIndexPathForIndexSection:(struct)arg1 direction:(unsigned long long)arg2;
- (struct)caculateIndexSectionWithOffsetX:(double)arg1;
- (double)caculateOffsetXAtIndexSection:(struct)arg1;
- (void)resetPagerViewAtIndex:(long long)arg1;
- (void)recyclePagerViewIfNeed;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)layoutSubviews;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void)setLayoutParams:(id)arg1;
- (BOOL)isInfiniteLoop;
- (void)setIsInfiniteLoop:(BOOL)arg1;
- (double)autoScrollInterval;
- (BOOL)reloadDataNeedResetIndex;
- (void)setReloadDataNeedResetIndex:(BOOL)arg1;
- (BOOL)disableAutoContentOffsetX;
- (void)setDisableAutoContentOffsetX:(BOOL)arg1;
- (struct)indexSection;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)diffableDataSource;
- (void)setDiffableDataSource:(id)arg1;
- (long long)numberOfItems;
- (void)setNumberOfItems:(long long)arg1;
- (id)identifiers;
- (void)setIdentifiers:(id)arg1;
- (long long)dequeueSection;
- (void)setDequeueSection:(long long)arg1;
- (struct)beginDragIndexSection;
- (void)setBeginDragIndexSection:(struct)arg1;
- (long long)firstScrollIndex;
- (void)setFirstScrollIndex:(long long)arg1;
- (BOOL)needClearLayout;
- (void)setNeedClearLayout:(BOOL)arg1;
- (BOOL)didReloadData;
- (void)setDidReloadData:(BOOL)arg1;
- (BOOL)didLayout;
- (void)setDidLayout:(BOOL)arg1;
- (BOOL)needResetIndex;
- (void)setNeedResetIndex:(BOOL)arg1;
- (void).cxx_destruct;
@end
