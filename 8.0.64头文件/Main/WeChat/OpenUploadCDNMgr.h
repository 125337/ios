@interface OpenUploadCDNMgr : MMObject <MsgDataDownloadDelegate, MMAppMsgUploadMgrExt, IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate, MMAppAttachFileMgrExt>
{
    FIFOFileQueue * _fileInfoQueue; // +0x8
    NSMutableArray * m_arrDeletingItems; // +0x10
    unsigned int _curEventId; // +0x18
    CdnTaskInfo * _curTaskInfo; // +0x20
    BOOL _bLargeFile; // +0x28
    BOOL _bJustUploadDataWithoutMD5Hit; // +0x29
    BOOL _enableChatMessageNotify; // +0x2a
    id <OpenUploadCDNMgrDelegate> m_delegate; // +0x30
    NSString * _nsQueuePath; // +0x38
    NSMutableDictionary * _msgInfoDict; // +0x40
    NSMutableDictionary * _bigFileUploadRespDict; // +0x48
    MsgDataDownloadLogic * _msgDownloadLogic; // +0x50
}
+ (void)cacheFileToHardLink:(id)arg1;
- (id)init;
- (id)initWithQueuePath:(id)arg1;
- (void)initData;
- (void)dealloc;
- (void)InitQueue;
- (BOOL)isRealtimeUploadTimeout:(id)arg1;
- (id)getUploadFinishBufferWithMsg:(id)arg1;
- (void)removeUploadFinishBufferWithMsg:(id)arg1;
- (void)CheckQueue;
- (BOOL)tryStartFileMsgHitCheckWithFileInfo:(id)arg1;
- (BOOL)checkNeedPreprocess:(id)arg1;
- (void)modAppmsg:(id)arg1 bitset:(int)arg2;
- (void)onAppmsgUploadProcessComplete:(id)arg1;
- (void)sendDataUploadFinishCommand;
- (void)onAppmsgSendSucc:(id)arg1;
- (void)onAppmsgDataUploaded:(id)arg1;
- (void)UploadFail:(int)arg1;
- (void)UploadFail:(int)arg1 canRetry:(BOOL)arg2;
- (void)ClearEventID;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)createStartAppMsgEvent:(id)arg1;
- (void)onStartUploadRet:(id)arg1 success:(BOOL)arg2;
- (void)StopCurUpload;
- (void)StopUpload:(id)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (BOOL)CreateCurUploadEvent:(BOOL)arg1 crc32:(unsigned int)arg2 useSafeCdn:(BOOL)arg3;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnUploadGetCdnFileID:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkBigFileUpload:(id)arg1 scene:(unsigned int)arg2;
- (void)onCheckBigFileUploadResult:(BOOL)arg1 resp:(id)arg2 wrapMsg:(id)arg3 errMsg:(id)arg4;
- (void)checkIfAppAttachExistInSvr:(id)arg1;
- (void)onCheckAppAttachRet:(id)arg1 isExistInSvr:(BOOL)arg2 taskInfo:(id)arg3;
- (void)startUploadAppAttach:(id)arg1;
- (void)realUploadAppAttach:(id)arg1;
- (void)startDownloadFile;
- (void)onDownloadAnyFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)bLargeFile;
- (void)setBLargeFile:(BOOL)arg1;
- (BOOL)bJustUploadDataWithoutMD5Hit;
- (void)setBJustUploadDataWithoutMD5Hit:(BOOL)arg1;
- (BOOL)enableChatMessageNotify;
- (void)setEnableChatMessageNotify:(BOOL)arg1;
- (id)nsQueuePath;
- (void)setNsQueuePath:(id)arg1;
- (id)msgInfoDict;
- (void)setMsgInfoDict:(id)arg1;
- (id)bigFileUploadRespDict;
- (void)setBigFileUploadRespDict:(id)arg1;
- (id)msgDownloadLogic;
- (void)setMsgDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end
