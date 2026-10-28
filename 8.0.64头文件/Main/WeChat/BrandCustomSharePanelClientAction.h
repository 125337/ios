@interface BrandCustomSharePanelClientAction : BrandCustomSharePanelAction
{
    BOOL _isHidden; // +0x8
    BOOL _refreshBeforeShow; // +0x9
    BOOL _keepPanelOpen; // +0xa
    id /* block */ _actionBlock; // +0x10
    id /* block */ _exposeBlock; // +0x18
}
- (BOOL)isHidden;
- (void)setIsHidden:(BOOL)arg1;
- (BOOL)refreshBeforeShow;
- (void)setRefreshBeforeShow:(BOOL)arg1;
- (BOOL)keepPanelOpen;
- (void)setKeepPanelOpen:(BOOL)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id /* block */)exposeBlock;
- (void)setExposeBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
