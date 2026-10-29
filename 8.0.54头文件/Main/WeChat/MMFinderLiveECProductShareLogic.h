@interface MMFinderLiveECProductShareLogic : MMFinderLiveECBaseShareLogic <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate>
{
    WCLiveProductShareScrollActionSheet * _shareActionSheet; // +0x8
    MMFinderLiveProductShareTask * _task; // +0x10
    ForwardMessageLogicController * _forwardLogic; // +0x18
}
- (void)onLiveECShareWithShareTask:(id)arg1;
- (void)shareProductShowWithShareTask:(id)arg1;
- (void)shareActionSheeterWithShareTask:(id)arg1;
- (void)shareItem:(id)arg1 toContact:(id)arg2;
- (void)directShareItem:(id)arg1 toContact:(id)arg2;
- (id)buildMessageWrapWithItem:(id)arg1;
- (BOOL)OnForwardMessageNeedCancelConfirm:(id)arg1;
- (void)shareProductLoadProductWithShareTask:(id)arg1 completeBlock:(id /* block */)arg2;
- (id)finderDataItemTryCurrentLiveWithAnchor:(id)arg1;
- (void)buildProductShareItemWithProduct:(unsigned long long)arg1 withLive:(id)arg2 promoterKey:(id)arg3 lastGMsgID:(id)arg4 ecSource:(id)arg5 scene:(int)arg6 completion:(id /* block */)arg7;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)shareToChat:(id)arg1;
- (void)realSendToShare:(id)arg1;
- (void)onShareButtonTapped;
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (void).cxx_destruct;
@end

