@interface WCFinderResourceLoader : NSObject <ICdnComMgrExt>
{
    unsigned long long _maxDownloadCount; // +0x8
    NSMutableDictionary * _taskDict; // +0x10
    NSMutableArray * _waitingQueue; // +0x18
    NSMutableDictionary * _waitingListenerDict; // +0x20
}
- (id)init;
- (BOOL)addLoadTask:(id)arg1;
- (BOOL)cancelLoadTask:(id)arg1;
- (void)startDownloadIfCan;
- (void)retryDownloadTask:(id)arg1;
- (void)callCompleteBlockWithTask:(id)arg1 ret:(BOOL)arg2;
- (id)waitingQueue;
- (id)taskDict;
- (id)waitingListenerDict;
- (id)waitingListenerWithUid:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (unsigned long long)maxDownloadCount;
- (void)setMaxDownloadCount:(unsigned long long)arg1;
- (void)setTaskDict:(id)arg1;
- (void)setWaitingQueue:(id)arg1;
- (void)setWaitingListenerDict:(id)arg1;
- (void).cxx_destruct;
@end
