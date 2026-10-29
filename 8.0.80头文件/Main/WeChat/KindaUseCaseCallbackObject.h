@interface KindaUseCaseCallbackObject : NSObject <MMUseCaseCallback>
{
    id /* block */ _handler; // +0x8
}
+ (id)create:(id /* block */)arg1;
- (void)call:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
