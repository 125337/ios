@interface MMFinderLiveNewAnchorTaskMultiTargetsView : MMFinderLiveNewAnchorTaskTargetsView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _shouldShowNote; // +0x8
    unsigned int _rewardProvideType; // +0xc
    NSMutableArray * _stageItems; // +0x10
    NSMutableArray * _headerY; // +0x18
    UICollectionView * _taskCollectionView; // +0x20
    UIScrollView * _progressScrollView; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)checkMask:(id)arg1;
- (id)headerY;
- (void)reloadProgressScrollView;
- (void)setStageItems:(id)arg1;
- (void)refreshStatus;
- (id)stageItems;
- (unsigned int)rewardProvideType;
- (void)setRewardProvideType:(unsigned int)arg1;
- (void)setHeaderY:(id)arg1;
- (BOOL)shouldShowNote;
- (void)setShouldShowNote:(BOOL)arg1;
- (id)taskCollectionView;
- (void)setTaskCollectionView:(id)arg1;
- (id)progressScrollView;
- (void)setProgressScrollView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

