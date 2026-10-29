@interface MJShootComposingTemplatePanelView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootComposingTemplatePageViewDelegate, MJShootComposingTemplatePanelViewModelDelegate>
{
    MJShootComposingTemplatePanelViewModel * _viewModel; // +0x8
    id <MJShootComposingTemplatePanelViewDelegate> _delegate; // +0x10
    NSIndexPath * _selectedTitleIndexPath; // +0x18
    UICollectionView * _titleCollectionView; // +0x20
    UIScrollView * _scrollView; // +0x28
    UIStackView * _scrollContentView; // +0x30
    UIView * _indicatorView; // +0x38
    NSIndexPath * _anchoredIndexPath; // +0x40
    NSLayoutConstraint * _indicatorLeading; // +0x48
    NSLayoutConstraint * _indicatorTrailing; // +0x50
    NSArray * _pageViews; // +0x58
}
- (id)initWithViewModel:(id)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)setupPanelTitleCollectionView;
- (void)setupPanelTitleLineView;
- (void)setupPanelTemplateCollectionView;
- (void)layoutViews;
- (void)bindViews;
- (id)findPageViewWithCurrentDowloadingTemplateID:(id)arg1;
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
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (double)currentPosition;
- (long long)currentPageIndex;
- (void)shootComposingTemplatePageView:(id)arg1 didSelectItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplatePageView:(id)arg1 willDisplayTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)shootComposingTemplatePageView:(id)arg1 didEndDisplayingTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)reloadData;
- (void)reloadDataWithSelectedTemplateID:(id)arg1;
- (id)calcSelectedTitleIndexPath;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedTitleIndexPath;
- (void)setSelectedTitleIndexPath:(id)arg1;
- (id)titleCollectionView;
- (void)setTitleCollectionView:(id)arg1;
- (id)scrollView;
- (id)scrollContentView;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)anchoredIndexPath;
- (void)setAnchoredIndexPath:(id)arg1;
- (id)indicatorLeading;
- (void)setIndicatorLeading:(id)arg1;
- (id)indicatorTrailing;
- (void)setIndicatorTrailing:(id)arg1;
- (id)pageViews;
- (void).cxx_destruct;
@end

