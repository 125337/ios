@interface LiteAppJsApiUploadToCommonCDN : LiteAppJsApi <ICdnComMgrExt>
{
    NSString * _fileKey; // +0x20
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)startUpload:(id)arg1;
- (void)cancelUpload:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (void).cxx_destruct;
@end
