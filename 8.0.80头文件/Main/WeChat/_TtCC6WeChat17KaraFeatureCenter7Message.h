@interface _TtCC6WeChat17KaraFeatureCenter7Message : _TtCC6WeChat17KaraFeatureCenter9Component <IMsgExt, _TtP6WeChat15IKaraMessageExt_>
{
     _messageThatTriggerEnteringForeground; // +0x70
     _leaveTimesOfSessions; // +0x78
     privateImageHistoryTable; // +0x80
     privateVideoHistoryTable; // +0x88
     privateFileHistoryTable; // +0x90
     privateHDImageHistoryTable; // +0x98
     groupImageHistoryTable; // +0xa0
     groupVideoHistoryTable; // +0xa8
     groupFileHistoryTable; // +0xb0
     groupHDImageHistoryTable; // +0xb8
}
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onUserClickVideo:(id)arg1 inFullScreenView:(BOOL)arg2;
- (void)onUserClickImage:(id)arg1 byChangePage:(BOOL)arg2;
- (void)onUserClickRequestFile:(id)arg1;
- (void)onUserClickRequestHDImage:(id)arg1;
- (void)applicationDidEnterForegroundThroughMessageWithSvrID:(long long)arg1;
- (void)userDidEnterSession:(id)arg1;
- (void)userDidLeaveSession:(id)arg1;
- (void)OnBeginDownloadImage:(id)arg1 HD:(BOOL)arg2 autoDownload:(BOOL)arg3 behavior:(long long)arg4;
- (void)OnBeginDownloadVideo:(id)arg1 mode:(unsigned long long)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
@end
