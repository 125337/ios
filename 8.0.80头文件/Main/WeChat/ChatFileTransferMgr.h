@interface ChatFileTransferMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isOnlinePreviewEnableForURLDownload; // +0x8
    BOOL _isExtraLargeFileEnabled; // +0x9
    BOOL _isNewExpiredLogic; // +0xa
    ChatFileReporter * _reporter; // +0x10
    NSArray * _onlinePreviewSupportedExtList; // +0x18
    long long _minExpireInterval; // +0x20
    long long _pauseExpireInterval; // +0x28
    NSArray * _localPreviewSupportedExtList; // +0x30
}
+ (id)tryGetOriginMessageWrapWithFavItem:(id)arg1;
+ (id)shared;
- (BOOL)isFavFileSourceEnabled;
- (BOOL)isFileSourceEnabled;
- (BOOL)isMsgFileSourceEnabled:(id)arg1;
- (BOOL)isRecordFileSourceEnabled:(id)arg1;
- (BOOL)isRecordFileSourceEnabled:(id)arg1 ofRecord:(id)arg2;
- (void)showFileSource:(id)arg1 messageWrap:(id)arg2 ofRecord:(id)arg3 fromViewController:(id)arg4;
- (void)showFileSource:(id)arg1 messageWrap:(id)arg2 ofRecord:(id)arg3 fromViewController:(id)arg4 extraReportParams:(id)arg5;
- (void)onShareHalfMenuExpose:(id)arg1 messageWrap:(id)arg2 ofRecord:(id)arg3 hasFileSourceEntrance:(BOOL)arg4;
- (void)onShareHalfMenuExpose:(id)arg1 messageWrap:(id)arg2 ofRecord:(id)arg3 hasFileSourceEntrance:(BOOL)arg4 extraReportParams:(id)arg5;
- (void)reloadNewExpiredLogicConfig;
- (BOOL)isNewExpiredLogicEnabled;
- (long long)minExpiredTimeInterval;
- (long long)pauseExpireTimeInterval;
- (void)reloadExtraLargeFileConfig;
- (BOOL)isExtraLargeFileSupported;
- (unsigned long long)extraLargeFileSize;
- (unsigned long long)extraLargeFileSizeLimit;
- (void)reloadOnliePreviewConfig;
- (BOOL)isOnlinePreviewEnabled;
- (BOOL)isFileSupportOnlinePreview:(id)arg1;
- (BOOL)isOnlinePreviewEnabledForUrlFile;
- (BOOL)isFileSupportLocalPreview:(id)arg1;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)onlinePreviewSupportedExtList;
- (void)setOnlinePreviewSupportedExtList:(id)arg1;
- (BOOL)isOnlinePreviewEnableForURLDownload;
- (void)setIsOnlinePreviewEnableForURLDownload:(BOOL)arg1;
- (BOOL)isExtraLargeFileEnabled;
- (void)setIsExtraLargeFileEnabled:(BOOL)arg1;
- (BOOL)isNewExpiredLogic;
- (void)setIsNewExpiredLogic:(BOOL)arg1;
- (long long)minExpireInterval;
- (void)setMinExpireInterval:(long long)arg1;
- (long long)pauseExpireInterval;
- (void)setPauseExpireInterval:(long long)arg1;
- (id)localPreviewSupportedExtList;
- (void)setLocalPreviewSupportedExtList:(id)arg1;
- (void).cxx_destruct;
@end
