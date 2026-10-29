@interface WCFinderInteractiveHeaderView : UIView <WCFinderTabSwitchViewDataSource, WCFinderTabSwitchViewDelegate>
{
    BOOL _compactnessMode; // +0x8
    WCFinderInteractiveTabItem * _selectedTab; // +0x10
    id <WCFinderInteractiveHeaderViewDelegate> _delegate; // +0x18
    NSArray * _btnItems; // +0x20
    WCFinderTabSwitchView * _tabSwitchView; // +0x28
    UILabel * _favoritesFeedLabel; // +0x30
    UILabel * _favoritesCollectionLabel; // +0x38
    long long _selectedDataType; // +0x40
    NSArray * _subTabs; // +0x48
    UIButton * _subTabButton; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 compactnessMode:(BOOL)arg2;
- (void)_setup;
- (void)doLayout;
- (void)updateSubTabList:(id)arg1;
- (id)findSubTabSelectedTitle;
- (void)_setupFavoritesLabel;
- (void)_didTapFavoritesLabel:(id)arg1;
- (void)_selectedTypeDidChangedWithTabTypeV2:(id)arg1;
- (void)_selectedTypeDidChangedWithTabType:(id)arg1;
- (void)_selectedDataTypeDidChangedWithDataType:(long long)arg1;
- (long long)_interactiveTabTypeForIndex:(long long)arg1;
- (id)_favoritesDataTypeLabelWithText:(id)arg1;
- (void)_updateFavoritesLabelSelectedState;
- (void)_updateFavoritesLabel:(id)arg1 isSelected:(BOOL)arg2;
- (long long)numberOfTabSwitchView:(id)arg1;
- (id)tabSwitchView:(id)arg1 customTabViewAtIndex:(long long)arg2;
- (BOOL)onTabSwitchViewUserSelectIdx:(long long)arg1 oldIdx:(long long)arg2 animated:(BOOL)arg3 context:(void *)arg4 completion:(id /* block */)arg5;
- (void)onClickSubTabButton;
- (void)_updateSubTabBtnStyle:(BOOL)arg1;
- (id)selectedTab;
- (void)setSelectedTab:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)btnItems;
- (void)setBtnItems:(id)arg1;
- (BOOL)compactnessMode;
- (void)setCompactnessMode:(BOOL)arg1;
- (id)tabSwitchView;
- (void)setTabSwitchView:(id)arg1;
- (id)favoritesFeedLabel;
- (void)setFavoritesFeedLabel:(id)arg1;
- (id)favoritesCollectionLabel;
- (void)setFavoritesCollectionLabel:(id)arg1;
- (long long)selectedDataType;
- (void)setSelectedDataType:(long long)arg1;
- (id)subTabs;
- (void)setSubTabs:(id)arg1;
- (id)subTabButton;
- (void)setSubTabButton:(id)arg1;
- (void).cxx_destruct;
@end
