@interface MJShootComposingTemplateListView : MMUIView <UICollectionViewDelegate, UICollectionViewDataSource, MJShootComposingTemplatePanelViewModelDelegate, MJShootFrontFillLightAppearanceAdjusting>
{
    BOOL _loadMoreTemplateDisabled; // +0x8
    BOOL _lightStyle; // +0x9
    id <MJShootComposingTemplateListViewDelegate> _delegate; // +0x10
    UICollectionView * _collectionView; // +0x18
    UIView * _selectedBox; // +0x20
    UILabel * _titleLabel; // +0x28
    MMUIButton * _titleEntryButton; // +0x30
    long long _itemAtCenterPoint; // +0x38
    UIView * _progressBGView; // +0x40
    MJCircleProgressView * _progressView; // +0x48
    MJShootComposingTemplatePanelViewModel * _viewModel; // +0x50
}
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)updateTemplateListInsetsIfNeeded;
- (void)commonInit;
- (void)setupViews;
- (void)setupTitleEntryButton;
- (void)layoutViews;
- (void)bindViews;
- (void)updateTemplateLoadProgress:(float)arg1 templateID:(id)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setupTitleLabelWithTemplateItem:(id)arg1;
- (void)clearTitleEntryButton;
- (void)titleEntryDidTapAction:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadData;
- (void)reloadDataAndApplySelectedTemplate:(BOOL)arg1;
- (id)centralIndexPath;
- (void)notifyPassThroughAndFeedback;
- (void)didSelectedItemAtIndexPath:(id)arg1 isUserClicked:(BOOL)arg2;
- (id)calcSelectedIndexPath;
- (unsigned long long)currentSelectedIndex;
- (id)currentSelectedTemplateItem;
- (id)templateItemAtIndex:(unsigned long long)arg1;
- (id)templateItemWithTemplateID:(id)arg1;
- (BOOL)isCollectionViewInteracting;
- (void)templatePanelViewModelDidFetchItemFailed:(id)arg1;
- (void)templatePanelViewModelDidFetchItemSucceed:(id)arg1 item:(id)arg2;
- (void)templatePanelViewModelDidFetchItemsForDefaultTabFailed:(id)arg1;
- (void)templatePanelViewModel:(id)arg1 didFetchItemsForDefaultTab:(id)arg2 firstTime:(BOOL)arg3 currentTabInfo:(id)arg4;
- (void)templatePanelViewModelDidFetchItemsForDefaultTabSucceed:(id)arg1 items:(id)arg2 currentTabInfo:(id)arg3;
- (void)templatePanelViewModelDidFetchEmptyItemsForDefaultTabSucceed:(id)arg1;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)showLoadingUIIfNeeded;
- (void)removeLoadingUI;
- (void)impactFeedback;
- (void)updateTitleButtonAppearance;
- (void)shootComposingFrontFillLightStateDidChange:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)loadMoreTemplateDisabled;
- (void)setLoadMoreTemplateDisabled:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)selectedBox;
- (void)setSelectedBox:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleEntryButton;
- (void)setTitleEntryButton:(id)arg1;
- (long long)itemAtCenterPoint;
- (void)setItemAtCenterPoint:(long long)arg1;
- (id)progressBGView;
- (void)setProgressBGView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)isLightStyle;
- (void)setLightStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
