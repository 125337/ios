@interface MMLiveTaskBaseFunctionPlugin : NSObject
{
    MMLiveBaseTask<MMFinderLiveTaskFunctionPlugin> * _liveTask; // +0x8
}
- (id)initWithLiveTask:(id)arg1;
- (id)finderTaskId;
- (BOOL)isLiveRoom;
- (void)onDataItemUpdated;
- (void)onExtFlagExtUpdated;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (void).cxx_destruct;
@end
