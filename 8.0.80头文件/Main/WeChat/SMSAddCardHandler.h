@interface SMSAddCardHandler : MMObject <BlockViewControllerDelegate, PBMessageObserverDelegate, IPreEnterWechatLogicExt>
{
    NSURL * _infoUrl; // +0x8
    BlockViewController * _blockView; // +0x10
}
- (void)dealloc;
- (void)startCheckAndAddCard:(id)arg1;
- (void)cancelCheckAndAddCard;
- (void)onPreEnterWechatDone;
- (void)createWechatSMSAddCard;
- (void)handleSMSAddCard:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onBlockViewControllerReturn;
- (void).cxx_destruct;
@end
