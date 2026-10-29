@interface MMFinderGameLiveWelfareCollectionViewModel : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _isNotScrolling; // +0x8
    NSArray * _cellViewModelArr; // +0x10
    double _collectionViewWidth; // +0x18
}
- (id)initWithModel:(id)arg1;
- (id)updateModel:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)isNotScrolling;
- (id)cellViewModelArr;
- (void)setCellViewModelArr:(id)arg1;
- (double)collectionViewWidth;
- (void)setCollectionViewWidth:(double)arg1;
- (void)setIsNotScrolling:(BOOL)arg1;
- (void).cxx_destruct;
@end
