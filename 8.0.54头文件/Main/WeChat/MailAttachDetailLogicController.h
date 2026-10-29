@interface MailAttachDetailLogicController : FileDetailLogicController <PBMessageObserverDelegate, ForwardMessageLogicDelegate>
{
    CAttach * m_oAttach; // +0x8
    unsigned int m_uiStartPos; // +0x10
    unsigned int m_uiDataLen; // +0x14
    unsigned int m_uiEventID; // +0x18
    ForwardMessageLogicController * m_forwardLogic; // +0x20
    MMUIViewController * m_fileDetailViewController; // +0x28
    BOOL m_bDownloading; // +0x30
    NSString * m_nsMailID; // +0x38
    id <MailAttachDelegate> m_delegate; // +0x40
}
- (void)dealloc;
- (void)startDownload;
- (void)stopDownload;
- (void)checkIsFileExistInSvr;
- (BOOL)OnPreviewFile:(unsigned int)arg1;
- (void)onForwardToContact:(id)arg1;
- (id)generateFavoriteItem;
- (BOOL)isDownloading;
- (BOOL)autoDownload;
- (BOOL)canAddToFavorites;
- (unsigned int)GetPreviewType;
- (unsigned long long)GetFileSize;
- (unsigned long long)GetTempSize;
- (id)GetFilePath;
- (id)GetTmpFilePath;
- (id)GetFileName;
- (id)getMusicLocalFileDataUnit;
- (unsigned int)getMsgUiDownloadStatus;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getCurrentViewController;
- (BOOL)isMinimizeEnable;
- (id)getMinimizeTaskData;
- (BOOL)configWithMinimizeData:(id)arg1;
- (void)stopDownloadAppMsgByUser;
- (id)m_oAttach;
- (void)setM_oAttach:(id)arg1;
- (id)m_nsMailID;
- (void)setM_nsMailID:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

