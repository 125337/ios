@interface OMJAppRequestBridgeService : NSObject
{
    id <OMJAppRequestBridgeServiceDelegate> _delegate; // +0x8
    SharedPtr<XMJBridgeAppRequestService> _backingService; // +0x10
}
- (id)init;
- (void)invalidateAndDrainPendingCallbacks;
- (void)shutdown;
- (void)notifySuccessWithHandle:(id)arg1 responseBody:(id)arg2;
- (void)notifyFailureWithHandle:(id)arg1 errorCode:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (SharedPtr<XMJBridgeAppRequestService>)backingService;
- (void)setBackingService:(SharedPtr<XMJBridgeAppRequestService>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
