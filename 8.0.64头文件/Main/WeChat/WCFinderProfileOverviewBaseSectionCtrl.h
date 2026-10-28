@interface WCFinderProfileOverviewBaseSectionCtrl : NSObject
{
    WCFinderProfileOverviewSection * _model; // +0x8
    UIViewController * _viewController; // +0x10
    WCFinderStreamProfileHeadData * _contactViewModel; // +0x18
    WCFinderProfileOverviewPageModel * _pageModel; // +0x20
    id <WCFinderProfileOverviewBaseSectionDelegate> _delegate; // +0x28
    UICollectionView * _collectionView; // +0x30
    WCFinderProfileOverviewHeader * _headerView; // +0x38
}
+ (id)sectionDefines;
+ (id)suppportAllSections;
+ (BOOL)featureSupport:(id)arg1;
+ (void)setupRegister:(id)arg1;
- (void)relayout;
- (void)reloadData;
- (void)reloadSectionCtrl;
- (void)reloadSection:(id)arg1;
- (void)reloadItem:(id)arg1 section:(id)arg2;
- (void)reloadItems:(id)arg1;
- (id)cellForIdentifier:(id)arg1 forSection:(id)arg2;
- (void)reloadStateView;
- (id)visitableCellIdentifiers;
- (void)scrollToCell:(id)arg1 item:(id)arg2;
- (void)setModel:(id)arg1;
- (void)_onOVOSectionDataChanged:(id)arg1;
- (void)onSectionDataChanged:(id)arg1;
- (double)contentMargin;
- (id)customBottomMoreBtnWording;
- (id)sections;
- (SectionItems)itemsForSection:(id)arg1 index:(long long)arg2;
- (CGSize)itemSizeForItem:(id)arg1 collectionView:(id)arg2;
- (id)cellForItemIdentifier:(id)arg1 collectionView:(id)arg2;
- (id)supplementaryViewForSection:(id)arg1 elementKind:(id)arg2 collectionView:(id)arg3;
- (double)minimumInteritemSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (double)minimumLineSpacingForIdentifier:(id)arg1 section:(long long)arg2;
- (UIEdgeInsets)insetForSectionAtIndex:(long long)arg1 identifier:(id)arg2;
- (void)onSelectedCellForIdentifier:(id)arg1;
- (void)onClickHeaderRightBtn:(id)arg1;
- (void)onClickBottomMore;
- (void)willDisplayItemIdentifier:(id)arg1;
- (void)didEndDisplayItemIdentifier:(id)arg1;
- (long long)seperatorStyleForSection:(id)arg1;
- (UIEdgeInsets)edgeInsetForSeperator:(id)arg1 position:(long long)arg2;
- (double)fullHorizontalInset;
- (double)adjustHorizontalInset;
- (double)adjustHorizontalSize;
- (BOOL)alreadyDisplayJsutWatch;
- (void)jumpToRefTab;
- (void)jumpToRefTab:(id /* block */)arg1;
- (void)reloadStatusView;
- (id)overviewPage;
- (void)pageWillAppear;
- (void)pageDidDisappear;
- (void)pageDidAppear;
- (void)onPageSizeDidChanged;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)onItemExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onItemUnExpose:(id)arg1 exposeObj:(id *)arg2;
- (void)onHeaderWillDisplay:(id)arg1;
- (CGRect)liveMorphDismissRectWithCustomKey:(id)arg1;
- (void)preloadVisibleVideo;
- (id)model;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)contactViewModel;
- (void)setContactViewModel:(id)arg1;
- (id)pageModel;
- (void)setPageModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
@end
