@interface WAPackageDownloadTask : NSObject
{
    BOOL _needGzip; // +0x8
    BOOL _enableDownloadResumption; // +0x9
    unsigned int _retryCount; // +0xc
    unsigned int _dnsType; // +0x10
    id /* block */ _progressBlock; // +0x18
    id /* block */ _completionBlock; // +0x20
    NSURLSessionDownloadTask * _downloadTask; // +0x28
    WAPackageCronetDownloadTask * _cronetTask; // +0x30
    NSString * _downloadUrl; // +0x38
    NSString * _fileName; // +0x40
    NSString * _directoryPath; // +0x48
    NSDate * _startDate; // +0x50
    NSString * _appid; // +0x58
    unsigned long long _version; // +0x60
    unsigned long long _downloadType; // +0x68
}
- (id)initWithDownloadTask:(id)arg1 progressBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg1;
- (id)cronetTask;
- (void)setCronetTask:(id)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)directoryPath;
- (void)setDirectoryPath:(id)arg1;
- (id)startDate;
- (void)setStartDate:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (unsigned long long)downloadType;
- (void)setDownloadType:(unsigned long long)arg1;
- (BOOL)needGzip;
- (void)setNeedGzip:(BOOL)arg1;
- (unsigned int)dnsType;
- (void)setDnsType:(unsigned int)arg1;
- (BOOL)enableDownloadResumption;
- (void)setEnableDownloadResumption:(BOOL)arg1;
- (void).cxx_destruct;
@end

