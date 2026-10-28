@interface OMJCDNBridgeService : NSObject
{
    id <OMJCDNBridgeServiceDelegate> _delegate; // +0x8
    SharedPtr<XMJBridgeCDNService> _backingService; // +0x10
}
- (id)init;
- (void)setupCallback;
- (void)notifyDownloadSuccessWithTaskKey:(id)arg1;
- (void)notifyDownloadFailureWithTaskKey:(id)arg1 error:(id)arg2;
- (void)notifyUploadSuccessWithResult:(id)arg1;
- (void)notifyUploadFailureWithTaskKey:(id)arg1 error:(id)arg2;
- (void)notifyDownloadProgressUpdate:(id)arg1 downloadLength:(long long)arg2 totalLength:(long long)arg3 averageSpeed:(float)arg4 instantSpeed:(float)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (SharedPtr<XMJBridgeCDNService>)backingService;
- (void)setBackingService:(SharedPtr<XMJBridgeCDNService>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
