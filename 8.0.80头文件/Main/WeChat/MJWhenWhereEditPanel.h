@interface MJWhenWhereEditPanel : MJImagePanel <MJImageMaterialPickerDelegate, MJPageViewV2Delegate, MJPageViewV2DataSource>
{
    id <MJWhenWhereEditPanelDelegate> _delegate; // +0x8
    MJImageComposingViewModel * _viewModel; // +0x10
    MJImageMaterialPicker * _materialPicker; // +0x18
    MJDatePickerView * _datePicker; // +0x20
    MJGeographicPicker * _geographicPicker; // +0x28
    MJPageViewV2 * _pageView; // +0x30
    NSArray * _pageTitles; // +0x38
    MMUIButton * _doneButton; // +0x40
}
- (id)initWithViewModel:(id)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)numberOfItemsInPageView:(id)arg1;
- (id)pageView:(id)arg1 titleForItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 contentForItemAtIndex:(long long)arg2;
- (void)pageView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)imageMaterialPicker:(id)arg1 didSelectItem:(id)arg2;
- (void)_reloadDatePicker;
- (void)_updateWhen:(id)arg1;
- (void)_reloadGeographicPicker;
- (void)_forwardUpdateWhere;
- (void)updateLocationWithItem:(id)arg1;
- (void)doneButtonTouchUpInside:(id)arg1;
- (BOOL)isEditingPanel;
- (BOOL)processRenderTapWithLayer:(id)arg1 events:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)materialPicker;
- (void)setMaterialPicker:(id)arg1;
- (id)datePicker;
- (void)setDatePicker:(id)arg1;
- (id)geographicPicker;
- (void)setGeographicPicker:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (id)pageTitles;
- (void)setPageTitles:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end
