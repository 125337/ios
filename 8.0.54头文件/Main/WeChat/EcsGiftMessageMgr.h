@interface EcsGiftMessageMgr : MMUserService <ForwardMessageLogicDelegate, IMsgExt, MMServiceProtocol>
{
    ForwardMessageLogicController * _forwardLogicController; // +0x8
    NSObject<OS_dispatch_queue> * _handleMsgQueue; // +0x10
    NSString * _sendGiftTicket; // +0x18
    NSString * _sendGiftRecipientUsername; // +0x20
    NSString * _sendGiftMsgXml; // +0x28
    NSMutableArray * _giftMsgIdList; // +0x30
}
- (void)onServiceInit;
- (id)createFlutterInstance:(id)arg1 arguments:(id)arg2;
- (void)startEcsGiftLogic:(id)arg1 messageWrap:(id)arg2;
- (void)openEcsGift:(id)arg1 messageWrap:(id)arg2;
- (void)sendEcsLocalGiftMsg:(id)arg1 toUserName:(id)arg2;
- (BOOL)isEcsGiftMsgExist:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)openEcsGiftWithSystemMsg:(id)arg1 linkUrl:(id)arg2 fromVC:(id)arg3;
- (void)openEcsGiftWithParams:(id)arg1 params:(id)arg2;
- (BOOL)isGiftMsgIdHandled:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)genSendGiftTicket;
- (void)endSendGiftSession;
- (void)updateSendGiftSessionRecipientUsername:(id)arg1 ticket:(id)arg2;
- (id)getSendGiftSessionRecipientUsernameByTicket:(id)arg1;
- (void)updateSendGiftSessionRecipientMsgXml:(id)arg1 ticket:(id)arg2;
- (id)getSendGiftSessionRecipientMsgXmlByTicket:(id)arg1;
- (BOOL)checkValidWithSendGiftTicket:(id)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (id)handleMsgQueue;
- (void)setHandleMsgQueue:(id)arg1;
- (id)sendGiftTicket;
- (void)setSendGiftTicket:(id)arg1;
- (id)sendGiftRecipientUsername;
- (void)setSendGiftRecipientUsername:(id)arg1;
- (id)sendGiftMsgXml;
- (void)setSendGiftMsgXml:(id)arg1;
- (id)giftMsgIdList;
- (void)setGiftMsgIdList:(id)arg1;
- (void).cxx_destruct;
@end

