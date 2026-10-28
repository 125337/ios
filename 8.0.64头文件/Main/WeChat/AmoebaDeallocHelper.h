@interface AmoebaDeallocHelper : NSObject
{
    id _target; // +0x8
    id /* block */ _callback; // +0x10
}
+ (BOOL)exist:(id)arg1 forKey:(const void *)arg2;
+ (void)attachToObject:(id)arg1 key:(const void *)arg2 whenDeallocDoThis:(id /* block */)arg3;
+ (void)DettachObject:(id)arg1 key:(const void *)arg2;
- (void)dealloc;
- (id)target;
- (void)setTarget:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
