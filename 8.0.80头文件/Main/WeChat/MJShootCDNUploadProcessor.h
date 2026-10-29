@interface MJShootCDNUploadProcessor : NSObject
{
    CdnUploadTaskInfo * _resultFileUploadedTaskInfo; // +0x8
    NSMutableArray * _auditFileUploadedTaskInfos; // +0x10
}
- (void)uploadWithResultFilePath:(id)arg1 mediaType:(long long)arg2 cdnAppType:(int)arg3 progressHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (id)auditFileUploadedTaskInfos;
- (id)resultFileUploadedTaskInfo;
- (void)setResultFileUploadedTaskInfo:(id)arg1;
- (void)setAuditFileUploadedTaskInfos:(id)arg1;
- (void).cxx_destruct;
@end
