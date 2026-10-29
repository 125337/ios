@interface _MMNexusUDRPending : NSObject
{
    NSString * _resourceName; // +0x8
    id /* block */ _callback; // +0x10
    NSTimer * _timer; // +0x18
}
- (id)resourceName;
- (void)setResourceName:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
