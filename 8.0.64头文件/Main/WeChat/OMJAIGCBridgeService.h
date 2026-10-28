@interface OMJAIGCBridgeService : NSObject
{
    id <OMJAIGCBridgeServiceDelegate> _delegate; // +0x8
    SharedPtr<XMJBridgeAIGCService> _backingService; // +0x10
}
- (id)init;
- (void)setupCallback;
- (void)notifySubmitCompletionWithResponse:(id)arg1 error:(id)arg2;
- (void)notifyQueryCompletionWithResponse:(id)arg1 error:(id)arg2;
- (void)notifyCancelCompletionWithTaskID:(id)arg1 error:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (SharedPtr<XMJBridgeAIGCService>)backingService;
- (void)setBackingService:(SharedPtr<XMJBridgeAIGCService>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
