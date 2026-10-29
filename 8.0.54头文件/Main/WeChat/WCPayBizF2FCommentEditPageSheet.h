@interface WCPayBizF2FCommentEditPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>
{
    NSString * _title; // +0x8
    NSString * _placeholder; // +0x10
    NSString * _content; // +0x18
    unsigned long long _maxLength; // +0x20
    id /* block */ _onEdited; // +0x28
    MMPageSheetAdapter * _adapter; // +0x30
    UITextField * _textField; // +0x38
    WCPayBizF2FCommentEditPageSheet * _selfRetaining; // +0x40
}
- (void)show;
- (id)getTitleView;
- (id)getContentView;
- (void)textDidChange;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetDidDisappear:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned long long)maxLength;
- (void)setMaxLength:(unsigned long long)arg1;
- (id /* block */)onEdited;
- (void)setOnEdited:(id /* block */)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)selfRetaining;
- (void)setSelfRetaining:(id)arg1;
- (void).cxx_destruct;
@end

