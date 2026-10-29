@interface MJActionPanelView : MMUIView <MJActionPanelMainMenuViewDelegate>
{
    MJActionPanelViewModel * _viewModel; // +0x8
    id <MJActionPanelViewDelegate> _delegate; // +0x10
    MJActionPanelMainMenuView * _mainMenuView; // +0x18
}
- (id)initWithViewModel:(id)arg1;
- (void)commonInit;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mainMenuView;
- (void)setMainMenuView:(id)arg1;
- (void).cxx_destruct;
@end

