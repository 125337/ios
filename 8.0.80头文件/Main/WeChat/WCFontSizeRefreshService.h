@interface WCFontSizeRefreshService : MMUserService <MMServiceProtocol, MMUIViewControllerExt>
{
    BOOL _needsRefreshAtTabAppear; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (BOOL)needsRefreshAtTabAppear;
- (void)setNeedsRefreshAtTabAppear:(BOOL)arg1;
@end
