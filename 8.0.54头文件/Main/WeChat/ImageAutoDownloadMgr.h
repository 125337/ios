@interface ImageAutoDownloadMgr : MMUserService <MMServiceProtocol, IMsgExt, IDownloadImageExt, IEnterpriseMsgExt>
{
    NSMutableArray * m_arrChatQueue; // +0x8
    NSMutableArray * m_arrBackGroundQueue; // +0x10
    CMessageWrap * m_CurDownloadingMsg; // +0x18
    unsigned int m_uiStatus; // +0x20
    ImageAutoControl * m_oImageAutoControl; // +0x28
}
- (id)init;
- (void)LoadControlData;
- (void)SaveControlData;
- (unsigned int)GetQueueType:(id)arg1;
- (BOOL)IsQueueCheckNotify:(id)arg1;
- (BOOL)IsInDownloadQueue:(id)arg1 Queue:(id)arg2;
- (void)RemoveMsgFromQueue:(id)arg1 Msg:(id)arg2;
- (void)RemoveMsgFromQueue:(id)arg1 ByChatName:(id)arg2;
- (BOOL)IsMsgDownloaded:(id)arg1;
- (BOOL)IsMsgCanDownloadForExp:(id)arg1 CheckNotify:(BOOL)arg2;
- (BOOL)IsMsgCanDownload:(id)arg1 CheckNotify:(BOOL)arg2;
- (BOOL)IsImageShouldDownload:(id)arg1;
- (BOOL)StartDownloadMsgFromQueue:(id)arg1;
- (void)CheckQueue;
- (void)InternalAddMsgToQueue:(id)arg1 Msg:(id)arg2;
- (void)StartAutoDownloadFromChat:(id)arg1;
- (void)StopBackGroundQueue;
- (void)ResumeBackGroundQueue;
- (void)ClearChatQueue;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnBeginDownloadVideo:(id)arg1 mode:(unsigned long long)arg2;
- (void)OnBeginDownloadAppData:(id)arg1;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(BOOL)arg2;
- (void)OnDownloadImageStop:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnBeginDownloadAppData:(id)arg1 Brand:(id)arg2;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 DelAll:(BOOL)arg3;
- (void)OnAddEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (id)m_CurDownloadingMsg;
- (void)setM_CurDownloadingMsg:(id)arg1;
- (void).cxx_destruct;
@end

