@interface WCDeviceJSApiBatchSearchLogicHelp : MMObject <IWCDeviceBrandMgrExt>
{
    NSString * _brandUserName; // +0x8
    NSMutableArray * _batchSearchRunningQueue; // +0x10
    NSMutableArray * _batchWaitingQueue; // +0x18
    NSMutableArray * _failedSearchedQueue; // +0x20
    BOOL _batchSearchDeviceRunning; // +0x28
    id <WCDeviceJSApiBatchSearchLogicHelpDelegate> _delegate; // +0x30
}
- (id)initWithBrandUserName:(id)arg1;
- (void)removeAllSearchDevice;
- (void)addDevice:(id)arg1;
- (void)checkBatchSearchDeviceWaitingQueue;
- (void)forceBatchSearchDevice:(id)arg1;
- (id)getRunningDeviceScanExt:(id)arg1;
- (void)onBatchSearchWCDevice:(id)arg1 Scene:(int)arg2 Error:(int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

