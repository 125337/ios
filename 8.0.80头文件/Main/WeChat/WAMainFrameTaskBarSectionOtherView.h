@interface WAMainFrameTaskBarSectionOtherView : WAMainFrameTaskBarSectionBaseView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, WAMainFrameTaskBarSectionOtherViewCellDelegate>
{
    long long _selectedIndex; // +0x8
    WAMainFrameTaskBarSectionOtherViewCell * _highlightedCell; // +0x10
    id <WAMainFrameTaskBarSectionOtherViewDelegate> _delegate; // +0x18
    UICollectionView * _collectionView; // +0x20
    UICollectionViewFlowLayout * _layout; // +0x28
    WAMainFrameTaskBarSectionViewModel * _viewModel; // +0x30
}
+ (long long)cellWidth;
+ (long long)cellWidthForContainerWidth:(double)arg1;
+ (long long)cellHeight;
+ (long long)cellHeightForContainerWidth:(double)arg1;
+ (long long)contentHeight:(long long)arg1;
+ (long long)contentHeight:(long long)arg1 containerWidth:(double)arg2;
- (id)title;
- (void)initView;
- (void)prepareForReuse;
- (void)initCollectionView;
- (void)updateAccessibilityFrame;
- (void)layoutSubviews;
- (void)reload;
- (BOOL)supportAddToMinimize;
- (void)handleLongPress:(id)arg1;
- (void)deleteItem;
- (void)onClickDelete:(id)arg1;
- (void)deleteItem:(long long)arg1;
- (void)addToMinimize;
- (void)addToMinimize:(long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
