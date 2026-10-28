@interface MMMusicLiveInputView : UIView <InputControllerDelegate>
{
    BOOL _showingInputView; // +0x8
    EmoticonBoardView * _emoticonBoardView; // +0x10
    unsigned long long _maxInputCharsCount; // +0x18
    id <MMMusicLiveInputViewDelegate> _delegate; // +0x20
    MMLiveInputController * _inputController; // +0x28
    UIColor * _pubbleInputBackColor; // +0x30
    NSString * _plackHolderStr; // +0x38
    UIFont * _textFont; // +0x40
    UIButton * _sendLocationButton; // +0x48
    unsigned long long _appearCountTipsCharsCount; // +0x50
    long long _currentOrientation; // +0x58
    NSString * _previousText; // +0x60
    UIView * _pubbleInputView; // +0x68
    MMGrowTextView * _growTextView; // +0x70
    MMUILabel * _countTipLabel; // +0x78
    UIButton * _expressionButton; // +0x80
    NSString * _prePlaceHolderStr; // +0x88
}
+ (double)inputToolViewInitialHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initInputController;
- (void)layoutUI;
- (void)updateSelfHeight;
- (void)layoutPubbleInputView;
- (double)getPubbleViewHeight;
- (void)updatePubbleInputViewFrame;
- (void)layoutGrowTextView;
- (void)updateGrowTextViewFrame;
- (void)layoutCountTipLabel;
- (void)updateCountTipLabelFrame;
- (void)updateCharsCountTipLabel;
- (void)layoutExpressionButton;
- (void)updateExpressionButtonFrame;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)setMaxInputCharsCount:(unsigned long long)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowingInputView:(BOOL)arg1;
- (void)show;
- (void)close;
- (void)setPubbleInputBackColor:(id)arg1;
- (void)setPlackHolderStr:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextFont:(id)arg1;
- (void)setPlaceHolderStrOnce:(id)arg1;
- (double)getVisibleHeight;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)keyboardWillShow;
- (void)keyboardDidHide;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(BOOL)arg2;
- (void)didCommitText:(id)arg1;
- (void)textViewTextDidChange;
- (BOOL)checkNetWorkUnReachable;
- (void)layoutSendLocationButton;
- (void)onSendLocationButtonClicked:(id)arg1;
- (BOOL)showingInputView;
- (id)emoticonBoardView;
- (unsigned long long)maxInputCharsCount;
- (id)delegate;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)pubbleInputBackColor;
- (id)plackHolderStr;
- (id)textFont;
- (id)sendLocationButton;
- (void)setSendLocationButton:(id)arg1;
- (unsigned long long)appearCountTipsCharsCount;
- (void)setAppearCountTipsCharsCount:(unsigned long long)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (id)previousText;
- (void)setPreviousText:(id)arg1;
- (id)pubbleInputView;
- (void)setPubbleInputView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)countTipLabel;
- (void)setCountTipLabel:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)prePlaceHolderStr;
- (void)setPrePlaceHolderStr:(id)arg1;
- (void).cxx_destruct;
@end
