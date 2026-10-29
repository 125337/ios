@interface MMAnchoredMenu : NSObject
{
    BOOL _hasConfiguredLeftSubMenuMargin; // +0x8
    BOOL _hasConfiguredLeftSubMenuHeaderMargin; // +0x9
    NSArray * _configuredItems; // +0x10
    UIView * _configuredAnchorView; // +0x18
    double _configuredLeftMenuMargin; // +0x20
    double _configuredRightMenuMargin; // +0x28
    double _configuredLeftSubMenuMargin; // +0x30
    double _configuredRightSubMenuMargin; // +0x38
    NSString * _configuredTitle; // +0x40
    double _configuredLeftSubMenuHeaderMargin; // +0x48
    id /* block */ _configuredDismissHandler; // +0x50
    MMAnchoredMenuOverlayView * _displayingView; // +0x58
}
+ (id)menu;
- (id)init;
- (id /* block */)items;
- (id /* block */)title;
- (id /* block */)anchorView;
- (id /* block */)leftMenuMargin;
- (id /* block */)rightMenuMargin;
- (id /* block */)leftSubMenuMargin;
- (id /* block */)rightSubMenuMargin;
- (id /* block */)leftSubMenuHeaderMargin;
- (id /* block */)dismissHandler;
- (id /* block */)showMenu;
- (id /* block */)hideMenu;
- (void)privateShowMenu;
- (void)privateHideMenu;
- (id)configuredItems;
- (void)setConfiguredItems:(id)arg1;
- (id)configuredAnchorView;
- (void)setConfiguredAnchorView:(id)arg1;
- (double)configuredLeftMenuMargin;
- (void)setConfiguredLeftMenuMargin:(double)arg1;
- (double)configuredRightMenuMargin;
- (void)setConfiguredRightMenuMargin:(double)arg1;
- (double)configuredLeftSubMenuMargin;
- (void)setConfiguredLeftSubMenuMargin:(double)arg1;
- (double)configuredRightSubMenuMargin;
- (void)setConfiguredRightSubMenuMargin:(double)arg1;
- (BOOL)hasConfiguredLeftSubMenuMargin;
- (void)setHasConfiguredLeftSubMenuMargin:(BOOL)arg1;
- (id)configuredTitle;
- (void)setConfiguredTitle:(id)arg1;
- (double)configuredLeftSubMenuHeaderMargin;
- (void)setConfiguredLeftSubMenuHeaderMargin:(double)arg1;
- (BOOL)hasConfiguredLeftSubMenuHeaderMargin;
- (void)setHasConfiguredLeftSubMenuHeaderMargin:(BOOL)arg1;
- (id /* block */)configuredDismissHandler;
- (void)setConfiguredDismissHandler:(id /* block */)arg1;
- (id)displayingView;
- (void)setDisplayingView:(id)arg1;
- (void).cxx_destruct;
@end
