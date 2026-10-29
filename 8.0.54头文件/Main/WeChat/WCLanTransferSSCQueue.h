@interface WCLanTransferSSCQueue : NSObject
{
    id <WCLanTransferSSCDelegate> _delegate; // +0x8
    NSObject<OS_dispatch_queue> * _sscQueue; // +0x10
    NSMutableDictionary * _taskInfoDict; // +0x18
    NSMutableDictionary * _taskInfoStartDict; // +0x20
}
- (id)sscQueue;
- (void)addTaskInfo:(id)arg1;
- (void)stopTaskInfo:(id)arg1;
- (void)handleDownloadProgress:(const void *)arg1 total:(unsigned long long)arg2 complete:(unsigned long long)arg3 tryShow:(BOOL)arg4;
- (void)handleDownload:(const void *)arg1 withStatus:(const void *)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setSscQueue:(id)arg1;
- (id)taskInfoDict;
- (void)setTaskInfoDict:(id)arg1;
- (id)taskInfoStartDict;
- (void)setTaskInfoStartDict:(id)arg1;
- (void).cxx_destruct;
@end

