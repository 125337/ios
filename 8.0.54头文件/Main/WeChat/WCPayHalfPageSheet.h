@interface WCPayHalfPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>
{
    BOOL _bIsShowing; // +0x8
    WCPayHalfPageSheetConfig * _config; // +0x10
    MMPageSheetAdapter * _pageAdapter; // +0x18
    UIView * _pageSheetDetailView; // +0x20
}
- (id)initWithConfig:(id)arg1;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (void)showPageSheet;
- (void)dismissPageSheet:(BOOL)arg1;
- (BOOL)isTipsPageSheetShowing;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillDisappear:(id)arg1;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)bIsShowing;
- (void)setBIsShowing:(BOOL)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (id)pageSheetDetailView;
- (void)setPageSheetDetailView:(id)arg1;
- (void).cxx_destruct;
@end

