@interface MMFinderLiveBottomTextButton : WCLiveBottomTextButton
{
    BOOL _exposed; // +0x8
    BOOL _hideServerRedDot; // +0x9
    id /* block */ _redDotQueryBlock; // +0x10
    id /* block */ _exposeBlock; // +0x18
    NSString * _redDotPath; // +0x20
    id /* block */ _shouldShouldRedDotPredicate; // +0x28
}
- (void)reloadRedDot;
- (void)setRedDotPath:(id)arg1;
- (void)markExposed;
- (void)toggleServerRedDotHidden:(BOOL)arg1;
- (void)updateBadgeNum:(unsigned long long)arg1;
- (void)updateBadgeValue:(id)arg1;
- (void)updateRedDotAppearance:(BOOL)arg1;
- (id /* block */)redDotQueryBlock;
- (void)setRedDotQueryBlock:(id /* block */)arg1;
- (id /* block */)exposeBlock;
- (void)setExposeBlock:(id /* block */)arg1;
- (id)redDotPath;
- (BOOL)exposed;
- (void)setExposed:(BOOL)arg1;
- (id /* block */)shouldShouldRedDotPredicate;
- (void)setShouldShouldRedDotPredicate:(id /* block */)arg1;
- (BOOL)hideServerRedDot;
- (void)setHideServerRedDot:(BOOL)arg1;
- (void).cxx_destruct;
@end

