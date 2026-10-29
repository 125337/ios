@interface WCFinderPostShortEditViewController : MMPageSheetBaseViewController <MMGrowTextViewDelegate, WCFinderFilterTextViewDelegate>
{
    id <WCFinderPostShortEditViewControllerDelegate> _delegate; // +0x70
    UIView * _topSeparateLine; // +0x78
    UIView * _bottomSeparateLine; // +0x80
    UIView * _containerView; // +0x88
    WCFinderFilterTextView * _textView; // +0x90
    MMUIButton * _learnButton; // +0x98
    UILabel * _maxLengthTipsLabel; // +0xa0
    UILabel * _invalidTipsLabel; // +0xa8
    UIButton * _completeButton; // +0xb0
    NSString * _initialShortTitle; // +0xb8
    NSArray * _validCharacterArray; // +0xc0
    unsigned long long _maxLimit; // +0xc8
    double _keyboardY; // +0xd0
}
+ (double)getContainerViewHeight:(double)arg1 keyboardY:(double)arg2;
- (id)initWithShortTitle:(id)arg1 maxLimit:(unsigned long long)arg2 keyboardY:(double)arg3 validCharacterArray:(id)arg4;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupPageSheetConfig;
- (void)setupSubViews;
- (void)onClickCancelButton;
- (void)onClickLearnButton;
- (void)onClickCompleteButton:(id)arg1;
- (void)TextViewDidEnter:(id)arg1;
- (void)textDidChangeFinish:(id)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)updateInvalidTipsLabel;
- (void)updateBottomLabelsVisibility;
- (void)updateCompleteButtonState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topSeparateLine;
- (void)setTopSeparateLine:(id)arg1;
- (id)bottomSeparateLine;
- (void)setBottomSeparateLine:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)learnButton;
- (void)setLearnButton:(id)arg1;
- (id)maxLengthTipsLabel;
- (void)setMaxLengthTipsLabel:(id)arg1;
- (id)invalidTipsLabel;
- (void)setInvalidTipsLabel:(id)arg1;
- (id)completeButton;
- (void)setCompleteButton:(id)arg1;
- (id)initialShortTitle;
- (void)setInitialShortTitle:(id)arg1;
- (id)validCharacterArray;
- (void)setValidCharacterArray:(id)arg1;
- (unsigned long long)maxLimit;
- (void)setMaxLimit:(unsigned long long)arg1;
- (double)keyboardY;
- (void)setKeyboardY:(double)arg1;
- (void).cxx_destruct;
@end
