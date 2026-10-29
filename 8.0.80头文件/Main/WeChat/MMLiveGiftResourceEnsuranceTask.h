@interface MMLiveGiftResourceEnsuranceTask : NSObject <MMFinderLiveGiftResourceMgrExt>
{
    NSObject<OS_dispatch_group> * _workItemGroup; // +0x8
    NSString * _correlationId; // +0x10
    NSMutableDictionary * _invocationCounters; // +0x18
}
- (id)initWithCorrelationId:(id)arg1;
- (void)invokeResourceDownloadWorkItem:(id)arg1;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (id)workItemGroup;
- (void)setWorkItemGroup:(id)arg1;
- (id)correlationId;
- (void)setCorrelationId:(id)arg1;
- (id)invocationCounters;
- (void)setInvocationCounters:(id)arg1;
- (void).cxx_destruct;
@end
