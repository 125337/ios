@interface WePkgOperateUpdateMgr : MMObject
{
    NSObject<OS_dispatch_queue> * _dispatchQueue; // +0x8
}
- (id)init;
- (BOOL)operateUpdateAtomicPart:(id)arg1 RegularConfig:(id)arg2 VersionChanged:(BOOL *)arg3;
- (BOOL)operateUpdateNonAtomicPart:(id)arg1 RegularConfig:(id)arg2 VersionChanged:(BOOL *)arg3;
- (void)operateUpdateForPkgId:(id)arg1 AtomicPart:(BOOL)arg2 NonAtomicPart:(BOOL)arg3 completeBlock:(id /* block */)arg4;
- (void)performBlockOnSerialQueue:(id /* block */)arg1;
- (void)mainQueueCallCompleteBlock:(id /* block */)arg1 withResult:(BOOL)arg2;
- (id)dispatchQueue;
- (void).cxx_destruct;
@end
