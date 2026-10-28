@interface WCSearchBar : UIView <UITextFieldDelegate, WCSearchTextViewDelegate, _TtP6WeChat39SearchInteractiveVoiceInputViewDelegate_>
{
    BOOL _enableVoiceInput; // +0x8
    BOOL _enableNewBtnMode; // +0x9
    BOOL _enableLargeInput; // +0xa
    BOOL _enableRemoveEditingWords; // +0xb
    BOOL _isLargeInputBox; // +0xc
    BOOL _isReplaceText; // +0xd
    BOOL _showInputBoxLine; // +0xe
    BOOL _isFTS; // +0xf
    unsigned int _lastMaxTextViewLines; // +0x10
    unsigned int _changeType; // +0x14
    id <WCSearchBarDelegate> _searchBarDelegate; // +0x18
    MMTagTextField * _textField; // +0x20
    UIButton * _clearButton; // +0x28
    double _fKeyboardHeight; // +0x30
    UIView * _searchBoxContainer; // +0x38
    UIBarButtonItem * _leftBarButtonItem; // +0x40
    UIBarButtonItem * _rightBarButtonItem; // +0x48
    NSArray * _checkBoxes; // +0x50
    NSArray * _actionButtons; // +0x58
    unsigned long long _clearButtonMode; // +0x60
    WCSearchViewController * _presentingViewController; // +0x68
    UIColor * _voiceButtonBackgroundColor; // +0x70
    UIView * _clearButtonSpaceView; // +0x78
    MMUILabel * _titleLabel; // +0x80
    UIColor * _searchBoxContainerColor; // +0x88
    UIView * _bottomLineView; // +0x90
    UIView * _leftBoxSpacer; // +0x98
    UIView * _rightBoxSpacer; // +0xa0
    _TtC6WeChat39SearchVoiceInputAccessoryViewController * _inputAccessoryViewController; // +0xa8
    UIView * _voiceInputView; // +0xb0
    _TtC6WeChat36SearchInteractiveVoiceInputViewModel * _voiceInputViewModel; // +0xb8
    WCSearchTextView * _textView; // +0xc0
    double _expectedHeight; // +0xc8
    UIStackView * _rootStackView; // +0xd0
    UIStackView * _searchBox; // +0xd8
    UIImageView * _leftIconView; // +0xe0
    UILabel * _placeHolderLabel; // +0xe8
    id /* block */ _tapHandler; // +0xf0
    id /* block */ _voiceInputRightOpHandler; // +0xf8
    id /* block */ _voiceInputBottomHandler; // +0x100
    id /* block */ _voiceInputResultHandler; // +0x108
}
- (id)initWithConfig:(CGRect)arg1 config:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setUnactiveStyle;
- (void)setUnactiveStyleWithEnableRestore;
- (void)setUnactiveStyleWithEnableRestoreNoRightBarButton;
- (void)restore;
- (void)onCancelClick;
- (void)initContanerView;
- (void)arrangeBaseUIElements;
- (id)searchBox;
- (id)searchBoxContainer;
- (id)leftIconView;
- (id)textField;
- (id)textView;
- (void)setEnableVoiceInput:(BOOL)arg1;
- (void)addInputBox;
- (void)searchIconTap;
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
- (BOOL)needUpdateSearchBar;
- (double)expectSearchBarHeight;
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
- (void)onJumpToResultPage:(id)arg1;
- (void)showEmptyResultToast;
- (double)voiceInputButtonHeight;
- (BOOL)isUseInteractiveVoiceInput;
- (void)setVoiceButtonBackgroundColor:(id)arg1;
- (BOOL)wcTextViewShouldRespondToKeyBoardEvent;
- (void)wcTextViewDidEnter:(id)arg1;
- (void)wcTextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)wcKeyboardWillShow:(double)arg1;
- (void)wcKeyboardDidShow:(double)arg1;
- (void)wcKeyboardWillHide:(BOOL)arg1;
- (void)wcTextViewBeginEditing:(id)arg1;
- (void)wcTextViewEndEditing:(id)arg1;
- (void)setShowInputBoxLine:(BOOL)arg1;
- (BOOL)inputBoxIsFirstResponder;
- (void)inputBoxResignFirstResponder;
- (void)inputBoxBecomeFirstResponder;
- (void)inputBoxClear;
- (void)inputBoxAdjustHeight;
- (void)inputBoxSetText:(id)arg1;
- (id)inputBoxGetText;
- (id)inputBoxGetSelectedText;
- (void)inputBoxSearchButtonClick;
- (void)inputBoxKeyBoardClick;
- (void)inputBoxTextChanged:(id)arg1 isEditing:(BOOL)arg2;
- (void)inputBoxTextEditingDidBegin:(id)arg1;
- (void)inputBoxTextEditingDidEnd:(id)arg1;
- (void)inputBoxSetChangeType:(unsigned int)arg1;
- (unsigned int)inputBoxGetChangeType;
- (id)searchBarDelegate;
- (void)setSearchBarDelegate:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setClearButton:(id)arg1;
- (double)fKeyboardHeight;
- (void)setSearchBoxContainer:(id)arg1;
- (id)leftBarButtonItem;
- (id)rightBarButtonItem;
- (BOOL)enableVoiceInput;
- (BOOL)enableNewBtnMode;
- (void)setEnableNewBtnMode:(BOOL)arg1;
- (BOOL)enableLargeInput;
- (void)setEnableLargeInput:(BOOL)arg1;
- (BOOL)enableRemoveEditingWords;
- (void)setEnableRemoveEditingWords:(BOOL)arg1;
- (BOOL)isLargeInputBox;
- (void)setIsLargeInputBox:(BOOL)arg1;
- (BOOL)isReplaceText;
- (void)setIsReplaceText:(BOOL)arg1;
- (id)checkBoxes;
- (void)setCheckBoxes:(id)arg1;
- (id)actionButtons;
- (void)setActionButtons:(id)arg1;
- (BOOL)showInputBoxLine;
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
- (void)setTextView:(id)arg1;
- (unsigned int)lastMaxTextViewLines;
- (void)setLastMaxTextViewLines:(unsigned int)arg1;
- (double)expectedHeight;
- (void)setExpectedHeight:(double)arg1;
- (unsigned int)changeType;
- (void)setChangeType:(unsigned int)arg1;
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
