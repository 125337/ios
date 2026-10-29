@interface ChatBotVoIPModeSelectView : UIView
{
    unsigned int _modeSet; // +0x8
    id <ChatBotVoIPModeSelectViewDelegate> _delegate; // +0x10
    ChatBotBlurButton * _listenToMeBtn; // +0x18
    ChatBotBlurButton * _chatWithMeBtn; // +0x20
    ChatBotBlurButton * _talkSomeNewsBtn; // +0x28
}
- (id)initWithModeBitSet:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)layoutSelectBtns;
- (void)onSelectBtnClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)modeSet;
- (void)setModeSet:(unsigned int)arg1;
- (id)listenToMeBtn;
- (void)setListenToMeBtn:(id)arg1;
- (id)chatWithMeBtn;
- (void)setChatWithMeBtn:(id)arg1;
- (id)talkSomeNewsBtn;
- (void)setTalkSomeNewsBtn:(id)arg1;
- (void).cxx_destruct;
@end
