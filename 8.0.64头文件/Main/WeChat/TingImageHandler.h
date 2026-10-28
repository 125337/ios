@interface TingImageHandler : NSObject
{
    id _observer; // +0x8
    id /* block */ _completion; // +0x10
}
+ (id)handlerWithObserver:(id)arg1 completion:(id /* block */)arg2;
- (id)observer;
- (void)setObserver:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
