@interface FavoritesUploader : FavoritesUploadBaseProccessor <MsgDataDownloadDelegate, PBMessageObserverDelegate, ICdnComMgrExt, CNetworkStatusExt>
{
    NSMutableArray * m_chectCdnDatalist; // +0x28
    NSMutableArray * m_chectCdnItemlist; // +0x30
    NSMutableArray * m_needDownloadMsgList; // +0x38
    NSMutableSet * m_downloadedMsg; // +0x40
    unsigned long long m_currentState; // +0x48
    FavoritesCDNInfo * m_uploadingInfo; // +0x50
    MsgDataDownloadLogic * m_msgDataDownloadLogic; // +0x58
    BOOL m_msgFileDownloadedFail; // +0x60
    BOOL m_hasMsgToDownload; // +0x61
    BOOL m_needUpdateTag; // +0x62
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)addItem:(id)arg1 isPrior:(BOOL)arg2;
- (void)removeItem:(id)arg1;
- (void)updateTagForItem:(id)arg1;
- (void)resetUpload;
- (void)tryProccess;
- (void)run;
- (void)onUploadEndWithErrCode:(int)arg1;
- (void)onUploadEndWithErrCode:(int)arg1 NeedRecreateCdnInfo:(BOOL)arg2;
- (void)buildChectCdnList;
- (void)sendChectCDN;
- (void)HandleCheckCDNResp:(id)arg1 Event:(unsigned int)arg2;
- (void)updateCDNInfoByExistFavCDNItem:(id)arg1;
- (BOOL)updateCDNInfoByUnExistFavCDNItem:(id)arg1;
- (void)updateCDNInfoByUnExistButServerAsyncUploadFavCDNItem:(id)arg1;
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
- (void)updateExcerptItem:(id)arg1 inItem:(id)arg2;
- (void)uploadXml;
- (unsigned int)sendModFavItemRequest:(id)arg1;
- (void)HandleAddFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void).cxx_destruct;
@end
