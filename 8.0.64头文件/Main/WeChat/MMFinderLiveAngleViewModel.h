@interface MMFinderLiveAngleViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _enableRotate; // +0x8
    BOOL _isCoverSpam; // +0x9
    UICollectionView * _mainCollectionView; // +0x10
    unsigned long long _seq; // +0x18
    MMFinderLiveTaskId * _liveTaskId; // +0x20
    MMFinderLiveMultiAngleView * _angleView; // +0x28
    NSMutableArray * _dataArray; // +0x30
    long long _selectRow; // +0x38
    NSString * _coverUrl; // +0x40
    NSString * _coverSpamText; // +0x48
}
- (void)updateLiveTaskId:(id)arg1 angleView:(id)arg2;
- (id)audioModeCoverImageUrlString:(id)arg1;
- (void)updateData:(id)arg1;
- (void)showWithAnimated;
- (void)dismissWithAnimated;
- (id)liveTask;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)getItemWidth;
- (double)getItemHeight;
- (double)getAspectRatio;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)dataArray;
- (double)getAngleViewCollectionViewHeight;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)endScrolling:(id)arg1;
- (void)handleVisibleCell:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)mainCollectionView;
- (void)setMainCollectionView:(id)arg1;
- (BOOL)enableRotate;
- (void)setEnableRotate:(BOOL)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)angleView;
- (void)setAngleView:(id)arg1;
- (void)setDataArray:(id)arg1;
- (long long)selectRow;
- (void)setSelectRow:(long long)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (BOOL)isCoverSpam;
- (void)setIsCoverSpam:(BOOL)arg1;
- (id)coverSpamText;
- (void)setCoverSpamText:(id)arg1;
- (void).cxx_destruct;
@end
