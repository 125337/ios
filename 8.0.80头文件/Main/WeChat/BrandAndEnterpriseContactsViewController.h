@interface BrandAndEnterpriseContactsViewController : MMUIViewController
{
    MMBarItemCustomView * _tabContainerView; // +0x70
    UIButton * _brandButton; // +0x78
    UIButton * _enterpriseButton; // +0x80
    UIView * _indicatorView; // +0x88
    BrandAndServiceContactsViewController * _brandVC; // +0x90
    EnterpriseBrandContactsForListViewController * _enterpriseVC; // +0x98
    UIViewController * _currentChildVC; // +0xa0
    long long _currentTab; // +0xa8
}
- (void)viewDidLoad;
- (void)setupTabView;
- (void)setupChildViewControllers;
- (void)onBrandButtonClicked;
- (void)onEnterpriseButtonClicked;
- (void)selectTab:(long long)arg1 animated:(BOOL)arg2;
- (void)updateRightBarButtonItems;
- (void)updateTabButtonAppearance;
- (void)updateIndicatorPosition:(BOOL)arg1;
- (void)switchToViewController:(id)arg1;
- (id)tabContainerView;
- (void)setTabContainerView:(id)arg1;
- (id)brandButton;
- (void)setBrandButton:(id)arg1;
- (id)enterpriseButton;
- (void)setEnterpriseButton:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)brandVC;
- (void)setBrandVC:(id)arg1;
- (id)enterpriseVC;
- (void)setEnterpriseVC:(id)arg1;
- (id)currentChildVC;
- (void)setCurrentChildVC:(id)arg1;
- (long long)currentTab;
- (void)setCurrentTab:(long long)arg1;
- (void).cxx_destruct;
@end
