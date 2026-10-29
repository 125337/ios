@interface MJImageTextInputView : UIView <MMGrowTextViewDelegate>
{
    BOOL _showKeyboradInProgress; // +0x8
    id <MJImageTextInputViewDelegate> _delegate; // +0x10
    MMGrowTextView * _textView; // +0x18
    NSLayoutConstraint * _textHeightConstraint; // +0x20
    MMUIButton * _doneButton; // +0x28
    MMUIButton * _clearButton; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupViews;
- (void)_layoutViews;
- (void)doneButtonDidTap;
- (void)clearButtonDidTap;
- (BOOL)isEditing;
- (void)beginEditing;
- (void)endEditing;
- (id)text;
- (void)setText:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardDidShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewEndEditing:(id)arg1;
- (void)_updateClearButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)textHeightConstraint;
- (void)setTextHeightConstraint:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id)clearButton;
- (void)setClearButton:(id)arg1;
- (BOOL)showKeyboradInProgress;
- (void)setShowKeyboradInProgress:(BOOL)arg1;
- (void).cxx_destruct;
@end
