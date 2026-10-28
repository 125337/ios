@interface MJComposingPanelView : UIView
{
    MJComposingPanelViewModel * _viewModel; // +0x8
    UIView * _contentView; // +0x10
    UIViewController * _contentViewController; // +0x18
    double _panelHeight; // +0x20
}
- (id)initWithViewModel:(id)arg1 contentView:(id)arg2;
- (id)initWithViewModel:(id)arg1 contentViewController:(id)arg2;
- (id)description;
- (id)viewModel;
- (id)contentView;
- (id)contentViewController;
- (double)panelHeight;
- (void)setPanelHeight:(double)arg1;
- (void).cxx_destruct;
@end
