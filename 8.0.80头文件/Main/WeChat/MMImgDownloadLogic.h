@interface MMImgDownloadLogic : NSObject <MMImgDownloaderDelegate>
{
    id <MMImgDownloadLogicDelegate> _delegate; // +0x8
    NSMutableArray * _downloaders; // +0x10
}
- (id)init;
- (void)initDownloadItem:(id)arg1;
- (void)startDownloadImage:(id)arg1 bHD:(BOOL)arg2;
- (void)stopDownloadImage:(id)arg1;
- (void)startDownloadVideo:(id)arg1 bHD:(BOOL)arg2 bSave:(BOOL)arg3 bSilent:(BOOL)arg4;
- (void)stopDownloadVideo:(id)arg1;
- (void)silentImageDownloadTasks:(id)arg1;
- (void)silentDownloadToBackupDevice:(id)arg1;
- (unsigned long long)downloadStatusForItem:(id)arg1;
- (id)downloaderForItem:(id)arg1;
- (void)onDownloadImagePart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)onDownloadImageOk:(id)arg1;
- (void)onDownloadImageFail:(id)arg1;
- (void)onDownloadImageExpired:(id)arg1;
- (void)onICloudImageLoading:(id)arg1 progress:(float)arg2;
- (void)onICloudImageLoadingOK:(id)arg1;
- (void)onICloudImageLoadingFail:(id)arg1;
- (void)onSendImageProgress:(id)arg1 progress:(float)arg2;
- (void)onDownloadVideoPart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)onDownloadVideoOk:(id)arg1;
- (void)onDownloadVideoFail:(id)arg1;
- (void)onDownloadVideoExpired:(id)arg1;
- (id)playerViewWithItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)downloaders;
- (void)setDownloaders:(id)arg1;
- (void).cxx_destruct;
@end
