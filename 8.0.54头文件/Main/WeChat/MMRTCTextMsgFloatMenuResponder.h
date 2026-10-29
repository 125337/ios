@interface MMRTCTextMsgFloatMenuResponder : MMRTCMenuResponder <ForwardMessageLogicDelegate>
{
    CMessageWrap * _messageWrap; // +0x8
    ForwardMessageLogicController * _forwardLogicController; // +0x10
}
- (id)originMenuItems;
- (id)getSelectMenuItem;
- (void)onTranslateText;
- (void)onSelectTextForward:(id)arg1;
- (void)onSelectTextCopy:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (void).cxx_destruct;
@end

