@interface WCTabBarControllerCompatibilityState : NSObject
{
    UINavigationController * _moreNavigationController; // +0x8
    id _sidebarAdapter; // +0x10
    NSArray * _customizableViewControllers; // +0x18
    UILayoutGuide * _contentLayoutGuide; // +0x20
    NSLayoutConstraint * _contentLayoutGuideBottomConstraint; // +0x28
    long long _mode; // +0x30
    NSString * _customizationIdentifier; // +0x38
    NSArray * _compactTabIdentifiers; // +0x40
    NSArray * _tabs; // +0x48
    NSArray * _viewControllerTabs; // +0x50
    UITabAccessory * _bottomAccessory; // +0x58
    long long _minimizeBehavior; // +0x60
}
- (id)moreNavigationController;
- (void)setMoreNavigationController:(id)arg1;
- (id)sidebarAdapter;
- (void)setSidebarAdapter:(id)arg1;
- (id)customizableViewControllers;
- (void)setCustomizableViewControllers:(id)arg1;
- (id)contentLayoutGuide;
- (void)setContentLayoutGuide:(id)arg1;
- (id)contentLayoutGuideBottomConstraint;
- (void)setContentLayoutGuideBottomConstraint:(id)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)customizationIdentifier;
- (void)setCustomizationIdentifier:(id)arg1;
- (id)compactTabIdentifiers;
- (void)setCompactTabIdentifiers:(id)arg1;
- (id)tabs;
- (void)setTabs:(id)arg1;
- (id)viewControllerTabs;
- (void)setViewControllerTabs:(id)arg1;
- (id)bottomAccessory;
- (void)setBottomAccessory:(id)arg1;
- (long long)minimizeBehavior;
- (void)setMinimizeBehavior:(long long)arg1;
- (void).cxx_destruct;
@end
