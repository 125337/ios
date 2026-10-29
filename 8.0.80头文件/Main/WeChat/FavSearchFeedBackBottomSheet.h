@interface FavSearchFeedBackBottomSheet : MMPageSheetBaseViewController <UITextViewDelegate>
{
    BOOL _keyboardVisible; // +0x70
    SearchRequest_TagSearchResult * _tagSearchResult; // +0x78
    UIView * _contentView; // +0x80
    UIView * _navigationBar; // +0x88
    UIButton * _cancelButton; // +0x90
    UILabel * _titleLabel; // +0x98
    UIButton * _submitButton; // +0xa0
    UIView * _tagContainer; // +0xa8
    UITextView * _textView; // +0xb0
    UILabel * _placeholderLabel; // +0xb8
    NSArray * _tagList; // +0xc0
    NSMutableArray * _tagButtons; // +0xc8
    unsigned long long _feedbackType; // +0xd0
}
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)registerKeyboardObservers;
- (void)onKeyboardWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (id)pageSheetConfig;
- (double)pageSheetContentHeight;
- (double)safeAreaBottomInset;
- (void)setupContentUI;
- (void)setupNavigationBar;
- (id)imageWithColor:(id)arg1;
- (void)setupTagContainer;
- (id)createTagButton:(id)arg1;
- (void)setupTextView;
- (void)layoutContentSubviews;
- (void)layoutTagButtons;
- (double)calculateTagContainerHeight;
- (void)viewDidLayoutSubviews;
- (void)onCancelTapped;
- (void)onSubmitTapped;
- (void)onTagTapped:(id)arg1;
- (void)updateSubmitButtonEnabled;
- (id)tagSelectedBackgroundColor;
- (id)tagSelectedBorderColor;
- (void)traitCollectionDidChange:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)tagSearchResult;
- (void)setTagSearchResult:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)submitButton;
- (void)setSubmitButton:(id)arg1;
- (id)tagContainer;
- (void)setTagContainer:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:(id)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (id)tagButtons;
- (void)setTagButtons:(id)arg1;
- (unsigned long long)feedbackType;
- (void)setFeedbackType:(unsigned long long)arg1;
- (BOOL)keyboardVisible;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void).cxx_destruct;
@end
