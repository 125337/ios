@interface OMJMaasSessionHolder : NSObject
{
    unsigned long long _type; // +0x8
    SharedPtr<XMJDefaultSessionWrapper> _backingSession; // +0x10
}
- (id)initWithBackingSession:(SharedPtr<XMJDefaultSessionWrapper>)arg1 type:(unsigned long long)arg2;
- (void)startupWithCompletionHandler:(id /* block */)arg1;
- (void)teardownWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)type;
- (SharedPtr<XMJDefaultSessionWrapper>)backingSession;
- (void)setBackingSession:(SharedPtr<XMJDefaultSessionWrapper>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
