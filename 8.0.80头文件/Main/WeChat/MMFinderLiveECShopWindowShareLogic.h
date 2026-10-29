@interface MMFinderLiveECShopWindowShareLogic : MMFinderLiveECBaseShareLogic <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate>
{
    WCLiveProductShareScrollActionSheet * _shareActionSheet; // +0x8
    MMFinderLiveECShopWindowShareTask * _task; // +0x10
    ForwardMessageLogicController * _forwardLogic; // +0x18
}
- (void)onLiveECShareWithShareTask:(id)arg1;
- (void)shareProductShowWithShareTask:(id)arg1;
- (void)shareActionSheeterWithShareTask:(id)arg1;
- (void)onShareButtonTapped;
- (void)shareItem:(id)arg1 WithContact:(id)arg2;
- (void)shareItemWithInstaller:(id /* block */)arg1 contact:(id)arg2;
- (BOOL)OnForwardMessageNeedCancelConfirm:(id)arg1;
- (void)loadShareItemWithShareTask:(id)arg1 completion:(id /* block */)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)shareToChat:(id)arg1;
- (void)realSendToShare:(id)arg1;
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (void).cxx_destruct;
@end
