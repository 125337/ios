@interface MPShareWowEditView : UIView <MMGrowTextViewDelegate, InputControllerDelegate, UIScrollViewDelegate>
{
    unsigned int _theme; // +0x8
    double _defaultHeight; // +0x10
    id <MPShareWowEditViewDelegate> _delegate; // +0x18
    MMUIViewController * _viewController; // +0x20
    UIView * _navBarView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUIButton * _closeBtn; // +0x38
    UIButton * _commitBtn; // +0x40
    UIScrollView * _scrollView; // +0x48
    MMGrowTextView * _textView; // +0x50
    UIView * _bgMaskView; // +0x58
    double _contentOffsetYWhenBeginDragging; // +0x60
    double _textViewAjustHeight; // +0x68
    WCInputController * _inputController; // +0x70
}
- (id)initWithViewController:(id)arg1;
- (void)setHiddenWithAnimation:(BOOL)arg1;
- (void)updateHeightWhenKeyboardShowWithAnimated:(BOOL)arg1;
- (void)beginEdit;
- (void)endEdit;
- (void)initSubviews;
- (void)initBgMaskView;
- (void)onTapCommentEditMaskView;
- (void)initNavBarView;
- (void)initScrollView;
- (void)initTextView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)initInputController;
- (void)setTheme:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)didCommitText:(id)arg1;
- (double)getVisibleHeight;
- (void)clearTextView;
- (void)keyboardWillShow;
- (void)onClickCommitBtn;
- (void)onClickCloseBtn;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (unsigned int)theme;
- (double)defaultHeight;
- (void)setDefaultHeight:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)navBarView;
- (void)setNavBarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)commitBtn;
- (void)setCommitBtn:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)bgMaskView;
- (void)setBgMaskView:(id)arg1;
- (double)contentOffsetYWhenBeginDragging;
- (void)setContentOffsetYWhenBeginDragging:(double)arg1;
- (double)textViewAjustHeight;
- (void)setTextViewAjustHeight:(double)arg1;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (void).cxx_destruct;
@end

