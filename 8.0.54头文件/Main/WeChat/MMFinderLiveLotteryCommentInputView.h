@interface MMFinderLiveLotteryCommentInputView : UIView <UITextFieldDelegate>
{
    BOOL _isOpening; // +0x8
    BOOL _isKeyboardShow; // +0x9
    unsigned int _maxInputWordCount; // +0xc
    id /* block */ _lotteryCommentInputDoneCallback; // +0x10
    id /* block */ _cancelCallback; // +0x18
    id /* block */ _openedCallback; // +0x20
    id /* block */ _closedCallback; // +0x28
    id _extraInfo; // +0x30
    UIView * _contentView; // +0x38
    UIView * _maskView; // +0x40
    CAShapeLayer * _shapeLayer; // +0x48
    UIVisualEffectView * _visualEfView; // +0x50
    MMUILabel * _titleLabel; // +0x58
    MMUITextField * _textField; // +0x60
    MMUILabel * _wordsCountTipsLabel; // +0x68
    MMUIButton * _doneButton; // +0x70
    MMUIButton * _closeButton; // +0x78
    double _contentBottomWhenKeyboardShow; // +0x80
}
- (id)init;
- (void)dealloc;
- (void)initUI;
- (void)updateDoneButtonStyle;
- (void)layoutUI;
- (void)layoutWordsCountTipsLabel;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (CGRect)contentViewFrame;
- (void)close;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)openWithAnimation:(BOOL)arg1;
- (void)openWithBecomeFirstResponser;
- (void)updateDoneButtonEnableStatus;
- (void)onDoneButtonClicked:(id)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)updateWordCountForTextFieldChange;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)setMaxInputWordCount:(unsigned int)arg1;
- (void)changeCommentInputLayout:(id)arg1 isShow:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id /* block */)lotteryCommentInputDoneCallback;
- (void)setLotteryCommentInputDoneCallback:(id /* block */)arg1;
- (id /* block */)cancelCallback;
- (void)setCancelCallback:(id /* block */)arg1;
- (id /* block */)openedCallback;
- (void)setOpenedCallback:(id /* block */)arg1;
- (id /* block */)closedCallback;
- (void)setClosedCallback:(id /* block */)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)visualEfView;
- (void)setVisualEfView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)wordsCountTipsLabel;
- (void)setWordsCountTipsLabel:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (unsigned int)maxInputWordCount;
- (BOOL)isKeyboardShow;
- (void)setIsKeyboardShow:(BOOL)arg1;
- (double)contentBottomWhenKeyboardShow;
- (void)setContentBottomWhenKeyboardShow:(double)arg1;
- (void).cxx_destruct;
@end

