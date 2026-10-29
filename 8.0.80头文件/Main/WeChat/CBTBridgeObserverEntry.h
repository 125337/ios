@interface CBTBridgeObserverEntry : NSObject
{
    id /* block */ _parser; // +0x8
    id /* block */ _handler; // +0x10
}
- (id /* block */)parser;
- (void)setParser:(id /* block */)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
