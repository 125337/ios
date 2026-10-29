@interface ContactsTagAndAuthorityListViewController : MMUIViewController <ContactTagListViewControllerDelegate>
{
    MMBarItemCustomView * _tabContainerView; // +0x70
    UIButton * _tagButton; // +0x78
    UIButton * _permissionButton; // +0x80
    UIView * _indicatorView; // +0x88
    ContactTagListViewController * _tagListVC; // +0x90
    ContactsAuthorityListViewController * _authorityVC; // +0x98
    UIViewController * _currentChildVC; // +0xa0
    long long _currentTab; // +0xa8
}
- (void)viewDidLoad;
- (void)setupTabView;
- (void)setupChildViewControllers;
- (void)onTagButtonClicked;
- (void)onPermissionButtonClicked;
- (void)selectTab:(long long)arg1 animated:(BOOL)arg2;
- (void)updateTabButtonAppearance;
- (void)updateIndicatorPosition:(BOOL)arg1;
- (void)switchToViewController:(id)arg1;
- (BOOL)handleQuitEditMode:(id)arg1;
- (void)contactTagListViewController:(id)arg1 didUpdateLabelOrderWithSuccess:(BOOL)arg2;
- (id)tabContainerView;
- (void)setTabContainerView:(id)arg1;
- (id)tagButton;
- (void)setTagButton:(id)arg1;
- (id)permissionButton;
- (void)setPermissionButton:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)tagListVC;
- (void)setTagListVC:(id)arg1;
- (id)authorityVC;
- (void)setAuthorityVC:(id)arg1;
- (id)currentChildVC;
- (void)setCurrentChildVC:(id)arg1;
- (long long)currentTab;
- (void)setCurrentTab:(long long)arg1;
- (void).cxx_destruct;
@end
