@interface WCFinderProfilePlaylistCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <WCFinderProfilePlaylistCellDataSource> _dataSource; // +0x8
    UILabel * _titleLabel; // +0x10
    UIButton * _allButton; // +0x18
    UICollectionView * _collectionView; // +0x20
    NSMutableSet * _registerCellSet; // +0x28
}
+ (double)calcualteItemWidth:(double)arg1;
+ (CGSize)sizeThatFit:(CGSize)arg1 showPlayInfo:(BOOL)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)allButton;
- (void)setAllButton:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)registerCellSet;
- (void)setRegisterCellSet:(id)arg1;
- (void).cxx_destruct;
@end
