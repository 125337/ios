@interface MJShootComposingTemplatePanelView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootComposingTemplatePageViewDelegate, MJShootComposingTemplatePanelViewModelDelegate, MJShootComposingTemplateSearchViewDelegate>
{
    MJShootComposingTemplatePanelViewModel * _viewModel; // +0x8
    id <MJShootComposingTemplatePanelViewDelegate> _delegate; // +0x10
    NSIndexPath * _selectedTitleIndexPath; // +0x18
    UICollectionView * _titleCollectionView; // +0x20
    UIScrollView * _scrollView; // +0x28
    UIStackView * _scrollContentView; // +0x30
    double _lastDuoPageWidth; // +0x38
    UIView * _indicatorView; // +0x40
    NSIndexPath * _anchoredIndexPath; // +0x48
    NSLayoutConstraint * _indicatorLeading; // +0x50
    NSLayoutConstraint * _indicatorTrailing; // +0x58
    UIView * _searchBar; // +0x60
    MMUIButton * _searchButton; // +0x68
    CAGradientLayer * _searchGradientLayer; // +0x70
    MJShootComposingTemplateSearchView * _searchView; // +0x78
    NSArray * _pageViews; // +0x80
}
- (id)initWithViewModel:(id)arg1;
- (void)commonInit;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setupPanelTitleCollectionView;
- (void)setupPanelTitleLineView;
- (void)setupPanelTemplateCollectionView;
- (void)setupSearchBar;
- (void)layoutViews;
- (void)bindViews;
- (id)findViewWithCurrentDowloadingTemplateID:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)titleCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 shouldScrollPageView:(BOOL)arg3;
- (void)scrollToPageAtIndexPath:(id)arg1 shouldScrollPageView:(BOOL)arg2;
- (void)scrollToPageAtIndexPath:(id)arg1;
- (void)updateLineViewLayoutWithIndexPath:(id)arg1;
- (void)anchorIndicatorToCell:(id)arg1 atIndexPath:(id)arg2;
- (void)anchorIndicatorToLeading;
- (void)anchorIndicatorToTrailing;
- (void)uninstallIndicatorConstraints;
- (void)searchButtonDidTouchUpInside:(id)arg1;
- (void)showSearchView;
- (void)hideSearchView;
- (void)didDismiss;
- (void)templateSearchView:(id)arg1 didManuallyTapTemplateItem:(id)arg2;
- (void)templateSearchView:(id)arg1 didSelectItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)templateSearchView:(id)arg1 didTapTemplateEntryItem:(id)arg2;
- (void)templateSearchViewDidCancel:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)currentPosition;
- (long long)currentPageIndex;
- (void)shootComposingTemplatePageView:(id)arg1 didManuallyTapTemplateItem:(id)arg2;
- (void)shootComposingTemplatePageView:(id)arg1 didSelectItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplatePageView:(id)arg1 willDisplayTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3 isReloadingData:(BOOL)arg4;
- (void)shootComposingTemplatePageView:(id)arg1 didEndDisplayingTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3 isReloadingData:(BOOL)arg4;
- (void)shootComposingTemplatePageView:(id)arg1 didTapTemplateEntryItem:(id)arg2;
- (void)handleTemplateSelectionWithItem:(id)arg1 atIndex:(unsigned long long)arg2 tabID:(unsigned long long)arg3;
- (BOOL)isTemplateItem:(id)arg1 containedInList:(id)arg2;
- (unsigned long long)indexOfTemplateItem:(id)arg1 inList:(id)arg2;
- (void)reloadData;
- (void)reloadDataWithInsertedPageAtIndex:(unsigned long long)arg1;
- (long long)scrollTargetPageIndexAfterInsertionAtIndex:(unsigned long long)arg1;
- (void)scrollAfterInsertionOrRemovalToTargetPageAtIndex:(long long)arg1;
- (void)reloadDataWithRemovedPageAtIndex:(unsigned long long)arg1;
- (long long)scrollTargetPageIndexAfterRemovalAtIndex:(unsigned long long)arg1;
- (void)reloadDataWithSelectedTemplateID:(id)arg1;
- (id)calcSelectedTitleIndexPath;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSearchGradientLayerColors;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedTitleIndexPath;
- (void)setSelectedTitleIndexPath:(id)arg1;
- (id)titleCollectionView;
- (void)setTitleCollectionView:(id)arg1;
- (id)scrollView;
- (id)scrollContentView;
- (double)lastDuoPageWidth;
- (void)setLastDuoPageWidth:(double)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)anchoredIndexPath;
- (void)setAnchoredIndexPath:(id)arg1;
- (id)indicatorLeading;
- (void)setIndicatorLeading:(id)arg1;
- (id)indicatorTrailing;
- (void)setIndicatorTrailing:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)searchButton;
- (void)setSearchButton:(id)arg1;
- (id)searchGradientLayer;
- (void)setSearchGradientLayer:(id)arg1;
- (id)searchView;
- (void)setSearchView:(id)arg1;
- (id)pageViews;
- (void).cxx_destruct;
@end
