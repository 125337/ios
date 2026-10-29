@interface WAPackageCronetDownloadTask : NSObject
{
    shared_ptr<WAPkgCronetDownloadCallback> m_pCallback; // +0x8
    CronetTaskParams params_download; // +0x18
    NSString * _url; // +0x228
    double _timeout; // +0x230
    id /* block */ _completionHandler; // +0x238
    basic_string<char, std::char_traits<char>, std::allocator<char>> _cronetTaskID; // +0x240
    NSString * _nsCronetTaskID; // +0x258
    BOOL _isCanceled; // +0x260
    id <WAPackageDownloadTaskDelegate> _delegate; // +0x268
    WAPackageDownloadTask * _taskObj; // +0x270
    unsigned long long _taskStartTime; // +0x278
    NSDictionary * _headerDic; // +0x280
}
- (void)dealloc;
- (BOOL)isFollowCronetRedirect;
- (void)createDirectlyCronetDownloadTask:(id)arg1;
- (BOOL)callCronetDownload;
- (void)cancel;
- (void)cronetDownloadBytesOverFlow;
- (void)cronetDownloadTimeOut;
- (void)OnCompleted:(const void *)arg1;
- (void)OnProgress:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;
- (void)OnReceiveHeader:(const void *)arg1 status_code:(int)arg2 protocol:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg3;
- (unsigned long long)getProtocolFromCronetTaskResult:(const void *)arg1;
- (id)getProtocolInfoFromCronetTaskResult:(const void *)arg1;
- (int)toCronetDnsType:(unsigned int)arg1;
- (unsigned int)toWADownloadDNSType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskObj;
- (void)setTaskObj:(id)arg1;
- (unsigned long long)taskStartTime;
- (void)setTaskStartTime:(unsigned long long)arg1;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (id)headerDic;
- (void)setHeaderDic:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

