@interface MBFunctionWrapper : NSObject
{
    function<void ()> _func; // +0x8
    weak_ptr<mmuv::UVAsyncCall> _js_call; // +0x28
}
- (id)initWithFunc:(function<void ()>)arg1 jsCall:(shared_ptr<mmuv::UVAsyncCall>)arg2;
- (void)run;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
