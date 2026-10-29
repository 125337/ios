@interface _PayDirectUseCaseCallback : NSObject <MMUseCaseCallback>
{
    id /* block */ _handler; // +0x8
    _PayDirectUseCaseCallback * _selfRetain; // +0x10
}
- (void)call:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (id)selfRetain;
- (void)setSelfRetain:(id)arg1;
- (void).cxx_destruct;
@end
