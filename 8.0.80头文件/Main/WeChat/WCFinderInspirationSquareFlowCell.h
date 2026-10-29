@interface WCFinderInspirationSquareFlowCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <WCFinderInspirationSquareFlowCellDelegate> _delegate; // +0x8
    UILabel * _playTitleLabel; // +0x10
    UILabel * _playSubTitleLabel; // +0x18
    UICollectionView * _collectionView; // +0x20
    UIButton * _favBtn; // +0x28
    WCFinderInspirationSquareFlowCellViewModel * _viewmodel; // +0x30
}
+ (CGSize)itemSize:(double)arg1;
+ (double)cellHeightWithWidth:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateViewModel:(id)arg1;
- (void)setUpUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)cellViewWithTid:(id)arg1;
- (void)clickFavAction;
- (void)updateFavStatus;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)playTitleLabel;
- (void)setPlayTitleLabel:(id)arg1;
- (id)playSubTitleLabel;
- (void)setPlaySubTitleLabel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)favBtn;
- (void)setFavBtn:(id)arg1;
- (id)viewmodel;
- (void)setViewmodel:(id)arg1;
- (void).cxx_destruct;
@end
