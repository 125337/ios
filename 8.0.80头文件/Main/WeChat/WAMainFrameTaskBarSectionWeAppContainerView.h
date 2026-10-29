@interface WAMainFrameTaskBarSectionWeAppContainerView : WAMainFrameTaskBarSectionBaseView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _cellOnceCreated; // +0x8
    id <WAMainFrameTaskBarSectionWeAppContainerDelegate><WAMainFrameTaskBarSectionWeAppViewDelegate> _delegate; // +0x10
    WAMainFrameTaskBarSectionWeAppView * _weAppView; // +0x18
    WAMainFrameTaskBarSectionMyWeAppView * _myWeAppView; // +0x20
    UICollectionView * _collectionView; // +0x28
    UICollectionViewFlowLayout * _layout; // +0x30
}
+ (long long)topAreaHeight;
+ (double)contentHeightWithWeAppViewModel:(id)arg1 myWeAppViewModel:(id)arg2;
- (id)title;
- (void)initView;
- (void)initCollectionView;
- (void)layoutSubviews;
- (void)onClickSearch;
- (void)reload;
- (id)createLayout;
- (void)animateChangeSectionHeight;
- (void)deleteCollectionViewSections:(id)arg1;
- (void)reloadCommUsedSection;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)weAppSectionData;
- (id)arrWeAppItem;
- (id)arrMyWeAppItem;
- (id)weAppViewModel;
- (id)myWeAppViewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)weAppView;
- (void)setWeAppView:(id)arg1;
- (id)myWeAppView;
- (void)setMyWeAppView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)layout;
- (void)setLayout:(id)arg1;
- (BOOL)cellOnceCreated;
- (void)setCellOnceCreated:(BOOL)arg1;
- (void).cxx_destruct;
@end
