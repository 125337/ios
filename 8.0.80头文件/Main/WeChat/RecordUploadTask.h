@interface RecordUploadTask : NSObject <ICdnComMgrExt, PBMessageObserverDelegate, MsgDataDownloadDelegate, MMAppAttachFileMgrExt>
{
    BOOL m_hasDownload; // +0x8
    BOOL m_enableHitCheck; // +0x9
    BOOL m_isThumb; // +0xa
    BOOL m_fromFav; // +0xb
    FavoritesItemDataField * m_recordData; // +0x10
    CMessageWrap * m_recordMsg; // +0x18
    CdnFavMediaInfo * m_downloadFavMediaInfo; // +0x20
    CMessageWrap * m_sourceMsg; // +0x28
    CdnRecordMediaInfo * m_downloadMediaInfo; // +0x30
    MsgDataDownloadLogic * m_downloadLogic; // +0x38
    int m_retryCount; // +0x40
    BOOL _isMiddleData; // +0x44
    BOOL _isLivePhotoData; // +0x45
    BOOL _isLocalResource; // +0x46
    BOOL _needDownloadAsHtml; // +0x47
    BOOL _enableMarkdownNote; // +0x48
    BOOL _hasTryFormatConvert; // +0x49
    CdnRecordMediaInfo * _cdnInfo; // +0x50
    CdnUploadTaskInfo * _uploadResult; // +0x58
    id <RecordUploadTaskDelegate> _delegate; // +0x60
}
- (id)init;
- (id)initWithUploadArgs:(id)arg1;
- (void)startUpload;
- (void)stopUpload;
- (void)internalStartUpload;
- (BOOL)retryUpload;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (int)getHitCacheMediaType;
- (void)reportHitCacheInfo:(BOOL)arg1;
- (void)startDownload;
- (void)realDownload;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (id)getTempFilePath:(id)arg1 data:(id)arg2;
- (id)getFilePath:(id)arg1 data:(id)arg2;
- (void)handleRecordThumbDownLoadSuess;
- (void)handleRecordDownLoadSuess;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)checkMd5:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)convertVideoToH264;
- (id)recordData;
- (void)setRecordData:(id)arg1;
- (BOOL)isThumb;
- (void)setIsThumb:(BOOL)arg1;
- (id)cdnInfo;
- (void)setCdnInfo:(id)arg1;
- (id)uploadResult;
- (void)setUploadResult:(id)arg1;
- (BOOL)isMiddleData;
- (void)setIsMiddleData:(BOOL)arg1;
- (BOOL)isLivePhotoData;
- (void)setIsLivePhotoData:(BOOL)arg1;
- (BOOL)isLocalResource;
- (void)setIsLocalResource:(BOOL)arg1;
- (BOOL)needDownloadAsHtml;
- (void)setNeedDownloadAsHtml:(BOOL)arg1;
- (BOOL)enableMarkdownNote;
- (void)setEnableMarkdownNote:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasTryFormatConvert;
- (void)setHasTryFormatConvert:(BOOL)arg1;
- (void).cxx_destruct;
@end
