@interface WCFinderBulletInputToolbarView : UIView <InputControllerDelegate>
{
    BOOL _showingInputView; // +0x8
    BOOL _isForceCloseContactSelectView; // +0x9
    int _emoticonReportCommentScene; // +0xc
    EmoticonBoardView * _emoticonBoardView; // +0x10
    _TtC6WeChat23FinderEmoticonPanelView * _finderEmoticonPanel; // +0x18
    unsigned long long _maxInputCharsCount; // +0x20
    id <WCFinderBulletInputToolbarViewDelegate> _delegate; // +0x28
    MMLiveInputController * _inputController; // +0x30
    UIColor * _inputBackColor; // +0x38
    NSString * _placeHolderStr; // +0x40
    UIFont * _textFont; // +0x48
    id /* block */ _showCustomToastCallback; // +0x50
    unsigned long long _appearCountTipsCharsCount; // +0x58
    long long _currentOrientation; // +0x60
    NSString * _previousText; // +0x68
    UIView * _bulletInputView; // +0x70
    MMGrowTextView * _growTextView; // +0x78
    UIButton * _switchButton; // +0x80
    MMUILabel * _countTipLabel; // +0x88
    UIButton * _expressionButton; // +0x90
    UIView * _expressionRedDot; // +0x98
    NSMutableArray * _scrollViewArr; // +0xa0
    NSString * _prePlaceHolderStr; // +0xa8
    NSString * _lastTextViewText; // +0xb0
    CAGradientLayer * _gradientLayer; // +0xb8
    UIView * _limitView; // +0xc0
    NSString * _emoticonReportFeedID; // +0xc8
}
+ (double)inputToolViewInitialHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initInputController;
- (void)layoutUI;
- (void)updateSelfHeight;
- (void)layoutGradientLayer;
- (void)layoutBulletInputView;
- (double)getBulletViewHeight;
- (void)updateGradientLayerFrame;
- (void)updateBulletInputViewFrame;
- (void)layoutGrowTextView;
- (void)layoutSwitchButton;
- (void)updateSwitchButtonFrame;
- (void)updateGrowTextViewFrame;
- (void)layoutCountTipLabel;
- (void)updateCountTipLabelFrame;
- (void)updateCharsCountTipLabel;
- (void)layoutExpressionButton;
- (void)updateExpressionButtonFrame;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onSwitchButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)updateTableViewFrameWithInputViewTop:(double)arg1;
- (BOOL)isLastCharacterAlphaNumeric:(id)arg1;
- (void)becomeTextView;
- (void)setMaxInputCharsCount:(unsigned long long)arg1;
- (void)setEmoticonReportFeedID:(id)arg1 commentScene:(int)arg2;
- (void)setFinderEmoticonPanel:(id)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)scrollViewArr;
- (void)setShowingInputView:(BOOL)arg1;
- (void)showInputViewAtScrollViewY:(double)arg1;
- (void)closeInputView;
- (void)updateInputLayoutWithContainerWidth:(double)arg1 visibleHeight:(double)arg2;
- (void)setInputBackColor:(id)arg1;
- (void)setPlaceHolderStr:(id)arg1;
- (void)setText:(id)arg1;
- (void)clearInputText;
- (void)setSwitchButtonHidden:(BOOL)arg1;
- (void)setInteractionLimit:(BOOL)arg1;
- (void)setTextFont:(id)arg1;
- (void)setPlaceHolderStrOnce:(id)arg1;
- (void)addScrollView:(id)arg1 withMarginBottomInputView:(double)arg2 adjustCallBack:(id /* block */)arg3 getCurrentBottomCallBack:(id /* block */)arg4;
- (double)getVisibleHeight;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)keyboardWillShow;
- (void)keyboardDidHide;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(BOOL)arg2;
- (void)refreshEmoticonView;
- (BOOL)shouldAutoClose;
- (void)didCommitText:(id)arg1;
- (void)updatePanelActionState;
- (void)textViewTextDidChange;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (BOOL)showingInputView;
- (id)emoticonBoardView;
- (id)finderEmoticonPanel;
- (unsigned long long)maxInputCharsCount;
- (id)delegate;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)inputBackColor;
- (id)placeHolderStr;
- (id)textFont;
- (id /* block */)showCustomToastCallback;
- (void)setShowCustomToastCallback:(id /* block */)arg1;
- (unsigned long long)appearCountTipsCharsCount;
- (void)setAppearCountTipsCharsCount:(unsigned long long)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (id)previousText;
- (void)setPreviousText:(id)arg1;
- (id)bulletInputView;
- (void)setBulletInputView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)switchButton;
- (void)setSwitchButton:(id)arg1;
- (id)countTipLabel;
- (void)setCountTipLabel:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)expressionRedDot;
- (void)setExpressionRedDot:(id)arg1;
- (void)setScrollViewArr:(id)arg1;
- (id)prePlaceHolderStr;
- (void)setPrePlaceHolderStr:(id)arg1;
- (id)lastTextViewText;
- (void)setLastTextViewText:(id)arg1;
- (BOOL)isForceCloseContactSelectView;
- (void)setIsForceCloseContactSelectView:(BOOL)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)limitView;
- (void)setLimitView:(id)arg1;
- (id)emoticonReportFeedID;
- (void)setEmoticonReportFeedID:(id)arg1;
- (int)emoticonReportCommentScene;
- (void)setEmoticonReportCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
