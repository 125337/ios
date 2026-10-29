@interface MJImageAddTextPanel : MJImagePanel <MJImageMaterialPickerDelegate, MJPageViewV2Delegate, MJPageViewV2DataSource>
{
    id <MJImageAddTextPanelDelegate> _delegate; // +0x8
    MJImageComposingViewModel * _viewModel; // +0x10
    MJImageMaterialPicker * _materialPicker; // +0x18
    MJPageViewV2 * _pageView; // +0x20
    NSArray * _pageTitles; // +0x28
}
- (id)initWithViewModel:(id)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)numberOfItemsInPageView:(id)arg1;
- (id)pageView:(id)arg1 titleForItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 contentForItemAtIndex:(long long)arg2;
- (void)imageMaterialPicker:(id)arg1 didSelectItem:(id)arg2;
- (void)_addTextWithMaterialItem:(id)arg1;
- (BOOL)processRenderTapWithLayer:(id)arg1 events:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)materialPicker;
- (void)setMaterialPicker:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (id)pageTitles;
- (void)setPageTitles:(id)arg1;
- (void).cxx_destruct;
@end
