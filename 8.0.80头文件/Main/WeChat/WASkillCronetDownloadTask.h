@interface WASkillCronetDownloadTask : NSObject <NSURLSessionDownloadDelegate>
{
    BOOL _cancelled; // +0x8
    BOOL _finished; // +0x9
    id <WASkillDownloadTaskDelegate> _delegate; // +0x10
    WASkillInfoData * _info; // +0x18
    NSURLSession * _session; // +0x20
    NSURLSessionDownloadTask * _urlTask; // +0x28
}
- (id)initWithInfo:(id)arg1;
- (void)dealloc;
- (void)start;
- (void)cancel;
- (void)finishWithErrorType:(long long)arg1 error:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)md5OfFileAtPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)urlTask;
- (void)setUrlTask:(id)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (void).cxx_destruct;
@end
