@interface ChatBotTextInputView : UIView <UITextFieldDelegate>
{
    id <ChatBotTextInputViewDelegate> _delegate; // +0x8
    MMUITextField * _textField; // +0x10
    MMUIButton * _emoticonBtn; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutInputView;
- (void)layoutEmoticonBtn;
- (void)active;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)emoticonBtn;
- (void)setEmoticonBtn:(id)arg1;
- (void).cxx_destruct;
@end
