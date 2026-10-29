@interface PAGAnimationCallback : NSObject
{
    function<void ()> callback; // +0x8
}
- (id)initWithCallback:(function<void ()>)arg1;
- (void)update:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
