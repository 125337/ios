@interface WCSearchBar : UIView <UITextFieldDelegate, WCSearchTextViewDelegate, UIGestureRecognizerDelegate, _TtP6WeChat39SearchInteractiveVoiceInputViewDelegate_>
{
    BOOL _enableVoiceInput; // +0x8
    BOOL _enableNewBtnMode; // +0x9
    BOOL _enableLargeInput; // +0xa
    BOOL _suppressAutoFocus; // +0xb
    BOOL _enableRemoveEditingWords; // +0xc
    BOOL _isLargeInputBox; // +0xd
    BOOL _isReplaceText; // +0xe
    BOOL _showInputBoxLine; // +0xf
    BOOL _isFTS; // +0x10
    BOOL _voiceEntryGuideVisible; // +0x11
    BOOL _voiceEntryInputBoxStyleActive; // +0x12
    BOOL _hasExplicitPlaceholder; // +0x13
    BOOL _placeholderAlignsToLeading; // +0x14
    BOOL _longPressSearchExpandedHitTestActive; // +0x15
    BOOL _synchronousLargeInputTransitionEnabled; // +0x16
    unsigned int _lastMaxTextViewLines; // +0x18
    unsigned int _changeType; // +0x1c
    id <WCSearchBarDelegate> _searchBarDelegate; // +0x20
    MMTagTextField * _textField; // +0x28
    UIButton * _clearButton; // +0x30
    double _fKeyboardHeight; // +0x38
    UIView * _searchBoxContainer; // +0x40
    UIBarButtonItem * _leftBarButtonItem; // +0x48
    UIBarButtonItem * _rightBarButtonItem; // +0x50
    double _rightBarButtonTrailingInset; // +0x58
    NSDictionary * _placeholderTag; // +0x60
    NSArray * _checkBoxes; // +0x68
    NSArray * _actionButtons; // +0x70
    unsigned long long _clearButtonMode; // +0x78
    WCSearchViewController * _presentingViewController; // +0x80
    UIColor * _voiceButtonBackgroundColor; // +0x88
    UIView * _clearButtonSpaceView; // +0x90
    long long _voiceEntryStyle; // +0x98
    UIView * _voiceEntryGuideContainer; // +0xa0
    UIImageView * _voiceEntryGuideView; // +0xa8
    id /* block */ _voiceEntryInteractionHandler; // +0xb0
    MMUILabel * _titleLabel; // +0xb8
    UIColor * _searchBoxContainerColor; // +0xc0
    UIView * _bottomLineView; // +0xc8
    UIView * _leftBoxSpacer; // +0xd0
    UIView * _rightBoxSpacer; // +0xd8
    _TtC6WeChat39SearchVoiceInputAccessoryViewController * _inputAccessoryViewController; // +0xe0
    UIView * _voiceInputView; // +0xe8
    _TtC6WeChat36SearchInteractiveVoiceInputViewModel * _voiceInputViewModel; // +0xf0
    WCSearchTextView * _textView; // +0xf8
    double _expectedHeight; // +0x100
    NSString * _placeholderStorage; // +0x108
    NSDictionary * _placeholderTagStorage; // +0x110
    UIFont * _placeholderTagFontOverrideStorage; // +0x118
    NSLayoutConstraint * _rightBarButtonTrailingInsetConstraint; // +0x120
    double _largeInputTopOffset; // +0x128
    UIStackView * _rootStackView; // +0x130
    UIStackView * _searchBox; // +0x138
    UIImageView * _leftIconView; // +0x140
    UILabel * _placeHolderLabel; // +0x148
    id /* block */ _tapHandler; // +0x150
    id /* block */ _searchTouchDownCallback; // +0x158
    id /* block */ _longPressLocationHandler; // +0x160
    id /* block */ _longPressSearchShouldBeginHandler; // +0x168
    UILongPressGestureRecognizer * _longPressRecognizer; // +0x170
    id /* block */ _longPressSearchExpandedHitTestShouldBeginCallback; // +0x178
    id /* block */ _voiceInputRightOpHandler; // +0x180
    id /* block */ _voiceInputBottomHandler; // +0x188
    id /* block */ _voiceInputResultHandler; // +0x190
    UIEdgeInsets _voiceEntryOriginalMargins; // +0x198
}
- (id)initWithConfig:(CGRect)arg1 config:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setUnactiveStyle;
- (void)setVoiceEntryInputBoxStyleEnabled:(BOOL)arg1;
- (void)setVoiceEntryStyle:(long long)arg1 guideVisible:(BOOL)arg2 interactionHandler:(id /* block */)arg3;
- (void)notifyVoiceEntryInteraction;
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
- (void)setPlaceholderTag:(id)arg1;
- (void)setPlaceholderTagFontOverride:(id)arg1;
- (void)updatePlaceholderAttributedText;
- (BOOL)isShowSearchBoxBorder;
- (void)setIsShowSearchBoxBorder:(BOOL)arg1;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setRightBarButtonTrailingInset:(double)arg1;
- (id)leftIconImage;
- (void)setLeftIconImage:(id)arg1;
- (void)showsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)makeConstraintsForBarButton:(id)arg1;
- (void)addTapSearchAction:(id /* block */)arg1;
- (void)setSearchTouchDownHandler:(id /* block */)arg1;
- (void)setLongPressSearchExpandedHitTestEnabled:(BOOL)arg1;
- (void)setLongPressSearchExpandedHitTestShouldBeginHandler:(id /* block */)arg1;
- (void)addLongPressSearchLocationAction:(id /* block */)arg1;
- (void)setupLongPressRecognizerIfNeeded;
- (BOOL)shouldBeginLongPressSearch;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
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
- (void)wcTextViewWillUpdateContentSize:(id)arg1;
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
- (BOOL)shouldAutoFocusAfterClear;
- (void)clearInputBox;
- (void)refreshLargeInputHeightAfterTextMutationWithSource:(id)arg1;
- (void)inputBoxAdjustHeight;
- (double)minimumLargeInputTextViewHeight;
- (double)largeInputTextViewHeight;
- (double)textViewHeight;
- (id)largeInputTextViewForTransition;
- (double)largeInputFirstLineCenterYOffset;
- (void)inputBoxSetText:(id)arg1;
- (void)inputBoxSetTextOnly:(id)arg1;
- (id)inputBoxGetText;
- (id)inputBoxGetRawText;
- (_NSRange)inputBoxGetSelectedRange;
- (void)inputBoxReplaceRange:(_NSRange)arg1 withText:(id)arg2;
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
- (double)rightBarButtonTrailingInset;
- (id)placeholderTag;
- (BOOL)enableVoiceInput;
- (BOOL)enableNewBtnMode;
- (void)setEnableNewBtnMode:(BOOL)arg1;
- (BOOL)enableLargeInput;
- (void)setEnableLargeInput:(BOOL)arg1;
- (BOOL)suppressAutoFocus;
- (void)setSuppressAutoFocus:(BOOL)arg1;
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
- (long long)voiceEntryStyle;
- (void)setVoiceEntryStyle:(long long)arg1;
- (BOOL)voiceEntryGuideVisible;
- (void)setVoiceEntryGuideVisible:(BOOL)arg1;
- (id)voiceEntryGuideContainer;
- (void)setVoiceEntryGuideContainer:(id)arg1;
- (id)voiceEntryGuideView;
- (void)setVoiceEntryGuideView:(id)arg1;
- (id /* block */)voiceEntryInteractionHandler;
- (void)setVoiceEntryInteractionHandler:(id /* block */)arg1;
- (UIEdgeInsets)voiceEntryOriginalMargins;
- (void)setVoiceEntryOriginalMargins:(UIEdgeInsets)arg1;
- (BOOL)voiceEntryInputBoxStyleActive;
- (void)setVoiceEntryInputBoxStyleActive:(BOOL)arg1;
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
- (BOOL)hasExplicitPlaceholder;
- (void)setHasExplicitPlaceholder:(BOOL)arg1;
- (id)placeholderStorage;
- (void)setPlaceholderStorage:(id)arg1;
- (id)placeholderTagStorage;
- (void)setPlaceholderTagStorage:(id)arg1;
- (id)placeholderTagFontOverrideStorage;
- (void)setPlaceholderTagFontOverrideStorage:(id)arg1;
- (id)rightBarButtonTrailingInsetConstraint;
- (void)setRightBarButtonTrailingInsetConstraint:(id)arg1;
- (double)largeInputTopOffset;
- (void)setLargeInputTopOffset:(double)arg1;
- (id)rootStackView;
- (void)setRootStackView:(id)arg1;
- (void)setSearchBox:(id)arg1;
- (void)setLeftIconView:(id)arg1;
- (void)setPlaceHolderLabel:(id)arg1;
- (BOOL)placeholderAlignsToLeading;
- (void)setPlaceholderAlignsToLeading:(BOOL)arg1;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (id /* block */)searchTouchDownCallback;
- (void)setSearchTouchDownCallback:(id /* block */)arg1;
- (id /* block */)longPressLocationHandler;
- (void)setLongPressLocationHandler:(id /* block */)arg1;
- (id /* block */)longPressSearchShouldBeginHandler;
- (void)setLongPressSearchShouldBeginHandler:(id /* block */)arg1;
- (id)longPressRecognizer;
- (void)setLongPressRecognizer:(id)arg1;
- (BOOL)longPressSearchExpandedHitTestActive;
- (void)setLongPressSearchExpandedHitTestActive:(BOOL)arg1;
- (id /* block */)longPressSearchExpandedHitTestShouldBeginCallback;
- (void)setLongPressSearchExpandedHitTestShouldBeginCallback:(id /* block */)arg1;
- (id /* block */)voiceInputRightOpHandler;
- (void)setVoiceInputRightOpHandler:(id /* block */)arg1;
- (id /* block */)voiceInputBottomHandler;
- (void)setVoiceInputBottomHandler:(id /* block */)arg1;
- (id /* block */)voiceInputResultHandler;
- (void)setVoiceInputResultHandler:(id /* block */)arg1;
- (BOOL)synchronousLargeInputTransitionEnabled;
- (void)setSynchronousLargeInputTransitionEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
