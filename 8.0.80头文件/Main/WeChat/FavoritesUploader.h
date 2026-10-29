@interface FavoritesUploader : FavoritesUploadBaseProccessor <MsgDataDownloadDelegate, PBMessageObserverDelegate, ICdnComMgrExt, CNetworkStatusExt>
{
    NSMutableArray * m_chectCdnDatalist; // +0x28
    NSMutableArray * m_chectCdnItemlist; // +0x30
    NSMutableArray * m_needDownloadMsgList; // +0x38
    NSMutableSet * m_downloadedMsg; // +0x40
    unsigned long long m_currentState; // +0x48
    FavoritesCDNInfo * m_uploadingInfo; // +0x50
    CdnFavMediaInfo * m_uploadingMedia; // +0x58
    MsgDataDownloadLogic * m_msgDataDownloadLogic; // +0x60
    BOOL m_msgFileDownloadedFail; // +0x68
    BOOL m_hasMsgToDownload; // +0x69
    BOOL m_needUpdateTag; // +0x6a
    BOOL _forceReuploadData; // +0x6b
    FavPostReportInfo * _postReportInfo; // +0x70
    NSMutableSet * _expiredMsg; // +0x78
    NSMutableArray * _forceReuploadDataList; // +0x80
    NSMutableArray * _forceReuploadThumbList; // +0x88
    NSMutableArray * _checkCDNReqItemList; // +0x90
}
+ (void)addForceReuploadCdnDataURLsToItem:(id)arg1 fromServerList:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)addItem:(id)arg1 isPrior:(BOOL)arg2;
- (void)removeItem:(id)arg1;
- (void)updateTagForItem:(id)arg1;
- (void)resetUpload;
- (void)tryProccess;
- (void)run;
- (void)onUploadEndWithErrCode:(int)arg1;
- (void)buildChectCdnList;
- (void)sendChectCDN;
- (void)HandleCheckFastUploadResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleCheckCDNResp:(id)arg1 Event:(unsigned int)arg2;
- (void)reportCheckCdnSizeMismatchForData:(id)arg1 oldDataSize:(unsigned long long)arg2 oldMd5:(id)arg3 oldHeadMd5:(id)arg4;
- (void)updateCDNInfoByExistFavCDNItem:(id)arg1;
- (void)updateCDNInfoByExistSingleResponse:(id)arg1;
- (BOOL)updateDataCdnInfoForUnexistedCheckCdnResult:(id)arg1;
- (void)updateThumbCdnInfoForUnexistedCheckCdnResult:(id)arg1;
- (BOOL)updateCDNInfoByUnExistFavCDNItem:(id)arg1;
- (BOOL)updateCDNInfoByUnExistSingleResponse:(id)arg1;
- (void)updateCDNInfoByUnExistButServerAsyncUploadFavCDNItem:(id)arg1;
- (id)downloadingMessage;
- (id)findDataFieldForMsg:(id)arg1;
- (void)downloadMsg;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)appendClientUploadResFailItem:(id)arg1;
- (id)generateDownloadFailJson:(id)arg1;
- (void)recordCgiErrorToReportInfo:(int)arg1 errMsg:(id)arg2;
- (void)appendErrExtraMsg:(id)arg1 value:(id)arg2;
- (void)uploadFile;
- (void)fixFakeMarkdownNoteDataFmtIfNeeded;
- (void)uploadFavMedia:(id)arg1;
- (void)attemptFixDataSizeForCdnInfo:(id)arg1 path:(id)arg2;
- (void)attemptFixMd5ForCdnInfo:(id)arg1 path:(id)arg2;
- (void)reportFixMd5Success:(BOOL)arg1 cdnInfo:(id)arg2 oldMd5:(id)arg3 newMd5:(id)arg4 oldHeadMd5:(id)arg5 newHeadMd5:(id)arg6 reason:(id)arg7;
- (BOOL)fixFullMd5ForCdnInfo:(id)arg1 path:(id)arg2 newMd5:(id)arg3;
- (void)reportVideoTranscodeResult:(BOOL)arg1 cost:(int)arg2 beforeSize:(int)arg3 afterSize:(int)arg4 dataExtInfo:(id)arg5;
- (void)transcodeVideoForCdnInfo:(id)arg1 mediaInfo:(id)arg2 asset:(id)arg3 enableHEVC:(BOOL)arg4;
- (void)reportSameUrlAndKeyWithDataList:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)updateExcerptItem:(id)arg1 inItem:(id)arg2;
- (void)uploadXml;
- (unsigned int)sendModFavItemRequest:(id)arg1;
- (void)checkBeforeUploadXml:(id)arg1;
- (void)checkReportNoteUploadNetRespErrMsg:(id)arg1 NetRetCode:(int)arg2;
- (void)HandleAddFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleModifyFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)addClientItemAsNewItem:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)postReportInfo;
- (void)setPostReportInfo:(id)arg1;
- (id)expiredMsg;
- (void)setExpiredMsg:(id)arg1;
- (id)forceReuploadDataList;
- (void)setForceReuploadDataList:(id)arg1;
- (id)forceReuploadThumbList;
- (void)setForceReuploadThumbList:(id)arg1;
- (BOOL)forceReuploadData;
- (void)setForceReuploadData:(BOOL)arg1;
- (id)checkCDNReqItemList;
- (void)setCheckCDNReqItemList:(id)arg1;
- (void).cxx_destruct;
@end
