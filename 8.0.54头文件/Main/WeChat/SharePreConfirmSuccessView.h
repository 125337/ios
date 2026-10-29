@interface SharePreConfirmSuccessView : MMUIWindow
{
    UIImageView * m_backgroundView; // +0x8
    long long m_previousOrientation; // +0x10
    NSString * _sendSuccessText; // +0x18
    NSString * _backToAppString; // +0x20
    NSString * _stayAtWeChatString; // +0x28
    id /* block */ _OnClickBackToApp; // +0x30
    id /* block */ _OnClickStayAtWeChat; // +0x38
}
- (void)internalInit;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)showView:(BOOL)arg1;
- (void)hideView:(BOOL)arg1;
- (id)genBackgroundView;
- (void)showSendSuccessView;
- (void)notifySendMsgOK;
- (void)stayAtWeChat;
- (id)sendSuccessText;
- (void)setSendSuccessText:(id)arg1;
- (id)backToAppString;
- (void)setBackToAppString:(id)arg1;
- (id)stayAtWeChatString;
- (void)setStayAtWeChatString:(id)arg1;
- (id /* block */)OnClickBackToApp;
- (void)setOnClickBackToApp:(id /* block */)arg1;
- (id /* block */)OnClickStayAtWeChat;
- (void)setOnClickStayAtWeChat:(id /* block */)arg1;
- (void).cxx_destruct;
@end

