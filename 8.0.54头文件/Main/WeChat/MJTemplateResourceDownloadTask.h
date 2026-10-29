@interface MJTemplateResourceDownloadTask : NSObject
{
    BOOL _isHighPriority; // +0x8
    MJVideoTemplate * _templateInfo; // +0x10
    WCDownloadArgsWrap * _downloadArgs; // +0x18
    id /* block */ _completion; // +0x20
}
+ (id)taskWithTemplateInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithTemplateInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)resume;
- (BOOL)isEqualToTask:(id)arg1;
- (void)cancel;
- (BOOL)isRunningOrWaiting;
- (BOOL)isHighPriority;
- (void)setIsHighPriority:(BOOL)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)downloadArgs;
- (void)setDownloadArgs:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

