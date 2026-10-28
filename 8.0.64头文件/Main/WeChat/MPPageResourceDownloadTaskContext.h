@interface MPPageResourceDownloadTaskContext : NSObject
{
    unsigned int _templateType; // +0x8
    NSURLSessionDownloadTask * _downloadTask; // +0x10
    id /* block */ _completionHandler; // +0x18
}
- (unsigned int)templateType;
- (void)setTemplateType:(unsigned int)arg1;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
