@interface MJMovieTextEditInspector : UIViewController <MJPageViewDelegate, MJPageViewDataSource, MMGrowTextViewDelegate, IMMGrowTextViewExt, MJMovieTextSuggestionViewDelegate, MJStyleEditViewControllerDelegate, MJStickerPickerViewControllerDelegate>
{
    BOOL _shouldShowSubTextViews; // +0x8
    BOOL _shouldShowMovieTitleSuggestions; // +0x9
    BOOL _bFirstAppeared; // +0xa
    BOOL _isEditingSubText; // +0xb
    BOOL _isUsingSuggestion; // +0xc
    BOOL _isShowingKeyboard; // +0xd
    id <MJMovieTextEditInspectorDelegate> _delegate; // +0x10
    MJMovieTextEditViewModel * _viewModel; // +0x18
    MJPublisherInspectorContainerView * _containerView; // +0x20
    UIView * _inputContainerView; // +0x28
    MMGrowTextView * _growTextView; // +0x30
    MMGrowTextView * _growSubTextView; // +0x38
    MMTextView * _showingTextView; // +0x40
    MMTextView * _showingSubTextView; // +0x48
    MMUIButton * _doneBtn; // +0x50
    MMUIButton * _deleteBtn; // +0x58
    MJPageView * _pageView; // +0x60
    MJMovieTextSuggestionView * _suggestionCollectionView; // +0x68
    NSString * _prevTextUnmarked; // +0x70
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)clearText;
- (void)reloadText;
- (void)reloadPlaceholder;
- (void)reloadSuggestions:(id)arg1;
- (void)setupViews;
- (void)setupInputContainer;
- (void)containerDidChangeHeight;
- (void)textViewBecomeFirstResponder:(id)arg1;
- (void)textViewsResignFirstResponderIfNeeded;
- (void)clickedDoneBtn:(id)arg1;
- (void)clickedDeleteBtn:(id)arg1;
- (BOOL)disMissSelf;
- (void)movieTextSuggestionCollectionView:(id)arg1 didSelectSuggestionWithTitle:(id)arg2;
- (void)onTextViewDidChange:(id)arg1;
- (void)TextViewExceedMaxLength:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewEndEditing:(id)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)onClickTextViewSendText:(id)arg1;
- (long long)numberOfPagesInPageView:(id)arg1;
- (id)pageView:(id)arg1 titleItemAtIndex:(long long)arg2;
- (id)pageView:(id)arg1 contentItemAtIndex:(long long)arg2;
- (void)pageView:(id)arg1 didAppearPageAtIndex:(long long)arg2;
- (void)styleEditVC:(id)arg1 didSelectedMaterial:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectedFont:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectedColor:(id)arg2;
- (void)styleEditVC:(id)arg1 didSelectAnimPreset:(id)arg2;
- (void)styleEditVC:(id)arg1 didEndChangeMaterialWitDataType:(unsigned long long)arg2;
- (void)stickerPicker:(id)arg1 didChangeSelection:(id)arg2 atIndex:(long long)arg3;
- (id)textUnmarked;
- (id)containerView;
- (id)pageView;
- (id)inputContainerView;
- (void)updateInputContainerViewHeight;
- (id)growTextView;
- (id)growSubTextView;
- (id)showingTextView;
- (void)didTappedShowingTextView;
- (id)showingSubTextView;
- (void)didTappedShowingSubTextView;
- (id)doneBtn;
- (void)updateDoneBtn;
- (id)deleteBtn;
- (void)updateDeleteBtn;
- (id)suggestionCollectionView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)shouldShowSubTextViews;
- (void)setShouldShowSubTextViews:(BOOL)arg1;
- (BOOL)shouldShowMovieTitleSuggestions;
- (void)setShouldShowMovieTitleSuggestions:(BOOL)arg1;
- (void)setContainerView:(id)arg1;
- (void)setInputContainerView:(id)arg1;
- (void)setGrowTextView:(id)arg1;
- (void)setGrowSubTextView:(id)arg1;
- (void)setShowingTextView:(id)arg1;
- (void)setShowingSubTextView:(id)arg1;
- (void)setDoneBtn:(id)arg1;
- (void)setDeleteBtn:(id)arg1;
- (void)setPageView:(id)arg1;
- (void)setSuggestionCollectionView:(id)arg1;
- (id)prevTextUnmarked;
- (void)setPrevTextUnmarked:(id)arg1;
- (BOOL)bFirstAppeared;
- (void)setBFirstAppeared:(BOOL)arg1;
- (BOOL)isEditingSubText;
- (void)setIsEditingSubText:(BOOL)arg1;
- (BOOL)isUsingSuggestion;
- (void)setIsUsingSuggestion:(BOOL)arg1;
- (BOOL)isShowingKeyboard;
- (void)setIsShowingKeyboard:(BOOL)arg1;
- (void).cxx_destruct;
@end
