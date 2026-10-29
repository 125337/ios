@interface AmoebaGeneralMonitorDelegateProxy : NSObject <AmoebaGeneralMonitorDelegate>
{
    id <AmoebaGeneralMonitorDelegate> _monitorDelegate; // +0x8
}
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)monitorView:(id)arg1 newExposedIds:(id)arg2;
- (void)monitorView:(id)arg1 newExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (id)monitorDelegate;
- (void)setMonitorDelegate:(id)arg1;
- (void).cxx_destruct;
@end
