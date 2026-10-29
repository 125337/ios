@interface WCTabBarControllerSidebarAdapter : NSObject
{
    BOOL _hidden; // +0x8
    id <UITabBarControllerSidebarDelegate> _delegate; // +0x10
    long long _preferredLayout; // +0x18
    UIDeferredMenuElement * _navigationOverflowItems; // +0x20
    id <UIContentConfiguration> _headerContentConfiguration; // +0x28
    id <UIContentConfiguration> _footerContentConfiguration; // +0x30
    UIView * _bottomBarView; // +0x38
}
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
- (void)scrollToTarget:(id)arg1 animated:(BOOL)arg2;
- (void)reconfigureItemForTab:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (long long)preferredLayout;
- (void)setPreferredLayout:(long long)arg1;
- (id)navigationOverflowItems;
- (void)setNavigationOverflowItems:(id)arg1;
- (id)headerContentConfiguration;
- (void)setHeaderContentConfiguration:(id)arg1;
- (id)footerContentConfiguration;
- (void)setFooterContentConfiguration:(id)arg1;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg1;
- (void).cxx_destruct;
@end
