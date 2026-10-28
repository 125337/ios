@interface SendVerifyMsgBusinessCardImageLogic : MMObject
{
    id <SendVerifyMsgBusinessCardImageDelegate> _delegate; // +0x8
}
+ (id)getBusinessCardImageRootPath;
+ (id)pathForBusinessCardImage:(id)arg1 url:(id)arg2;
- (void)uploadBusinessCardImgPersistentStorageWithUserName:(id)arg1 businessCardImage:(id)arg2 scene:(unsigned int)arg3;
- (void)uploadBusinessCardImgShortStorageWithUserName:(id)arg1 businessCardImage:(id)arg2 scene:(unsigned int)arg3;
- (void)uploadBusinessCardImgWithUserName:(id)arg1 businessCardImage:(id)arg2 scene:(unsigned int)arg3 isShortStorage:(BOOL)arg4;
- (C2CUploadRequest)genPersistentStorageUploadRequest;
- (C2CUploadRequest)genShortStorageUploadRequest:(id)arg1;
- (void)downloadBusinessCardImgWithUserName:(id)arg1 businessCardImageFileId:(id)arg2 businessCardImageUrl:(id)arg3 businessCardImageAesKey:(id)arg4 scene:(unsigned int)arg5;
- (C2CDownloadRequest)genPersistentStorageDownloadRequestWithbusinessCardImageUrl:(id)arg1 businessCardImageAesKey:(id)arg2;
- (C2CDownloadRequest)genShortStorageDownloadRequestWithBusinessCardImageFileId:(id)arg1 businessCardImageAesKey:(id)arg2;
- (id)pathForBusinessCardImage:(id)arg1 url:(id)arg2;
- (id)pathForBusinessCardImage:(id)arg1 url:(id)arg2 isTempPath:(BOOL)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
