@interface __AnyPromise : NSObject
{
     box; // +0x8
     context; // +0x10
}
- (id)initWithResolver:(id /* block */)arg1;
- (void)sealTimeOutError;
- (void)setExpiredWithTime:(double)arg1;
- (id)__thenOn:(id)arg1 execute:(id /* block */)arg2;
- (id)__catchOn:(id)arg1 execute:(id /* block */)arg2;
- (id)__ensureOn:(id)arg1 execute:(id /* block */)arg2;
- (id)__wait;
- (void)__pipe:(id /* block */)arg1;
- (id)__value;
- (BOOL)__pending;
- (id)init;
- (void).cxx_destruct;
@end
