@interface MMImgDownloader_Message : MMImgDownloader <IDownloadImageExt, C2CVideoDownloadMgrExt, IMsgExt, IMMAssetICloudExt, WCPlayerEventExt>
{
    NSMutableDictionary * _downloadInfos; // +0x8
    NSMutableArray * _iCloudLoadingItems; // +0x10
    NSMutableArray * _sendingItems; // +0x18
}
- (id)init;
- (BOOL)canDownloadItem:(id)arg1;
- (void)initDownloadItem:(id)arg1;
- (void)startDownloadImage:(id)arg1 bHD:(BOOL)arg2;
- (void)stopDownloadImage:(id)arg1;
- (void)startDownloadVideo:(id)arg1 bHD:(BOOL)arg2 bSave:(BOOL)arg3 bSilent:(BOOL)arg4;
- (void)stopDownloadVideo:(id)arg1;
- (void)silentImageDownloadTasks:(id)arg1;
- (void)silentDownloadToBackupDevice:(id)arg1;
- (unsigned long long)downloadStatusForItem:(id)arg1;
- (id)findItemWithMsg:(id)arg1;
- (id)findICloudItemWithMsg:(id)arg1;
- (id)findSendingItemWithMsg:(id)arg1;
- (void)OnDownloadImagePartNew:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3 TryShow:(BOOL)arg4;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)onVideoDownloadProgress:(id)arg1 isRaw:(BOOL)arg2 progressInfo:(id)arg3;
- (void)onVideoDownloadComplete:(id)arg1 isRaw:(BOOL)arg2 taskInfo:(id)arg3;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)onAssetImageDonwloadFail:(id)arg1;
- (id)findItemWithAssetUrl:(id)arg1;
- (id)downloadInfos;
- (void)setDownloadInfos:(id)arg1;
- (id)iCloudLoadingItems;
- (void)setICloudLoadingItems:(id)arg1;
- (id)sendingItems;
- (void)setSendingItems:(id)arg1;
- (void).cxx_destruct;
@end
