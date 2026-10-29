@interface MJComposingTextPageSheetViewController : MMPageSheetBaseViewController
{
    MJComposingPagePanelView * _pagePanelView; // +0x70
    id <MJComposingTextPageSheetViewControllerDelegate> _delegate; // +0x78
    double _keyboardAvoidanceOffset; // +0x80
    double _contentHeight; // +0x88
    double _notifiedContentHeight; // +0x90
    UIColor * _contentBackgroundColor; // +0x98
    UIColor * _grabBarColor; // +0xa0
    UIView * _pageSheetHostView; // +0xa8
}
- (id)initWithPagePanelView:(id)arg1 contentHeight:(double)arg2;
- (id)initWithPagePanelView:(id)arg1 contentHeight:(double)arg2 contentBackgroundColor:(id)arg3 grabBarColor:(id)arg4;
- (void)dealloc;
- (id)pagePanelViewModel;
- (void)viewDidLoad;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (void)viewDidLayoutSubviews;
- (void)setupPageSheetConfig;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)updateKeyboardAvoidanceOffset:(double)arg1;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)pagePanelView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)keyboardAvoidanceOffset;
- (void)setKeyboardAvoidanceOffset:(double)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (double)notifiedContentHeight;
- (void)setNotifiedContentHeight:(double)arg1;
- (id)contentBackgroundColor;
- (void)setContentBackgroundColor:(id)arg1;
- (id)grabBarColor;
- (void)setGrabBarColor:(id)arg1;
- (id)pageSheetHostView;
- (void)setPageSheetHostView:(id)arg1;
- (void).cxx_destruct;
@end
