@interface AnyPromise : NSObject
{
    __AnyPromise * d; // +0x8
}
+ (id)promiseWithAdapterBlock:(id /* block */)arg1;
+ (id)promiseWithIntegerAdapterBlock:(id /* block */)arg1;
+ (id)promiseWithBooleanAdapterBlock:(id /* block */)arg1;
+ (id)promiseWithSmartResolverBlock:(id /* block */)arg1;
+ (id)promiseWithSmartResolver:(id /* block */ *)arg1;
+ (id)errorPromiseWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)promiseWithSimpleResolverBlock:(id /* block */)arg1;
+ (id)promiseWithBlock:(id /* block */)arg1;
+ (id)promiseWithDuration:(double)arg1 animate:(id /* block */)arg2;
+ (id)promiseWithResolverBlock:(id /* block */)arg1;
+ (id)promiseWithValue:(id)arg1;
- (id)description;
- (id /* block */)setExpiredTime;
- (id /* block */)catchErrorThenSay;
- (id /* block */)showToastForCatchedError;
- (id /* block */)thenAnimation;
- (id)initWith__D:(id)arg1;
- (id)initWithResolver:(id /* block */ *)arg1;
- (void)__pipe:(id /* block */)arg1;
- (id)__d;
- (id /* block */)then;
- (id /* block */)thenOn;
- (id /* block */)thenInBackground;
- (id /* block */)catchOn;
- (id /* block */)catchOnMain;
- (id /* block */)catchInBackground;
- (id /* block */)ensure;
- (id /* block */)ensureOn;
- (id)wait;
- (BOOL)pending;
- (BOOL)rejected;
- (BOOL)fulfilled;
- (id)value;
- (void).cxx_destruct;
@end
