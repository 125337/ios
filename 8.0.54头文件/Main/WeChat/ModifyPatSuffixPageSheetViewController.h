@interface ModifyPatSuffixPageSheetViewController : MMPageSheetBaseViewController <ModifyPatSuffixLogicDelegate, WCCommonInputViewDelegate, InputControllerDelegate>
{
    id /* block */ _beginCommitHandler; // +0x68
    id /* block */ _endCommitHandler; // +0x70
    MMUILabel * _prefixLabel; // +0x78
    UIView * _backgroundView; // +0x80
    MMUILabel * _descriptionLabel; // +0x88
    MMGrowTextView * _textView; // +0x90
    UIButton * _doneButton; // +0x98
    EmoticonBoardView * _emoticonBoardView; // +0xa0
    UIView * _inputBackgroundView; // +0xa8
    WCSingleEmoticonInputView * _inputBar; // +0xb0
    WCInputController * _inputController; // +0xb8
    double _currentInputViewHeight; // +0xc0
    long long _currentOrientation; // +0xc8
    NSString * _sessionId; // +0xd0
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0xd8
    PatSuffixWrap * _selfPatSuffixWrap; // +0xe0
    ModifyPatSuffixLogic * _modifyPatSuffixLogic; // +0xe8
    ModifyPatSuffixPageSheetViewController * _viewController; // +0xf0
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (double)getVisibleHeight;
- (double)pageSheetContentWidth;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)configPageSheet;
- (void)configData;
- (void)configDetailView;
- (void)configInputView;
- (void)setCurrentOrientation:(long long)arg1;
- (void)updateDetailViewLayoutAnimated:(BOOL)arg1;
- (void)changeToExceedMaxLength;
- (void)changeBackDescription;
- (void)checkDone;
- (void)onTapDoneButton;
- (unsigned int)getMaxPatSuffixLength;
- (id)emoticonBoardView;
- (id)feedbackGenerator;
- (void)reportAction:(unsigned long long)arg1 errorCode:(int)arg2;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)onInputModeChangingTo:(long long)arg1;
- (void)keyboardWillShow;
- (void)keyboardShowing;
- (void)keyboardHiding;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)textViewTextDidExceedMaxLength;
- (void)updateCurrentInputViewHeightAnimated:(id)arg1;
- (void)onInputViewExpressionButtonClicked:(id)arg1;
- (void)OnModifyPatSuffixWithResult:(unsigned int)arg1 errorMsgTitle:(id)arg2 errorMsgContent:(id)arg3 errorCode:(int)arg4;
- (id /* block */)beginCommitHandler;
- (void)setBeginCommitHandler:(id /* block */)arg1;
- (id /* block */)endCommitHandler;
- (void)setEndCommitHandler:(id /* block */)arg1;
- (id)prefixLabel;
- (void)setPrefixLabel:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionLabel:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (id)inputBackgroundView;
- (void)setInputBackgroundView:(id)arg1;
- (id)inputBar;
- (void)setInputBar:(id)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (double)currentInputViewHeight;
- (void)setCurrentInputViewHeight:(double)arg1;
- (long long)currentOrientation;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (id)selfPatSuffixWrap;
- (void)setSelfPatSuffixWrap:(id)arg1;
- (id)modifyPatSuffixLogic;
- (void)setModifyPatSuffixLogic:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end

