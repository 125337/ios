@interface MMOrderCenterPivotViewItem : NSObject
{
    BOOL _hideNumber; // +0x8
    BOOL _viewControllerAttached; // +0x9
    unsigned int _orderType; // +0xc
    MMOrderCenterPivotTabView * _tabView; // +0x10
    UIViewController * _viewController; // +0x18
}
- (id)initWithDisplayName:(id)arg1 numbering:(long long)arg2 viewController:(id)arg3 orderType:(unsigned int)arg4;
- (void)setHideNumber:(BOOL)arg1;
- (BOOL)hideNumber;
- (unsigned int)orderType;
- (void)setOrderType:(unsigned int)arg1;
- (id)tabView;
- (void)setTabView:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (BOOL)viewControllerAttached;
- (void)setViewControllerAttached:(BOOL)arg1;
- (void).cxx_destruct;
@end
