@interface MJShootComposingTemplatePanelHalfScreenViewController : MMPageSheetBaseViewController <MJShootComposingTemplatePanelViewDelegate>
{
    BOOL _useIphoneUIStyleInIpad; // +0x70
    UIColor * _maskBackgroundColor; // +0x78
    id <MJShootComposingTemplatePanelHalfScreenViewControllerDelegate> _delegate; // +0x80
    MJShootComposingTemplatePanelViewModel * _viewModel; // +0x88
    MJShootComposingTemplatePanelView * _panelView; // +0x90
    UIView * _publishingPanelHostView; // +0x98
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (double)pageSheetContentWidth;
- (double)pageSheetContentHeight;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)pageSheetDidChangeVisibleHeight:(double)arg1;
- (void)shootTemplatePanelView:(id)arg1 didManuallyTapTemplateItem:(id)arg2;
- (void)shootTemplatePanelView:(id)arg1 didSelectItem:(id)arg2 atIndex:(unsigned long long)arg3 tabID:(unsigned long long)arg4 tabAtIndex:(long long)arg5;
- (void)shootTemplatePanelView:(id)arg1 willDisplayTemplateItem:(id)arg2 atIndex:(unsigned long long)arg3 tabID:(unsigned long long)arg4 tabAtIndex:(long long)arg5 isReloadingData:(BOOL)arg6;
- (void)shootTemplatePanelView:(id)arg1 didEndDisplayingTemplateItem:(id)arg2 tabID:(unsigned long long)arg3 atIndex:(unsigned long long)arg4 isReloadingData:(BOOL)arg5;
- (void)shootTemplatePanelView:(id)arg1 didSelectTab:(id)arg2 atIndex:(long long)arg3;
- (void)shootTemplatePanelView:(id)arg1 didTapTemplateEntryItem:(id)arg2;
- (void)shootTemplatePanelView:(id)arg1 didReloadTabID:(unsigned long long)arg2 atIndex:(long long)arg3;
- (void)reloadData;
- (id)maskBackgroundColor;
- (void)setMaskBackgroundColor:(id)arg1;
- (BOOL)useIphoneUIStyleInIpad;
- (void)setUseIphoneUIStyleInIpad:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)publishingPanelHostView;
- (void)setPublishingPanelHostView:(id)arg1;
- (void).cxx_destruct;
@end
