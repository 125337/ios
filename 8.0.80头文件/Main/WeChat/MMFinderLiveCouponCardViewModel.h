@interface MMFinderLiveCouponCardViewModel : NSObject
{
    FinderLiveSyncEcCouponInfoResp_PopupInfo * _info; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    unsigned long long _exposeType; // +0x18
    id <MMFinderLiveCouponCardCoordinator> _coordinator; // +0x20
}
+ (id)viewModelForInfo:(id)arg1 taskId:(id)arg2;
- (id)initWithInfo:(id)arg1 taskId:(id)arg2;
- (Class)slotViewClass;
- (void)handleExposed;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)exposeType;
- (void)setExposeType:(unsigned long long)arg1;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
