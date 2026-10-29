@interface WACronetHttpBindingTask : NSObject
{
    function<void ()> _task; // +0x8
    shared_ptr<std::atomic<bool>> _state; // +0x28
}
- (id)initWithTask:(function<void ()>)arg1 state:(shared_ptr<std::atomic<bool>>)arg2;
- (void)run;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
