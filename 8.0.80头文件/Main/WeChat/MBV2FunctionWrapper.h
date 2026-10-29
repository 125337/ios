@interface MBV2FunctionWrapper : NSObject
{
    function<void ()> _func; // +0x8
    weak_ptr<magicbrush_v2::TaskRunner> _js_call; // +0x28
}
- (id)initWithFunc:(function<void ()>)arg1 jsCall:(shared_ptr<magicbrush_v2::TaskRunner>)arg2;
- (void)run;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
