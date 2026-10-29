@interface AppMessageBlockButton : MMUIButton <WCActionSheetDelegate, ITemplateMsgRecvExt>
{
    CMessageWrap * _messageWrap; // +0x8
    MMUIViewController * _baseViewController; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)changeMessageState;
- (void)showAlertView;
- (void)updateRecvMsgState:(BOOL)arg1;
- (void)showActionSheet;
- (id)combineBaseUrl:(id)arg1 withParams:(id)arg2;
- (void)onReport;
- (void)onBlockTemplateMsg;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTemplateMsgConnectionChange:(unsigned int)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)baseViewController;
- (void)setBaseViewController:(id)arg1;
- (void).cxx_destruct;
@end
