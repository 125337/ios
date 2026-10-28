@interface ChatFileTransferMgr : MMUserService <MMServiceProtocol>
{
    BOOL _isOnlinePreviewEnableForURLDownload; // +0x8
    BOOL _isExtraLargeFileEnabled; // +0x9
    BOOL _isNewBubbleUIFlag; // +0xa
    ChatFileReporter * _reporter; // +0x10
    NSArray * _onlinePreviewSupportedExtList; // +0x18
}
+ (id)shared;
- (void)reloadBubbleUIConfig;
- (BOOL)isNewBubbleUI;
- (void)reloadExtraLargeFileConfig;
- (BOOL)isExtraLargeFileSupported;
- (BOOL)isExtraLargeFile:(unsigned long long)arg1;
- (unsigned long long)extraLargeFileSizeLimit;
- (void)reloadOnliePreviewConfig;
- (BOOL)isOnlinePreviewEnabled;
- (BOOL)isFileSupportOnlinePreview:(id)arg1;
- (BOOL)isOnlinePreviewEnabledForUrlFile;
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
- (BOOL)isNewBubbleUIFlag;
- (void)setIsNewBubbleUIFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
