@interface LiteAppJsApiRequestPreviewFileInfo : LiteAppJsApi
{
    int _previewType; // +0x20
    NSString * _savePath; // +0x28
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (C2CDownloadRequest)buildCDNRequest:(id)arg1 aesKey:(id)arg2 subType:(id)arg3 version:(id)arg4 fileFormat:(id)arg5 extInfo:(id)arg6 password:(id)arg7 fileSize:(long long)arg8 previewType:(int)arg9;
- (void)handlePreviewDocumentResponse:(id)arg1;
- (void)handlePreviewArchiveResponse:(id)arg1;
- (id)parseUnarchivedFile:(id)arg1;
- (void)handlePreviewImageResponse;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (int)previewType;
- (void)setPreviewType:(int)arg1;
- (void).cxx_destruct;
@end
