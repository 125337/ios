@interface WebResourceCDNUploadHelper : MMObject <ICdnComMgrExt, PBMessageObserverDelegate>
{
    BOOL _isUploading; // +0x8
    NSMutableArray * _uploadArray; // +0x10
    WebviewLocalResItem * _curUploadingItem; // +0x18
    id <WebResourceCDNUploadHelperDelegate> _delegate; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)addUploadCDNItem:(id)arg1;
- (BOOL)startUpload;
- (BOOL)stopUpload;
- (void)sendUploadRequest;
- (void)sendGetMediaIdRequest;
- (void)sendNextResItemGetMediaIdRequest;
- (void)handleGetMediaIdResp:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
