@interface DownloadImageCDNMgr : NSObject <ICdnComMgrExt, IRoamBackupPackageServiceExt>
{
    NSMutableArray * m_arrQueue; // +0x8
    CdnTaskInfo * m_oCurTaskInfo; // +0x10
    long long _m_type; // +0x18
    LiveMsgDownloadHelper * _liveMsgDownloadHelper; // +0x20
}
+ (C2CDownloadRequest)getDownloadRequestWithMsgWrap:(id)arg1;
- (id)init;
- (id)GetImageCachePath;
- (void)LoadCacheData;
- (void)moveImageCacheDataToCommonCache;
- (BOOL)CheckForLocalCache:(id)arg1;
- (void)onDelayCallDownloadOK:(id)arg1;
- (id)getDownloadTypeName;
- (void)CheckQueue;
- (BOOL)downloadLiveVideoData:(id)arg1;
- (BOOL)downloadImageWithCdnInfo:(id)arg1;
- (BOOL)downloadImageData:(id)arg1;
- (BOOL)IsDownloadingHD:(id)arg1;
- (BOOL)IsDownloading:(id)arg1;
- (BOOL)isCurrentDownloading:(id)arg1;
- (BOOL)StopImageDownloadTaskWithMsg:(id)arg1;
- (BOOL)StopImageDownloadTaskWithMsg:(id)arg1 withNotify:(BOOL)arg2;
- (void)StartDownloadHDImageForSaveAlbum:(id)arg1;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2 AutoDownload:(BOOL)arg3;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2 AutoDownload:(BOOL)arg3 SaveAlbum:(BOOL)arg4;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2 AutoDownload:(BOOL)arg3 SaveAlbum:(BOOL)arg4 Silent:(BOOL)arg5;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2 AutoDownload:(BOOL)arg3 SaveAlbum:(BOOL)arg4 Silent:(BOOL)arg5 behavior:(long long)arg6;
- (void)StartDownloadByTaskInfo:(id)arg1;
- (void)StopCurDownload;
- (void)StopDownloadImageByUsrName:(id)arg1 FromDelMsg:(BOOL)arg2;
- (BOOL)tryDownloadFromCloudBackup;
- (void)DownloadFail:(int)arg1 Expired:(BOOL)arg2;
- (void)saveImageToAlbum;
- (void)DownloadOK;
- (id)GetFilePath:(id)arg1 isHd:(BOOL)arg2;
- (id)GetTempFilePath:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)convertWXAMToJPG:(id)arg1 nsFilePath:(id)arg2 nsTempPath:(id)arg3 oDownloadInfo:(id)arg4;
- (void)OnCdnDownloadFail:(id)arg1;
- (void)OnCdnDownloadSucc:(id)arg1;
- (void)MoveWaittingTasks:(id)arg1 ToSilentQueue:(id)arg2;
- (void)onRoamBackupPackageServiceLoadMediaProgress:(id)arg1 dataID:(id)arg2 finished:(unsigned long long)arg3 total:(unsigned long long)arg4;
- (void)onRoamBackupPackageServiceLoadMediaResult:(id)arg1 errorCode:(unsigned int)arg2 dataID:(id)arg3;
- (id)m_oCurTaskInfo;
- (void)setM_oCurTaskInfo:(id)arg1;
- (long long)m_type;
- (void)setM_type:(long long)arg1;
- (id)liveMsgDownloadHelper;
- (void)setLiveMsgDownloadHelper:(id)arg1;
- (void).cxx_destruct;
@end
