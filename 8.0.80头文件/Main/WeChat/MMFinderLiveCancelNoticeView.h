@interface MMFinderLiveCancelNoticeView : MMPageSheetBaseView <MMGrowTextViewDelegate, UITextViewDelegate>
{
    BOOL _isPaidNotice; // +0x8
    BOOL _isKeyboardShow; // +0x9
    id /* block */ _liveCancelNoticeViewBlock; // +0x10
    CAShapeLayer * _shapeLayer; // +0x18
    UIView * _contentView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _detailLabel; // +0x30
    UIView * _pubbleInputView; // +0x38
    MMGrowTextView * _growTextView; // +0x40
    MMUILabel * _wordCountTips; // +0x48
    MMUIButton * _cancelButton; // +0x50
    MMUIButton * _actionButton; // +0x58
    double _keyboardHeight; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)liveCancelNoticeViewCancelClick;
- (void)liveCancelNoticeViewActionClick;
- (void)liveCancelNoticeViewClick:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)fixTopicText:(BOOL)arg1;
- (id)stringByRemovingReturnLineInString:(id)arg1;
- (id)stringByRemovingLastEmptyLineInString:(id)arg1;
- (id)stringByRemovingOverflowedLinesInString:(id)arg1 limitedLineCount:(unsigned long long)arg2;
- (void)updateDetailViewFrameAnimated:(BOOL)arg1;
- (void)createUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (double)getContentHeight;
- (void)setupPageSheetConfig;
- (id)titleLabel;
- (id)detailLabel;
- (id)cancelButton;
- (id)actionButton;
- (id)growTextView;
- (id)wordCountTips;
- (id)pubbleInputView;
- (id)contentView;
- (id /* block */)liveCancelNoticeViewBlock;
- (void)setLiveCancelNoticeViewBlock:(id /* block */)arg1;
- (BOOL)isPaidNotice;
- (void)setIsPaidNotice:(BOOL)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setPubbleInputView:(id)arg1;
- (void)setGrowTextView:(id)arg1;
- (void)setWordCountTips:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setActionButton:(id)arg1;
- (BOOL)isKeyboardShow;
- (void)setIsKeyboardShow:(BOOL)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (void).cxx_destruct;
@end
