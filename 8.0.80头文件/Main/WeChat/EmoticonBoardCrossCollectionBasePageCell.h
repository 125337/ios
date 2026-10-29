@interface EmoticonBoardCrossCollectionBasePageCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout>
{
    BOOL _darkMode; // +0x8
    id <EmoticonBoardCrossCollectionBasePageDelegate> _delegate; // +0x10
    EmoticonBoardCrossSectionInfo * _sectionInfo; // +0x18
    MMLoadMoreCollectionView * _collectionView; // +0x20
    UICollectionViewFlowLayout * _collectionLayout; // +0x28
    UIView * _topMaskView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setPageOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)setDarkMode:(BOOL)arg1;
- (BOOL)isTracking;
- (void)setDelegate:(id)arg1;
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (unsigned long long)maximumNumberOfItemsInRow;
- (id)collectionViewLayout;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id)delegate;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (BOOL)darkMode;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)topMaskView;
- (void)setTopMaskView:(id)arg1;
- (void).cxx_destruct;
@end
