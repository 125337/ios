@interface WCFinderMultiMenuItemHelper : NSObject
{
    BOOL _fade; // +0x8
    double _itemPadding; // +0x10
    UIBarButtonItem * _barItem; // +0x18
    UIViewController * _vc; // +0x20
    UIView * _container; // +0x28
}
- (id)init:(id)arg1;
- (id)barItem;
- (void)addView:(id)arg1;
- (void)_updateLayout;
- (void)layout;
- (void)_onSubviewHiddenChange:(id)arg1;
- (double)itemPadding;
- (void)setItemPadding:(double)arg1;
- (BOOL)fade;
- (void)setFade:(BOOL)arg1;
- (void)setBarItem:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (void).cxx_destruct;
@end

