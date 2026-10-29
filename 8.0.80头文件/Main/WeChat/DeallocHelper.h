@interface DeallocHelper : NSObject
{
    id m_target; // +0x8
    id /* block */ m_callback; // +0x10
}
+ (BOOL)exist:(id)arg1 forKey:(const void *)arg2;
+ (void)attachToObject:(id)arg1 key:(const void *)arg2 whenDeallocDoThis:(id /* block */)arg3;
+ (void)dettachObject:(id)arg1 key:(const void *)arg2;
- (void)dealloc;
- (void).cxx_destruct;
@end
