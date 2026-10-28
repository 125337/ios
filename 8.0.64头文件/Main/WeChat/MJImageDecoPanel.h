@interface MJImageDecoPanel : MJImagePanel <MJImageMaterialPickerDelegate, MJEmotionViewDelegate, MJPageViewV2Delegate, MJPageViewV2DataSource>
{
    id <MJImageDecoPanelDelegate> _delegate; // +0x8
    MJImageComposingViewModel * _viewModel; // +0x10
    MJImageMaterialPicker * _materialPicker; // +0x18
    MJEmotionView * _emotionView; // +0x20
    MJPageViewV2 * _pageView; // +0x28
    NSArray * _pageTitles; // +0x30
}
- (id)initWithViewModel:(id)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)numberOfItemsInPageView:(id)arg1;
- (id)pageView:(id)arg1 titleForItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 contentForItemAtIndex:(long long)arg2;
- (void)imageMaterialPicker:(id)arg1 didSelectItem:(id)arg2;
- (void)emotionView:(id)arg1 didSelectItem:(id)arg2;
- (void)_updateWhenWhereDataAndShowEditPanel;
- (void)_updateWhenData;
- (void)_updateWhereDataWithCompletion:(id /* block */)arg1;
- (void)_requestLocationItemForScene:(id)arg1 layer:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)processRenderTapWithLayer:(id)arg1 events:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)materialPicker;
- (void)setMaterialPicker:(id)arg1;
- (id)emotionView;
- (void)setEmotionView:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (id)pageTitles;
- (void)setPageTitles:(id)arg1;
- (void).cxx_destruct;
@end
