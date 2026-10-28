@interface OMJTaskTrace : NSObject
{
    NSDictionary * _entriesByID; // +0x8
    NSString * _name; // +0x10
    shared_ptr<XMJTaskTrace> _backingTrace; // +0x18
}
- (id)initWithBackingTrace:(const void *)arg1;
- (void)setupEntries;
- (id)runningLeafEntries;
- (id)name;
- (shared_ptr<XMJTaskTrace>)backingTrace;
- (void)setBackingTrace:(shared_ptr<XMJTaskTrace>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
