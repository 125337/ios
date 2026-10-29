@interface MsgDataDownloadLogic : NSObject <IMsgExt, IDownloadImageExt, IRecordDownloadExt, C2CVideoDownloadMgrExt>
{
    CMessageWrap * m_msgWrap; // +0x8
    BOOL m_downloadRawVideo; // +0x10
    BOOL _processing; // +0x11
    id <MsgDataDownloadDelegate> _delegate; // +0x18
}
- (BOOL)startDownloadMsg:(id)arg1;
- (BOOL)startDownloadMsgImg:(id)arg1 HD:(BOOL)arg2;
- (BOOL)startDownloadMsgVideo:(id)arg1 HD:(BOOL)arg2;
- (BOOL)startDownloadMsgVideo:(id)arg1 HD:(BOOL)arg2 allowReuseExistTask:(BOOL)arg3;
- (void)stopDownload;
- (id)processingMessage;
- (void)dealloc;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadPart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned long long)arg3;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImagePart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)OnDownloadImagePartNew:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3 TryShow:(BOOL)arg4;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(BOOL)arg2;
- (void)OnDownloadImageStop:(id)arg1;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)OnRecordMessageDownloadOK:(id)arg1;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)onVideoDownloadComplete:(id)arg1 isRaw:(BOOL)arg2 taskInfo:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isProcessing;
- (void)setProcessing:(BOOL)arg1;
- (void).cxx_destruct;
@end
