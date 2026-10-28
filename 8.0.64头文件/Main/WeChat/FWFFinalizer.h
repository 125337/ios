@interface FWFFinalizer : NSObject
{
    long long _identifier; // +0x8
    id /* block */ _callback; // +0x10
}
+ (void)attachToInstance:(id)arg1 withIdentifier:(long long)arg2 callback:(id /* block */)arg3;
+ (void)detachFromInstance:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 callback:(id /* block */)arg2;
- (void)dealloc;
- (void).cxx_destruct;
@end
