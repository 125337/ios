@interface ChatRoomHeadImageSyncMgr : MMUserService <MMKernelExt, MMServiceProtocol>
{
    ChatRoomHeadImageSyncLogic * _oChatRoomHeadImageSyncLogic; // +0x8
}
- (void)onServiceInit;
- (void)initData;
- (void)onServiceClearData;
- (void)syncWithActionNotifyData:(id)arg1;
- (void)onAuthOK;
- (id)oChatRoomHeadImageSyncLogic;
- (void)setOChatRoomHeadImageSyncLogic:(id)arg1;
- (void).cxx_destruct;
@end
