@interface _TtC6WeChat16C2CPredownloader : _TtC6WeChat13Predownloader <IMsgExt, IDownloadImageTaskExt>
{
     schemes; // +0x48
     queue; // +0x58
}
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnBeginDownloadImage:(id)arg1 HD:(BOOL)arg2 autoDownload:(BOOL)arg3 behavior:(long long)arg4;
- (void)OnBeginDownloadVideo:(id)arg1 mode:(unsigned long long)arg2;
- (void)onUserClickRequestFile:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1 isHD:(BOOL)arg2;
- (void)OnDownloadImageFail:(id)arg1 isHD:(BOOL)arg2;
- (void)OnDownloadImageStop:(id)arg1 isHD:(BOOL)arg2;
- (void)OnDownloadImageExpired:(id)arg1 isHD:(BOOL)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onUserDidSeeImage:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
@end
