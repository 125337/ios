@interface _TtC6WeChat21MagicEcsKFCardService : MMUserService <MMServiceProtocol, _TtP6WeChat22IMagicEcsKFCardService_, IMagicCardStarterDelegate, IMsgExt>
{
     delegateMap; // +0x8
     handle; // +0x10
     enterKFRoomCount; // +0x18
}
- (void)createBiz;
- (void)onEnterKFRoom;
- (void)deActiveBiz;
- (void)onExitKFRoom;
- (void)notifyBizDestroy;
- (void)addFrameSetViewWithContainerView:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)removeFrameSetViewWithFrameSetName:(id)arg1;
- (void)setEcsKFCardMessageViewDelegate:(id)arg1 delegate:(id)arg2;
- (void)notifyFrameSetSizeChange:(id)arg1 height:(long long)arg2;
- (double)getFrameSetCacheHeight:(id)arg1;
- (void)jsApiEventHandler:(id)arg1 extraInfo:(id)arg2 callback:(id /* block */)arg3;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (BOOL)isPkgAvailable:(unsigned int)arg1;
- (id)init;
- (void).cxx_destruct;
@end
