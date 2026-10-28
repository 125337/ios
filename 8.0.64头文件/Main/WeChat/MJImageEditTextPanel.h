@interface MJImageEditTextPanel : MJImagePanel <MJImageMaterialPickerDelegate, MJImageTextInputViewDelegate, MJPageViewV2Delegate, MJPageViewV2DataSource>
{
    id <MJImageEditTextPanelDelegate> _delegate; // +0x8
    MJImageComposingViewModel * _viewModel; // +0x10
    MJImageTextInputView * _textInputView; // +0x18
    MJImageMaterialPicker * _materialPicker; // +0x20
    MJPageViewV2 * _pageView; // +0x28
    NSArray * _pageTitles; // +0x30
    double _translateYKeyboardShown; // +0x38
}
- (id)initWithViewModel:(id)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (long long)numberOfItemsInPageView:(id)arg1;
- (id)pageView:(id)arg1 titleForItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 contentForItemAtIndex:(long long)arg2;
- (void)pageView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)imageMaterialPicker:(id)arg1 didSelectItem:(id)arg2;
- (void)textInputViewDidBeginEditing:(id)arg1;
- (void)textInputViewDidEndEditing:(id)arg1;
- (void)textInputView:(id)arg1 didUpdateText:(id)arg2;
- (void)textInputView:(id)arg1 didUpdateHeight:(double)arg2;
- (void)textInputView:(id)arg1 willShowKeyboard:(double)arg2 animationDuration:(double)arg3 curve:(long long)arg4;
- (void)textInputViewWillHideKeyboard:(id)arg1 animationDuration:(double)arg2 curve:(long long)arg3;
- (void)textInputViewDidFinish:(id)arg1;
- (void)_moveTextInputViewWithTranslateY:(double)arg1 animated:(BOOL)arg2 duration:(double)arg3 curve:(long long)arg4;
- (void)_updateTextWithMaterialItem:(id)arg1;
- (void)_updateText:(id)arg1;
- (BOOL)isEditingPanel;
- (BOOL)processRenderTapWithLayer:(id)arg1 events:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)textInputView;
- (void)setTextInputView:(id)arg1;
- (id)materialPicker;
- (void)setMaterialPicker:(id)arg1;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (id)pageTitles;
- (void)setPageTitles:(id)arg1;
- (double)translateYKeyboardShown;
- (void)setTranslateYKeyboardShown:(double)arg1;
- (void).cxx_destruct;
@end
