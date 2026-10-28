@interface RecordFileDetailLogicController : FileDetailLogicController <IRecordDownloadExt, ForwardMessageLogicDelegate>
{
    MsgRecordDataWrap * m_recordDataWrap; // +0x8
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x10
    MMUIViewController * m_fileDetailViewController; // +0x18
    id <MsgRecordFileDetailDelegate> _m_delegate; // +0x20
}
- (id)initWithRecordDataWrap:(id)arg1;
- (void)startDownload;
- (void)stopDownload;
- (BOOL)OnPreviewFile:(unsigned int)arg1;
- (void)onForwardToContact:(id)arg1;
- (BOOL)isDownloading;
- (BOOL)isViewBePopedStopDownload;
- (unsigned int)GetPreviewType;
- (id)GetForwardData;
- (unsigned long long)GetFileSize;
- (id)GetFilePath;
- (id)GetTmpFilePath;
- (unsigned long long)GetTempSize;
- (id)GetFileName;
- (unsigned int)getMsgUiDownloadStatus;
- (id)getMusicLocalFileDataUnit;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (BOOL)HandleDownloadRepeatRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (id)getCurrentViewController;
- (BOOL)configWithMinimizeData:(id)arg1;
- (id)getMinimizeTaskData;
- (BOOL)isMinimizeEnable;
- (id)getHandOffItem;
- (BOOL)canAddToFavorites;
- (id)generateFavoriteItem;
- (void)stopDownloadAppMsgByUser;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
