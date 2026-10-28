@interface WCCoinInterceptLogic : MMObject
{
    id <MMPageSheetProvider> _pageSheetProvider; // +0x8
}
- (BOOL)shouldHandleIntercept:(id)arg1;
- (void)handleInterceptWin:(id)arg1 didClickBlock:(id /* block */)arg2;
- (void)handleJumpInfo:(id)arg1 didClickBlock:(id /* block */)arg2;
- (id)pageSheetProvider;
- (void)setPageSheetProvider:(id)arg1;
- (void).cxx_destruct;
@end
