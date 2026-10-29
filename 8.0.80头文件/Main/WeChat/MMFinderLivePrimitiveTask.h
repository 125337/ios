@interface MMFinderLivePrimitiveTask : MMFinderLiveTask
{
    MMFinderLivePrimitiveParam * _primitiveParam; // +0x8
}
- (void)updatePrimitiveParam:(id)arg1;
- (id)createLiveViewWithFrame:(CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (id)primitiveParam;
- (void)setPrimitiveParam:(id)arg1;
- (void).cxx_destruct;
@end
