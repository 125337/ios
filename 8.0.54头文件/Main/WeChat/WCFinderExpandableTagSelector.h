@interface WCFinderExpandableTagSelector : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    DelegateFlag _delegateFlag; // +0x8
    UIFont * _font; // +0x10
    UIColor * _textColor; // +0x18
    UIColor * _selectedTextColor; // +0x20
    UIColor * _panelTextColor; // +0x28
    UIColor * _panelSelectedTextColor; // +0x30
    UIColor * _panelSelectedCardColor; // +0x38
    double _itemPadding; // +0x40
    NSDictionary * _defaultSelecteds; // +0x48
    NSArray * _items; // +0x50
    id <WCFinderExpandableTagSelectorDataSource> _dataSource; // +0x58
    id <WCFinderExpandableTagSelectorDelegate> _delegate; // +0x60
    NSMutableArray * _rootViews; // +0x68
    UIView * _expandView; // +0x70
    UIView * _itemContainerView; // +0x78
    UICollectionView * _itemCollectionView; // +0x80
    WCFinderExpandableTagSelectorExpandInfo * _expandInfo; // +0x88
    NSMutableSet * _displayItems; // +0x90
    NSMutableDictionary * _userManualSelecteds; // +0x98
    UIEdgeInsets _edgeInsets; // +0xa0
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setDataSource:(id)arg1;
- (void)setupRootItems;
- (id)itemViewForIdentifier:(id)arg1;
- (void)sizeToFitButton:(id)arg1 textIconPadding:(double)arg2;
- (void)setButton:(id)arg1 arrowOpen:(BOOL)arg2;
- (void)_updateItemViewStatus:(id)arg1 level:(long long)arg2;
- (void)_layoutButtons;
- (void)layoutSubviews;
- (void)hiddenPanel;
- (void)_hiddenSelectPanel;
- (void)_onButtonClick:(id)arg1;
- (id)createCollectionView;
- (double)calculateExpandHeight;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)isItemSelected:(id)arg1 identifier:(id)arg2;
- (id)selectedItems;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)_fetchNumberOfGroupCount:(id)arg1 group:(long long)arg2;
- (id)_fetchIdentifier:(id)arg1 indexPath:(id)arg2;
- (Group *)_fetchGroupInfo:(id)arg1 group:(long long)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)selectedTextColor;
- (void)setSelectedTextColor:(id)arg1;
- (id)panelTextColor;
- (void)setPanelTextColor:(id)arg1;
- (id)panelSelectedTextColor;
- (void)setPanelSelectedTextColor:(id)arg1;
- (id)panelSelectedCardColor;
- (void)setPanelSelectedCardColor:(id)arg1;
- (double)itemPadding;
- (void)setItemPadding:(double)arg1;
- (UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (id)defaultSelecteds;
- (void)setDefaultSelecteds:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rootViews;
- (void)setRootViews:(id)arg1;
- (id)expandView;
- (void)setExpandView:(id)arg1;
- (id)itemContainerView;
- (void)setItemContainerView:(id)arg1;
- (id)itemCollectionView;
- (void)setItemCollectionView:(id)arg1;
- (id)expandInfo;
- (void)setExpandInfo:(id)arg1;
- (DelegateFlag)delegateFlag;
- (void)setDelegateFlag:(DelegateFlag)arg1;
- (id)displayItems;
- (void)setDisplayItems:(id)arg1;
- (id)userManualSelecteds;
- (void)setUserManualSelecteds:(id)arg1;
- (void).cxx_destruct;
@end

