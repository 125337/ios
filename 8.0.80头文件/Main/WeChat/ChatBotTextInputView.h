@interface ChatBotTextInputView : UIView <UITextFieldDelegate>
{
    int _openScene; // +0x8
    id <ChatBotTextInputViewDelegate> _delegate; // +0x10
    MMUITextField * _textField; // +0x18
    MMUIButton * _emoticonBtn; // +0x20
    MMUIButton * _voiceBtn; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 openScene:(int)arg2;
- (void)layoutSubviews;
- (void)layoutVoiceBtn;
- (void)onVoiceBtnClick:(id)arg1;
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
- (id)voiceBtn;
- (void)setVoiceBtn:(id)arg1;
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (void).cxx_destruct;
@end
