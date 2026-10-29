@interface FavoritesAsyncUploader : FavoritesUploadBaseProccessor <MsgDataDownloadDelegate, CNetworkStatusExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray * m_needDownloadMsgList; // +0x28
    NSMutableSet * m_downloadedMsg; // +0x30
    unsigned long long m_currentState; // +0x38
    FavoritesCDNInfo * m_uploadingInfo; // +0x40
    MsgDataDownloadLogic * m_msgDataDownloadLogic; // +0x48
    BOOL m_msgFileDownloadedFail; // +0x50
    BOOL m_hasMsgToDownload; // +0x51
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)addItem:(id)arg1 isPrior:(BOOL)arg2;
- (void)removeItem:(id)arg1;
- (void)resetUpload;
- (void)tryProccess;
- (void)run;
- (void)onAsyncUploadEndWithErrCode:(int)arg1;
- (void)chectNeedDownloadMsgInFavitem:(id)arg1;
- (void)downloadMsg;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)uploadFile;
- (void)uploadFavMedia:(id)arg1;
- (void)reportSameUrlAndKeyWithDataList:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)updateXml;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void).cxx_destruct;
@end

