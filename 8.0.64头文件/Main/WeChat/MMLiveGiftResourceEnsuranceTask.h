@interface MMLiveGiftResourceEnsuranceTask : NSObject <MMFinderLiveGiftResourceMgrExt>
{
    NSObject<OS_dispatch_group> * _workItemGroup; // +0x8
    NSString * _correlationId; // +0x10
    NSMutableDictionary * _invocationCounters; // +0x18
}
- (id)initWithCorrelationId:(id)arg1;
- (void)invokeResourceDownloadWorkItem:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (id)workItemGroup;
- (void)setWorkItemGroup:(id)arg1;
- (id)correlationId;
- (void)setCorrelationId:(id)arg1;
- (id)invocationCounters;
- (void)setInvocationCounters:(id)arg1;
- (void).cxx_destruct;
@end
