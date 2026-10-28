@interface EcsGiftMessageMgr : MMUserService <ForwardMessageLogicDelegate, IMsgExt, PBMessageObserverDelegate, MMImageLoaderObserver, MMServiceProtocol>
{
    BOOL _canSwipeDismiss; // +0x8
    BOOL _enableShowRedDigest; // +0x9
    ForwardMessageLogicController * _forwardLogicController; // +0x10
    NSObject<OS_dispatch_queue> * _handleMsgQueue; // +0x18
    NSMutableDictionary * _giftTicket2ticketItem; // +0x20
    NSMutableArray * _giftMsgIdList; // +0x28
    NSMutableArray * _giftStatusCgiLimitList; // +0x30
    NSMutableArray * _preloadImgLimitList; // +0x38
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)createFlutterInstance:(id)arg1 arguments:(id)arg2;
- (void)startEcsGiftLogic:(id)arg1 messageWrap:(id)arg2;
- (void)openEcsGift:(id)arg1 messageWrap:(id)arg2;
- (void)enableGiftPageSwipeDismiss;
- (BOOL)canGiftPageSwipeDismiss;
- (void)preloadGiftImage:(id)arg1;
- (void)downloadEcsGiftImage:(id)arg1;
- (void)sendEcsLocalGiftMsg:(id)arg1 toUserName:(id)arg2;
- (void)sendEcsLocalGiftMsg:(id)arg1 toUserName:(id)arg2 withSvrId:(long long)arg3;
- (BOOL)isEcsGiftMsgExist:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)openEcsGiftWithSystemMsg:(id)arg1 linkUrl:(id)arg2 fromVC:(id)arg3;
- (void)handleCgiRespWhenOpenEcsGiftWithSystemMsg:(id)arg1 resp:(id)arg2 orderId:(id)arg3 fromVC:(id)arg4;
- (void)openEcsGiftWithParams:(id)arg1 params:(id)arg2 isChatroom:(BOOL)arg3;
- (BOOL)shouldShowGiftCover:(BOOL)arg1;
- (void)openEcsGiftReceivePageWithParams:(id)arg1 params:(id)arg2 isGroupChatroom:(BOOL)arg3 isSender:(BOOL)arg4 giftStatus:(long long)arg5;
- (void)openEcsGiftReceivePageWithLoading:(id)arg1 params:(id)arg2;
- (void)handleCgiRespAndOpenEcsGiftReceivePage:(id)arg1 orderId:(id)arg2 extraParams:(id)arg3 fromVC:(id)arg4;
- (void)triggerOpenEcsGiftReceivePageRequestCgiFailedEvent:(id)arg1;
- (BOOL)isGiftMsgIdHandled:(id)arg1;
- (void)updateGiftMsgByCgiIfNeeded:(id)arg1;
- (void)updateEcsGiftMsgStatus:(id)arg1 statusInfo:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetOrderCgiResp:(id)arg1;
- (void)handleGetPresentOrderResponse:(id)arg1 respGiftItem:(id)arg2;
- (void)openEcsGiftFromMsg:(id)arg1 messageWrap:(id)arg2 extraParam:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)genSendGiftTicket;
- (void)endSendGiftSessionWithTicket:(id)arg1;
- (void)updateSendGiftSessionRecipientUsername:(id)arg1 ticket:(id)arg2;
- (id)getSendGiftSessionRecipientUsernameByTicket:(id)arg1;
- (void)updateSendGiftSessionRecipientMsgXml:(id)arg1 ticket:(id)arg2;
- (id)getSendGiftSessionRecipientMsgXmlByTicket:(id)arg1;
- (void)updateSendGiftSessionChatroomUsername:(id)arg1 ticket:(id)arg2;
- (id)getSendGiftSessionChatroomUsernameByTicket:(id)arg1;
- (BOOL)checkValidWithSendGiftTicket:(id)arg1;
- (BOOL)canEcsGiftMsgUpdate:(id)arg1 newMsgWrap:(id)arg2;
- (void)openEcsGiftLotteryWithParams:(id)arg1 params:(id)arg2;
- (void)openEcsGiftGivePreviewCoverPageWithParams:(id)arg1 params:(id)arg2;
- (void)openEcsGiftGivePreviewCoverPageV2:(id)arg1 params:(id)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (BOOL)enableShowGiftRedDigest;
- (unsigned int)getEcsGiftRedLabelType:(id)arg1;
- (BOOL)isExclusiveReceiver:(id)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (id)handleMsgQueue;
- (void)setHandleMsgQueue:(id)arg1;
- (id)giftTicket2ticketItem;
- (void)setGiftTicket2ticketItem:(id)arg1;
- (id)giftMsgIdList;
- (void)setGiftMsgIdList:(id)arg1;
- (BOOL)canSwipeDismiss;
- (void)setCanSwipeDismiss:(BOOL)arg1;
- (id)giftStatusCgiLimitList;
- (void)setGiftStatusCgiLimitList:(id)arg1;
- (id)preloadImgLimitList;
- (void)setPreloadImgLimitList:(id)arg1;
- (BOOL)enableShowRedDigest;
- (void)setEnableShowRedDigest:(BOOL)arg1;
- (void).cxx_destruct;
@end
