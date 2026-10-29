@interface WCFinderLiveCompleteDataPageView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _reportBaseData; // +0x8
    BOOL _reportIncomeData; // +0x9
    id /* block */ _itemSelectBlock; // +0x10
    id /* block */ _dataViewBlock; // +0x18
    id /* block */ _dataViewExposeBlock; // +0x20
    AnchorCloseLivePageDataUnit * _pageDataUnit; // +0x28
    WCFinderLiveCompleteDataModel * _dataModel; // +0x30
    UICollectionView * _collectionView; // +0x38
}
- (void)updateWithPageData:(id)arg1 dataModel:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)isClickEnable:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView;
- (void)dataViewClick:(int)arg1;
- (void)collectionViewClick;
- (id /* block */)itemSelectBlock;
- (void)setItemSelectBlock:(id /* block */)arg1;
- (id /* block */)dataViewBlock;
- (void)setDataViewBlock:(id /* block */)arg1;
- (id /* block */)dataViewExposeBlock;
- (void)setDataViewExposeBlock:(id /* block */)arg1;
- (id)pageDataUnit;
- (void)setPageDataUnit:(id)arg1;
- (id)dataModel;
- (void)setDataModel:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (BOOL)reportBaseData;
- (void)setReportBaseData:(BOOL)arg1;
- (BOOL)reportIncomeData;
- (void)setReportIncomeData:(BOOL)arg1;
- (void).cxx_destruct;
@end
