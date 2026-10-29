@interface WCPayAgreementView : UIView <ILinkEventExt>
{
    RichTextView * _textView; // +0x8
    id /* block */ _onLinckClickedBlock; // +0x10
    UIButton * _checkbox; // +0x18
}
- (id)initWithCheckboxSize:(double)arg1 checkedColor:(id)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setTextMaxWidth:(double)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickCheckbox;
- (BOOL)checked;
- (void)setChecked:(BOOL)arg1;
- (void)shake;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id /* block */)onLinckClickedBlock;
- (void)setOnLinckClickedBlock:(id /* block */)arg1;
- (id)checkbox;
- (void)setCheckbox:(id)arg1;
- (void).cxx_destruct;
@end

