@interface OpenApiImageCdnUploader : NSObject
{
    id /* block */ _uploadCallback; // +0x8
    NSString * _musicDataCDNMsgID; // +0x10
}
- (id)transferImageDataToTargetSize:(id)arg1;
- (id)createMusicVideoCDNMediaInfo:(id)arg1;
- (void)tryUploadMVImageWithData:(id)arg1 callback:(id /* block */)arg2;
- (void)onUplaodFail;
- (void)OnCdnUpload:(id)arg1;
- (id /* block */)uploadCallback;
- (void)setUploadCallback:(id /* block */)arg1;
- (id)musicDataCDNMsgID;
- (void)setMusicDataCDNMsgID:(id)arg1;
- (void).cxx_destruct;
@end

