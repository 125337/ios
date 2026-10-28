@interface _TtC6WeChat14CarPlayVoIPMgr : MMUserService <MMServiceProtocol>
{
     currentController; // +0x8
     rootVoIPTalkingController; // +0x10
}
- (void)setRoomInfoWithRoomID:(long long)arg1 roomKey:(long long)arg2;
- (void)onEndCallWithIsiLink:(BOOL)arg1 forExtraInvite:(BOOL)arg2;
- (id)openCallerControllerWithContact:(id)arg1 toast:(id)arg2 isMuted:(BOOL)arg3 isVideo:(BOOL)arg4;
- (id)openReceiveControllerWithContact:(id)arg1 toast:(id)arg2 isVideo:(BOOL)arg3;
- (id)openTalkingControllerWithContact:(id)arg1 toast:(id)arg2 isMuted:(BOOL)arg3 isVideo:(BOOL)arg4 isCaller:(BOOL)arg5;
- (id)openExtraRecieveControllerWithContact:(id)arg1 toast:(id)arg2 isVideo:(BOOL)arg3;
- (BOOL)isOnTalking;
- (BOOL)isOnVoIP;
- (id)getTalkingController;
- (void)setTalkingControllerDelegateWithDelegate:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
