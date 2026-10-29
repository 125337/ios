@interface WAConfigContactAttribute : NSObject
{
    CAppBrandInfo * _appBrandInfo; // +0x8
}
- (id)initWithAppBrandInfo:(id)arg1;
- (unsigned long long)localStorageMaxSizeBytes;
- (unsigned long long)localStorageMaxOpendataSizeBytes;
- (unsigned long long)fileStorageMaxSizeBytes;
- (unsigned long long)fileStorageMaxOpendataSizeBytes;
- (unsigned long long)fileStorageMaxTempSizeBytes;
- (unsigned long long)fileStorageMinTempAvailableSpaceBytes;
- (unsigned long long)fileStorageMaxWxPrivateSizeBytes;
- (unsigned long long)disasterTolerantBytesWithMB:(unsigned long long)arg1 minSizeMB:(unsigned long long)arg2;
- (unsigned int)webViewMaxDepth;
- (unsigned int)actualWebViewDepth;
- (unsigned int)backgroundMaxRunningTimeInterval;
- (unsigned int)requestMaxConcurrentCount;
- (unsigned int)uploadFileMaxConcurrentCount;
- (unsigned int)downloadFileMaxConcurrentCount;
- (unsigned int)webSocketMaxConcurrentCount;
- (unsigned int)maxWorkerConcurrent;
- (unsigned int)backgroundNetworkInterruptedTimeout;
- (unsigned int)lifeSpanBeforeSuspend;
- (unsigned int)lifeSpanAfterSuspend;
- (BOOL)webSocketSkipPortCheck;
- (BOOL)TLSSkipHostnameCheck;
- (unsigned int)videoTaskTimeout;
- (id)requestDomainList;
- (id)webSocketDomainList;
- (id)uploadFileDomainList;
- (id)downloadFileDomainList;
- (id)udpDomainList;
- (id)tcpDomainList;
- (id)bizDomainList;
- (void).cxx_destruct;
@end
