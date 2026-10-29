@interface WAJSEventHandler_BaseBluetooth : WAJSEventHandler_BaseEvent
- (id)bleInstance;
- (id)peripheralBleInstance;
- (void)syncInvokerAppIdIfNeeded:(id)arg1;
- (void)syncInvokerAppIdIfNeededForPeripheral:(id)arg1;
@end
