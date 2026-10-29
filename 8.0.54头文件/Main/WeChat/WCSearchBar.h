@interface WCSearchBar : UIView <UITextFieldDelegate, _TtP6WeChat39SearchInteractiveVoiceInputViewDelegate_>
{
    BOOL _enableVoiceInput; // +0x8
    BOOL _isFTS; // +0x9
    MMTagTextField * _textField; // +0x10
    UIView * _searchBoxContainer; // +0x18
    UIBarButtonItem * _leftBarButtonItem; // +0x20
    UIBarButtonItem * _rightBarButtonItem; // +0x28
    unsigned long long _clearButtonMode; // +0x30
    WCSearchViewController * _presentingViewController; // +0x38
    UIColor * _voiceButtonBackgroundColor; // +0x40
    UIView * _clearButtonSpaceView; // +0x48
    MMUILabel * _titleLabel; // +0x50
    UIColor * _searchBoxContainerColor; // +0x58
    UIView * _bottomLineView; // +0x60
    UIView * _leftBoxSpacer; // +0x68
    UIView * _rightBoxSpacer; // +0x70
    _TtC6WeChat39SearchVoiceInputAccessoryViewController * _inputAccessoryViewController; // +0x78
    UIView * _voiceInputView; // +0x80
    _TtC6WeChat36SearchInteractiveVoiceInputViewModel * _voiceInputViewModel; // +0x88
    UIButton * _clearButton; // +0x90
    UIStackView * _rootStackView; // +0x98
    UIStackView * _searchBox; // +0xa0
    UIImageView * _leftIconView; // +0xa8
    UILabel * _placeHolderLabel; // +0xb0
    id /* block */ _tapHandler; // +0xb8
    id /* block */ _voiceInputRightOpHandler; // +0xc0
    id /* block */ _voiceInputBottomHandler; // +0xc8
    id /* block */ _voiceInputResultHandler; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setUnactiveStyle;
- (void)initContanerView;
- (void)arrangeBaseUIElements;
- (id)searchBox;
- (id)searchBoxContainer;
- (id)leftIconView;
- (id)textField;
- (void)setEnableVoiceInput:(BOOL)arg1;
- (id)newTextField;
- (id)clearButton;
- (id)clearButtonSpaceView;
- (id)placeHolderLabel;
- (id)titleLabel;
- (id)bottomLineView;
- (void)setShowBottomLine:(BOOL)arg1;
- (BOOL)showBottomLine;
- (void)showClearButtonSpace:(BOOL)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldEditingDidBegin:(id)arg1;
- (void)onTextFieldEditingDidEnd:(id)arg1;
- (void)showTitle:(id)arg1;
- (void)showTextField;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (BOOL)isShowSearchBoxBorder;
- (void)setIsShowSearchBoxBorder:(BOOL)arg1;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1;
- (id)leftIconImage;
- (void)setLeftIconImage:(id)arg1;
- (void)showsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)makeConstraintsForBarButton:(id)arg1;
- (void)addTapSearchAction:(id /* block */)arg1;
- (void)setPresentSearchActive:(BOOL)arg1;
- (void)addVoiceSearchRightOpAction:(id /* block */)arg1;
- (void)addVoiceSearchBottomAction:(id /* block */)arg1;
- (void)addVoiceSearchInputResultAction:(id /* block */)arg1;
- (void)setIsFTS:(BOOL)arg1;
- (id)inputAccessoryViewController;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)applicationResignActive;
- (void)onVoiceInputStart;
- (void)onVoiceInputEnd;
- (void)onVoiceInputTapBackgroud;
- (void)onVoiceInputWithResult:(id)arg1;
- (void)onVoiceInputReleaseTooFast;
- (void)showEmptyResultToast;
- (double)voiceInputButtonHeight;
- (BOOL)isUseInteractiveVoiceInput;
- (void)setVoiceButtonBackgroundColor:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setSearchBoxContainer:(id)arg1;
- (id)leftBarButtonItem;
- (id)rightBarButtonItem;
- (BOOL)enableVoiceInput;
- (unsigned long long)clearButtonMode;
- (void)setClearButtonMode:(unsigned long long)arg1;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (BOOL)isFTS;
- (id)voiceButtonBackgroundColor;
- (void)setClearButtonSpaceView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)searchBoxContainerColor;
- (void)setSearchBoxContainerColor:(id)arg1;
- (void)setBottomLineView:(id)arg1;
- (id)leftBoxSpacer;
- (void)setLeftBoxSpacer:(id)arg1;
- (id)rightBoxSpacer;
- (void)setRightBoxSpacer:(id)arg1;
- (void)setInputAccessoryViewController:(id)arg1;
- (id)voiceInputView;
- (void)setVoiceInputView:(id)arg1;
- (id)voiceInputViewModel;
- (void)setVoiceInputViewModel:(id)arg1;
- (void)setClearButton:(id)arg1;
- (id)rootStackView;
- (void)setRootStackView:(id)arg1;
- (void)setSearchBox:(id)arg1;
- (void)setLeftIconView:(id)arg1;
- (void)setPlaceHolderLabel:(id)arg1;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (id /* block */)voiceInputRightOpHandler;
- (void)setVoiceInputRightOpHandler:(id /* block */)arg1;
- (id /* block */)voiceInputBottomHandler;
- (void)setVoiceInputBottomHandler:(id /* block */)arg1;
- (id /* block */)voiceInputResultHandler;
- (void)setVoiceInputResultHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

