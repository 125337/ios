@interface WCFinderModifyEditInputView : MMUIView <UITextViewDelegate, WCFinderFilterTextViewDelegate>
{
    id <WCFinderModifyEditInputViewDelegate> _delegate; // +0x8
    WCFinderFilterTextView * _textView; // +0x10
    UIButton * _cancelBtn; // +0x18
    UIButton * _modifyBtn; // +0x20
    UILabel * _originLabel; // +0x28
    UIView * _textViewBGView; // +0x30
    UILabel * _countLimitLabel; // +0x38
    WCFinderModTextSelectModel * _modifyModel; // +0x40
    long long _maxCount; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithModifyModel:(id)arg1 maxCount:(long long)arg2;
- (id)countLimitLabel;
- (id)cancelBtn;
- (id)modifyBtn;
- (id)originLabel;
- (id)textViewBGView;
- (id)textView;
- (void)layoutAllSubivews;
- (void)onClickCancelBtn;
- (void)onClickFinishAction;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)textDidChangeFinish:(id)arg1;
- (void)updateCountLimitLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setCancelBtn:(id)arg1;
- (void)setModifyBtn:(id)arg1;
- (void)setOriginLabel:(id)arg1;
- (void)setTextViewBGView:(id)arg1;
- (void)setCountLimitLabel:(id)arg1;
- (id)modifyModel;
- (void)setModifyModel:(id)arg1;
- (long long)maxCount;
- (void)setMaxCount:(long long)arg1;
- (void).cxx_destruct;
@end
