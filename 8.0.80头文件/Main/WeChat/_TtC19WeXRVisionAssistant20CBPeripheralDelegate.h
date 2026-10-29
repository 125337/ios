@interface _TtC19WeXRVisionAssistant20CBPeripheralDelegate : NSObject <CBPeripheralManagerDelegate>
{
     loginService; // +0x8
}
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end
