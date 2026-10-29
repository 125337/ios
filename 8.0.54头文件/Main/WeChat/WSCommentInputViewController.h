@interface WSCommentInputViewController : MMWindowViewController <MMGrowTextViewDelegate, UIScrollViewDelegate>
{
    BOOL _forbidSubmitBlank; // +0x74
    BOOL _forbidSubmitOverLength; // +0x75
    BOOL _initShowKeyboard; // +0x76
    id <WSCommentInputDelegate> _delegate; // +0x78
    UIScrollView * _bgView; // +0x80
    NSString * _placeHolder; // +0x88
    UIView * _inputPad; // +0x90
    MMUIButton * _cancelButton; // +0x98
    MMUIButton * _submitButton; // +0xa0
    MMGrowTextView * _imputField; // +0xa8
    MMUILabel * _countLabel; // +0xb0
    long long _maxInputLength; // +0xb8
    NSString * _oriInputText; // +0xc0
    unsigned long long _orientationMask; // +0xc8
}
+ (void)showInputWithPlaceHolder:(id)arg1 inputText:(id)arg2 initShowKeyboard:(BOOL)arg3 maxInputLength:(long long)arg4 orientation:(long long)arg5;
- (id)initWithPlaceHoler:(id)arg1 inputText:(id)arg2 initShowKeyboard:(BOOL)arg3 maxInputLength:(long long)arg4 orientation:(long long)arg5;
- (void)viewDidLoad;
- (void)initSubviews;
- (void)clickPadView:(id)arg1;
- (void)clickEmptyBgView:(id)arg1;
- (void)clickCancel:(id)arg1;
- (void)clickSubmit:(id)arg1;
- (void)hideSelf;
- (void)updatePadViewFrame:(BOOL)arg1 keyBoardHeight:(double)arg2;
- (void)updateCountLabelFrame;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configOrietation:(long long)arg1;
- (void)configSupportOrietation:(unsigned long long)arg1;
- (BOOL)checkStringTrimmingWithString:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (BOOL)isShow;
- (void)TextViewDidEnter:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)forbidSubmitBlank;
- (void)setForbidSubmitBlank:(BOOL)arg1;
- (BOOL)forbidSubmitOverLength;
- (void)setForbidSubmitOverLength:(BOOL)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (id)inputPad;
- (void)setInputPad:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)submitButton;
- (void)setSubmitButton:(id)arg1;
- (id)imputField;
- (void)setImputField:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (BOOL)initShowKeyboard;
- (void)setInitShowKeyboard:(BOOL)arg1;
- (long long)maxInputLength;
- (void)setMaxInputLength:(long long)arg1;
- (id)oriInputText;
- (void)setOriInputText:(id)arg1;
- (unsigned long long)orientationMask;
- (void)setOrientationMask:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

