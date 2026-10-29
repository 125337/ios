@interface OMJSignedURLRefreshBridgeService : NSObject
{
    id <OMJSignedURLRefreshBridgeServiceDelegate> _delegate; // +0x8
    SharedPtr<XMJBridgeSignedURLRefreshService> _backingService; // +0x10
}
- (id)init;
- (void)invalidatePendingCallbacks;
- (void)notifySuccessWithTaskID:(unsigned int)arg1 refreshedURLs:(id)arg2;
- (void)notifyFailureWithTaskID:(unsigned int)arg1 error:(id)arg2;
- (void)notifySuccessWithTaskID:(unsigned int)arg1 callbackToken:(unsigned long long)arg2 refreshedURLs:(id)arg3;
- (void)notifyFailureWithTaskID:(unsigned int)arg1 callbackToken:(unsigned long long)arg2 error:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (SharedPtr<XMJBridgeSignedURLRefreshService>)backingService;
- (void)setBackingService:(SharedPtr<XMJBridgeSignedURLRefreshService>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
