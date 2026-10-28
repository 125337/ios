@interface WAPackageDownloadLogic : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, ICdnComMgrExt, WAPackageDownloadTaskDelegate>
{
    NSMutableDictionary * _dicDownloadStatus; // +0x8
    NSMutableArray * _arrWaittingTaskQueue; // +0x10
    NSMutableArray * _arrDownloadingTaskQueue; // +0x18
    BOOL _bUseSerialMode; // +0x20
    id <WAPackageDownloadLogicDelegate> m_delegate; // +0x28
    unsigned long long _pkgType; // +0x30
    NSURLSession * _session; // +0x38
}
- (id)init;
- (BOOL)shouldUseCdnDownLoad;
- (BOOL)shouldUseCronetDierctlyDownLoad;
- (unsigned int)getDownloadDNSTypeWithUrl:(id)arg1;
- (BOOL)dominCanUseSimpleDNS:(id)arg1;
- (void)realStartDownloadWithTask:(id)arg1;
- (void)invalidate;
- (id)getDownloadFileIdentifier:(id)arg1;
- (BOOL)isDownloadingTaskWithUrlStr:(id)arg1;
- (id)getDownloadDirectoryPath:(id)arg1;
- (void)addDownloadTaskWithParams:(id)arg1;
- (void)checkQueue;
- (void)raiseDownloadPriorityWithAppid:(id)arg1;
- (void)cancelAllDownloads;
- (void)cancelDownloadTaskWithUrlStr:(id)arg1;
- (void)cleanTmpDirectory;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)reportDownloadSpendTime:(double)arg1 isDownloadError:(BOOL)arg2 fileIdentifier:(id)arg3;
- (float)remainingTimeForDownload:(id)arg1 bytesTransferred:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3;
- (void)onCronetDownloadResponse:(id)arg1 filePath:(id)arg2 protocolInfo:(id)arg3;
- (void)OnCronetDownloadProgress:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)onDownloadSuccess:(id)arg1 protocolInfo:(id)arg2 sourceFilePath:(id)arg3 downloadType:(unsigned long long)arg4;
- (void)onDownloadFail:(id)arg1 statusCode:(int)arg2 retCode:(int)arg3 transferInfo:(id)arg4 protocolInfo:(id)arg5 downloadType:(unsigned long long)arg6;
- (unsigned long long)getProtocolFromCdnDownloadInfo:(id)arg1;
- (id)getProtocolInfoFromCdnDownloadInfo:(id)arg1;
- (id)getDescriptionForDownloadProtocol:(unsigned long long)arg1;
- (id)getTaskUrlList;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)bUseSerialMode;
- (void)setBUseSerialMode:(BOOL)arg1;
- (unsigned long long)pkgType;
- (void)setPkgType:(unsigned long long)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void).cxx_destruct;
@end
