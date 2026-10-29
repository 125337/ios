@interface XNetInferenceError : NSError
{
    shared_ptr<xnet::Status> _underlying; // +0x8
}
- (id)initWithUnderlying:(const void *)arg1;
- (id)description;
- (id)descriptionWithoutCallStack;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
