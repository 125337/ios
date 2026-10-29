@interface OpenUploadMgr : MMObject <MsgDataDownloadDelegate, MessageCommonUploaderDelegate, EmoticonUploaderDelegate, MMAppMsgUploadMgrExt, IMsgExt, IForwardScheduleQueueExt, PBMessageObserverDelegate>
{
    FIFOFileQueue * m_queUpload; // +0x8
    unsigned int m_uiCurEventID; // +0x10
    OpenInfo * m_oCurUploadInfo; // +0x18
    BOOL m_bInitQueue; // +0x20
    BOOL _enableChatMessageNotify; // +0x21
    BOOL _isCheckingBigFile; // +0x22
    id <OpenUploadMgrDelegate> m_delegate; // +0x28
    MsgDataDownloadLogic * _msgDownloadLogic; // +0x30
    EmoticonUploader * _emoticonUploader; // +0x38
    MessageCommonUploader * _fileUploader; // +0x40
    NSMutableDictionary * _msgInfoDict; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)OnForwardScheduleQueueAdvanced;
- (void)InitQueue;
- (void)ClearEventID;
- (void)StartUpload:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)createStartAppMsgEvent:(id)arg1;
- (void)onStartUploadRet:(id)arg1 success:(BOOL)arg2;
- (void)StopUpload:(id)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (void)stopCurrentUpload;
- (void)CheckQueue;
- (BOOL)checkNeedPreprocess:(id)arg1;
- (BOOL)CreateUploadEvent;
- (BOOL)CreateSendAppMsg;
- (id)CreateAppMsgWithMsgWrap:(id)arg1;
- (BOOL)CreateSendWithAppMsg:(id)arg1 md5:(id)arg2 bigFileSignature:(id)arg3;
- (BOOL)CreateCheckMd5Upload;
- (BOOL)createEmoticonUploader;
- (id)getCurrentMsgData;
- (BOOL)CreateUploadAppAttach;
- (void)UploadFail:(int)arg1;
- (void)UploadOK:(BOOL)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startDownloadFile;
- (void)onDownloadAnyFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbReturn:(BOOL)arg1 MsgWrap:(id)arg2;
- (void)onEmoticonUploadSuccessWithEmoji:(id)arg1 uploadInfo:(id)arg2;
- (void)onEmoticonUploadFailWithUploadInfo:(id)arg1 reason:(unsigned long long)arg2 realMd5:(id)arg3;
- (void)createCommonUploader;
- (void)messageUploaderSuccess:(id)arg1 result:(id)arg2;
- (void)messageUploaderFailure:(id)arg1 uploadId:(id)arg2;
- (void)messageUploaderProgress:(id)arg1 progress:(double)arg2;
- (BOOL)isUploading;
- (id)getExtCommInfoXml:(id)arg1;
- (void)OnWillRevokeMsg:(id)arg1 revokeContext:(id)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_queUpload;
- (void)setM_queUpload:(id)arg1;
- (id)m_oCurUploadInfo;
- (void)setM_oCurUploadInfo:(id)arg1;
- (BOOL)enableChatMessageNotify;
- (void)setEnableChatMessageNotify:(BOOL)arg1;
- (id)msgDownloadLogic;
- (void)setMsgDownloadLogic:(id)arg1;
- (id)emoticonUploader;
- (void)setEmoticonUploader:(id)arg1;
- (id)fileUploader;
- (void)setFileUploader:(id)arg1;
- (BOOL)isCheckingBigFile;
- (void)setIsCheckingBigFile:(BOOL)arg1;
- (id)msgInfoDict;
- (void)setMsgInfoDict:(id)arg1;
- (void).cxx_destruct;
@end
