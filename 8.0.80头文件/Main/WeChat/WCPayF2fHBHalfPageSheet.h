@interface WCPayF2fHBHalfPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>
{
    MMPageSheetAdapter * _pageAdapter; // +0x8
    UIView * _pageSheetDetailView; // +0x10
    id /* block */ _dismissCompletion; // +0x18
    double _lastLayoutWidth; // +0x20
}
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (BOOL)shouldRebuildDetailViewContent;
- (void)rebuildDetailViewContentIfNeeded;
- (void)showPageSheetWithCompletion:(id /* block */)arg1 dismissCompletion:(id /* block */)arg2;
- (void)dismissPageSheet:(BOOL)arg1;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (void)pageSheetDidRotation:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)pageSheetDetailView;
- (void)setPageSheetDetailView:(id)arg1;
- (id /* block */)dismissCompletion;
- (void)setDismissCompletion:(id /* block */)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
