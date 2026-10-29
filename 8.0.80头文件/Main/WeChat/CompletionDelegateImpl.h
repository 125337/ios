@interface CompletionDelegateImpl : NSObject <MMDiskUsageScannerDelegate>
{
    id /* block */ _callback; // +0x8
    id <MMDiskUsageScannerDelegate> _oldDelegate; // +0x10
}
- (id)initWithCallback:(id /* block */)arg1 oldDelegate:(id)arg2;
- (void)onDiskUsageScanStart;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)oldDelegate;
- (void)setOldDelegate:(id)arg1;
- (void).cxx_destruct;
@end
