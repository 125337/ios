@interface WCAdSliderCardView : MMUIView <WCAdSliderCardCellViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _isDetail; // +0x8
    BOOL _canAutoPlay; // +0x9
    BOOL _canAddEmitter; // +0xa
    id <WCAdSliderCardViewDelegate> _delegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    long long _exposureIndex; // +0x20
    long long _totalCellCount; // +0x28
    WCDataItem * _dataItem; // +0x30
    WCAdSliderCardSlideJumpInfo * _slideJumpInfo; // +0x38
    NSArray * _cardList; // +0x40
    double _lastScrollDistance; // +0x48
    long long _sliderCardStyle; // +0x50
    long long _cardType; // +0x58
    WCAdCardEmitterView * _emitterView; // +0x60
    AdExposureTimerHelper * _cardSlideTimer; // +0x68
    double _distanceBeginDragging; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 sliderCardStyle:(long long)arg2 cardList:(id)arg3 cardType:(long long)arg4 slideJumpInfo:(id)arg5 dataItem:(id)arg6 isDetail:(BOOL)arg7;
- (void)dealloc;
- (void)initView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)shockDeviceIfNeed:(double)arg1;
- (BOOL)onMediaPlayEnd;
- (void)onCellClick:(long long)arg1 clickType:(long long)arg2;
- (void)initCollectionView;
- (void)checkAndResetIndex;
- (BOOL)nextPage;
- (void)autoPlay;
- (void)autoPause;
- (void)checkCellPlayState;
- (void)pauseAllCell;
- (void)pauseCell:(long long)arg1;
- (void)checkCellExposure;
- (id)sortIndexPathArray:(id)arg1;
- (void)updateVisibleCellData:(id)arg1 dataItem:(id)arg2;
- (long long)currentExposureIndex;
- (void)contentItemWillDisplay;
- (id)cardSlideTimer;
- (BOOL)isSlideJumpStyle;
- (void)doSlideJump;
- (BOOL)isBeginDraggingDistanceValidToJump;
- (void)setTitleForFooterView:(id)arg1 withReleaseStyle:(BOOL)arg2;
- (double)getCurrentDistance:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (id)emitterView;
- (id)fetchEmitterContainerView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isDetail;
- (void)setIsDetail:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (long long)exposureIndex;
- (void)setExposureIndex:(long long)arg1;
- (long long)totalCellCount;
- (void)setTotalCellCount:(long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)canAutoPlay;
- (void)setCanAutoPlay:(BOOL)arg1;
- (id)slideJumpInfo;
- (void)setSlideJumpInfo:(id)arg1;
- (id)cardList;
- (void)setCardList:(id)arg1;
- (double)lastScrollDistance;
- (void)setLastScrollDistance:(double)arg1;
- (long long)sliderCardStyle;
- (void)setSliderCardStyle:(long long)arg1;
- (long long)cardType;
- (void)setCardType:(long long)arg1;
- (void)setEmitterView:(id)arg1;
- (BOOL)canAddEmitter;
- (void)setCanAddEmitter:(BOOL)arg1;
- (void)setCardSlideTimer:(id)arg1;
- (double)distanceBeginDragging;
- (void)setDistanceBeginDragging:(double)arg1;
- (void).cxx_destruct;
@end
