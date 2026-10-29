@interface MMFinderLiveGroupedProductsViewModel : NSObject <WCFinderLiveLogReportValueProvider>
{
    MMFinderLiveTaskId * _taskID; // +0x8
    FinderLiveGetPairingTabResponse_PairingInfo * _data; // +0x10
    unsigned long long _currentIndex; // +0x18
}
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (id)initWithData:(id)arg1 taskID:(id)arg2 old:(id)arg3;
- (void)onBottomMainRouterClicked;
- (void)onLabelClicked:(id)arg1;
- (void)openWithEntrance:(id)arg1 finderJumpInfo:(id)arg2 ecsJumpInfo:(id)arg3;
- (BOOL)updateIndexIfNeeded:(unsigned long long)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
