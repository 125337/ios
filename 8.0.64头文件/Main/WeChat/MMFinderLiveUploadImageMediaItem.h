@interface MMFinderLiveUploadImageMediaItem : MMFinderLiveUploadMediaItemBase
{
    NSString * _imageFilePath; // +0x8
    NSString * _thumbFilePath; // +0x10
    MMLiveStorageCleanupPinningToken * _pinningToken; // +0x18
}
- (id)initWithUploadTaskId:(id)arg1 imageFilePath:(id)arg2 thumbFilePath:(id)arg3;
- (BOOL)checkFileExist;
- (BOOL)checkCdnUploadEnable;
- (C2CUploadRequest)getCdnUploadHeader;
- (void)setNewUploadInfo:(id)arg1;
- (id)imageFilePath;
- (void)setImageFilePath:(id)arg1;
- (id)thumbFilePath;
- (void)setThumbFilePath:(id)arg1;
- (id)pinningToken;
- (void)setPinningToken:(id)arg1;
- (void).cxx_destruct;
@end
