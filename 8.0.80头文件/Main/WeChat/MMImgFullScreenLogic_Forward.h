@interface MMImgFullScreenLogic_Forward : MMImgFullScreenLogic <ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController * _forwardLogicController; // +0x8
}
- (id)actionSheetItem;
- (void)tryAddToActionSheet:(id)arg1;
- (void)forwardMessageToContact:(id)arg1;
- (id)forwardLogicController;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)setForwardLogicController:(id)arg1;
- (void).cxx_destruct;
@end
