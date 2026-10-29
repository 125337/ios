@interface CBTRenameGrowTextView : UIView <MMGrowTextViewDelegate, UITextViewDelegate, IMMGrowTextViewExt>
{
    BOOL _isEditing; // +0x8
    MMGrowTextView * _textView; // +0x10
    id <CBTRenameGrowTextViewDelegate> _delegate; // +0x18
    UIButton * _cleanButton; // +0x20
    UILabel * _descNumberLabel; // +0x28
    CBTRenameGrowTextViewConfig * _config; // +0x30
}
- (id)init;
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (BOOL)ifMovingToOrFromParentViewController;
- (void)initView:(id)arg1;
- (void)layoutSubviews;
- (void)updateSubViewlayout;
- (long long)remainingCharacters;
- (BOOL)isTextLengthExceeded;
- (void)setDescNumberLabelHidden:(BOOL)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)updateCleanButtonHiddenState:(BOOL)arg1;
- (void)cleanButtonClicked:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (BOOL)updateDescLabelStatus;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewEndEditing:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (long long)getTextLength;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (long long)getPlaceHolderLength;
- (void)resetTextMaxShowLine:(double)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cleanButton;
- (void)setCleanButton:(id)arg1;
- (id)descNumberLabel;
- (void)setDescNumberLabel:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)arg1;
- (void).cxx_destruct;
@end
