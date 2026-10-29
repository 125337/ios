@interface MMImgDownloader_MsgRecord : MMImgDownloader <IRecordDownloadExt, WCPlayerEventExt>
{
    NSMutableDictionary * _downloadInfos; // +0x8
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
- (void)startDownloadRecordData:(id)arg1 bHD:(BOOL)arg2;
- (void)stopDownloadRecordData:(id)arg1;
- (id)findItemWithDataId:(id)arg1;
- (id)findVideoItemWithMediaId:(id)arg1;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)onPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (id)downloadInfos;
- (void)setDownloadInfos:(id)arg1;
- (void).cxx_destruct;
@end
