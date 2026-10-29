@interface _TtC6WeChat29MagicWxGameDynamicCardService : MMUserService <MMServiceProtocol, _TtP6WeChat30IMagicWxGameDynamicCardService_, IMagicCardStarterDelegate, IMsgExt>
{
     delegateMap; // +0x8
     lastSendScrollTime; // +0x10
     offsetHeight; // +0x18
     handle; // +0x20
     destroyTimeout; // +0x28
     sendScrollInterval; // +0x30
}
- (void)createBiz;
- (void)notifyBizDestroy;
- (void)addFrameSetViewWithContainerView:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)removeFrameSetViewWithFrameSetName:(id)arg1;
- (void)deActiveBiz;
- (void)jsApiEventHandler:(id)arg1 extraInfo:(id)arg2 callback:(id /* block */)arg3;
- (void)setAppWxGameCardMessageViewDelegate:(id)arg1 delegate:(id)arg2;
- (void)notifyFrameSetSizeChange:(id)arg1 height:(long long)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onMainSessionExposeWithSessionInfo:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (double)getFrameSetCacheHeight:(id)arg1;
- (void)notifyEnterChatRoom;
- (void)setChatRoomHeight:(double)arg1;
- (void)notifyExitChatRoom;
- (void)notifyViewScroll;
- (double)getOffsetHeight;
- (BOOL)isVersionLatest:(id)arg1;
- (void)showMsgPopupMenu:(id)arg1;
- (double)getWxGameDynamicCardOffsetTop:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

