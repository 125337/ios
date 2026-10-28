@interface EcsProdctShareLogic : NSObject
{
    MMFinderLiveProductShareTask * _task; // +0x8
}
- (void)shareProductLoadProductWithShareTask:(id)arg1 completeBlock:(id /* block */)arg2;
- (id)finderDataItemTryCurrentLiveWithAnchor:(id)arg1;
- (void)buildProductShareItemWithShareTask:(id)arg1 completion:(id /* block */)arg2;
- (id)task;
- (void)setTask:(id)arg1;
- (void).cxx_destruct;
@end
