@interface WAJSEventHandler_uploadToCommonCDN : WAJSEventHandler_BaseEvent <ICdnComMgrExt, IWAUploadToCommonCDNExt>
{
    NSString * _fileKey; // +0x8
    long long _finishedLength; // +0x10
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)startUpload:(id)arg1;
- (void)cancelUpload:(id)arg1;
- (void)onWACDNUploadCancel:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (long long)finishedLength;
- (void)setFinishedLength:(long long)arg1;
- (void).cxx_destruct;
@end

