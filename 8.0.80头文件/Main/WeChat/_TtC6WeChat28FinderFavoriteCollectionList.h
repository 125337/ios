@interface _TtC6WeChat28FinderFavoriteCollectionList : UIView <UICollectionViewDelegate, WCFinderEmptyTipsViewDelegate>
{
     viewModel; // +0x8
     delegate; // +0x10
     emptyTipsView; // +0x18
     collectionView; // +0x20
     dataSource; // +0x28
     hightLightIdentifier; // +0x30
}
- (id)initWithDataProvider:(id)arg1 delegate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)reloadData;
- (void)scrollToTopWithAnimated:(BOOL)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderEmptyTipsView:(id)arg1 didClickOnState:(unsigned long long)arg2;
- (void)onMenuControllerDidHide;
- (id)initWithFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
