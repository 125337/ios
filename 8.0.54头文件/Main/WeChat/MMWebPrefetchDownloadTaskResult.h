@interface MMWebPrefetchDownloadTaskResult : MMObject
{
    BOOL _notModified; // +0x8
    BOOL _isRedirect; // +0x9
    unsigned int _dataSize; // +0xc
    unsigned int _downloadTime; // +0x10
    MMWebPrefetchDownloadTaskRequest * _request; // +0x18
    NSDictionary * _respHeaderFields; // +0x20
    NSString * _redirectUrl; // +0x28
}
- (id)description;
- (id)request;
- (void)setRequest:(id)arg1;
- (BOOL)notModified;
- (void)setNotModified:(BOOL)arg1;
- (id)respHeaderFields;
- (void)setRespHeaderFields:(id)arg1;
- (BOOL)isRedirect;
- (void)setIsRedirect:(BOOL)arg1;
- (id)redirectUrl;
- (void)setRedirectUrl:(id)arg1;
- (unsigned int)dataSize;
- (void)setDataSize:(unsigned int)arg1;
- (unsigned int)downloadTime;
- (void)setDownloadTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

