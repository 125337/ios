@interface OMJServiceManager : NSObject
{
    SharedPtr<XMJServiceManager> _backingServiceManager; // +0x8
}
- (id)initWithBackingServiceManager:(const void *)arg1;
- (void)dealloc;
- (void)requestAllCamFunTemplateInfosWithCompletionHandler:(id /* block */)arg1;
- (void)requestTemplateDescWithTemplateID:(id)arg1 completionHandler:(id /* block */)arg2;
- (SharedPtr<XMJServiceManager>)backingServiceManager;
- (void)setBackingServiceManager:(SharedPtr<XMJServiceManager>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
