@interface WAJSEventHandler_uploadEncryptedFileToCDN : WAJSEventHandler_BaseEvent <WebResourceCDNUploadHelperDelegate>
{
    WebResourceCDNUploadHelper * _cdnUploadHelper; // +0x8
    MMTimer * uploadTimer; // +0x10
    BOOL _isShowProgressTips; // +0x18
    NSString * _tempFilePath; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)setTimeoutTimer;
- (void)stopUpload;
- (BOOL)uploadLocalResItem:(id)arg1;
- (id)assembleResItem:(id)arg1;
- (void)onItemUploadProgressWithoutMediaId:(int)arg1 Item:(id)arg2;
- (void)onItemUploadCDNFinishedWithoutMediaId:(int)arg1 Item:(id)arg2;
- (id)tempFilePath;
- (void)setTempFilePath:(id)arg1;
- (BOOL)isShowProgressTips;
- (void)setIsShowProgressTips:(BOOL)arg1;
- (void).cxx_destruct;
@end
