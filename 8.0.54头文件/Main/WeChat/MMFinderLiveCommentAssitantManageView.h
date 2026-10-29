@interface MMFinderLiveCommentAssitantManageView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _ignoreSafeArea; // +0x8
    double _contentTopMargin; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _detailLabel; // +0x28
    UICollectionView * _collectionView; // +0x30
    MMFinderLiveCommentAssitantManageViewModel * _viewModel; // +0x38
    double _safeAreaTop; // +0x40
    NSArray * _assistants; // +0x48
    double _itemSpacing; // +0x50
    double _collectionViewWidth; // +0x58
    double _collectionViewItemPerRow; // +0x60
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)reloadData;
- (double)collectionViewItemPerRow;
- (double)getCollectionViewItemWidth;
- (double)getCollectionViewWidth;
- (void)initUI;
- (void)layoutUI;
- (BOOL)assistantsReachMaxCount;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)safeAreaTop;
- (double)contentTopMargin;
- (void)setContentTopMargin:(double)arg1;
- (BOOL)ignoreSafeArea;
- (void)setIgnoreSafeArea:(BOOL)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setSafeAreaTop:(double)arg1;
- (id)assistants;
- (void)setAssistants:(id)arg1;
- (double)itemSpacing;
- (void)setItemSpacing:(double)arg1;
- (double)collectionViewWidth;
- (void)setCollectionViewWidth:(double)arg1;
- (void)setCollectionViewItemPerRow:(double)arg1;
- (void).cxx_destruct;
@end

