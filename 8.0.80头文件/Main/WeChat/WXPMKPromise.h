@interface WXPMKPromise : NSObject
{
    NSObject<OS_dispatch_queue> * _promiseQueue; // +0x8
    NSMutableArray * _handlers; // +0x10
    id _result; // +0x18
}
+ (id)pause:(double)arg1;
+ (id)when:(id)arg1;
+ (id)all:(id)arg1;
+ (id)hang:(id)arg1;
+ (id)until:(id /* block */)arg1 catch:(id)arg2;
+ (id)join:(id)arg1;
+ (id)promiseWithValue:(id)arg1;
+ (id)promiseWithResolver:(id /* block */)arg1;
+ (id)new:(id /* block */)arg1;
+ (id)promiseWithAdapter:(id /* block */)arg1;
+ (id)promiseWithIntegerAdapter:(id /* block */)arg1;
+ (id)promiseWithBooleanAdapter:(id /* block */)arg1;
- (id /* block */)thenUnleashZalgo;
- (id /* block */)pause;
- (id)init;
- (id /* block */)then;
- (id /* block */)thenInBackground;
- (id /* block */)catchOnMain;
- (id /* block */)finally;
- (id)resolved:(id /* block */)arg1 pending:(id /* block */)arg2;
- (id /* block */)thenOn;
- (id /* block */)catchOn;
- (id /* block */)finallyOn;
- (id)then:(id /* block */)arg1 :(id /* block */)arg2;
- (BOOL)pending;
- (BOOL)resolved;
- (BOOL)fulfilled;
- (BOOL)rejected;
- (id)value;
- (id)description;
- (void).cxx_destruct;
@end
