@interface UDRCheckListener : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _projectIdArray; // +0x8
    NSMutableDictionary * _paramsMap; // +0x10
    NSObject<OS_dispatch_queue> * _queue; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)checkUDRUpdate;
- (void)repeatCheckUDRUpdate;
- (void)doUpdateUDR;
- (void)doCleanUDR;
- (void)updateProjectIdArray;
- (void).cxx_destruct;
@end
