@interface MMPageSheetMgr : MMRootService <MMServiceProtocol>
{
    NSMutableArray * _pageSheetStack; // +0x8
}
- (void)onServiceInit;
- (void)addPageSheet:(id)arg1 animated:(BOOL)arg2;
- (void)removePageSheet:(id)arg1 animated:(BOOL)arg2;
- (id)findStackItem:(id)arg1;
- (void)compact;
- (void)updatePageSheetOverlayStatus:(BOOL)arg1;
- (id)topPageSheet;
- (id)pageSheetStack;
- (void)setPageSheetStack:(id)arg1;
- (void).cxx_destruct;
@end
