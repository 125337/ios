@interface MJComposingBGMAdjustHalfScreenViewController : MMPageSheetBaseViewController <MJComposingBGMAdjustContentViewDelegate>
{
    BOOL _isShowingInView; // +0x70
    MJComposingBGMAdjustViewModel * _viewModel; // +0x78
    id <MJComposingBGMAdjustHalfScreenViewControllerDelegate> _delegate; // +0x80
    MJComposingBGMAdjustContentView * _contentView; // +0x88
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupPageSheetConfig;
- (void)resetToMainPanel;
- (void)update;
- (void)didCloseBGMAdjustPanel;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (id)viewModel;
- (BOOL)isShowingInView;
- (void)setIsShowingInView:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
