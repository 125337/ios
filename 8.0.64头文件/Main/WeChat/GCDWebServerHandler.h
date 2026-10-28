@interface GCDWebServerHandler : NSObject
{
    id /* block */ _matchBlock; // +0x8
    id /* block */ _asyncProcessBlock; // +0x10
}
- (id)initWithMatchBlock:(id /* block */)arg1 asyncProcessBlock:(id /* block */)arg2;
- (id /* block */)matchBlock;
- (id /* block */)asyncProcessBlock;
- (void).cxx_destruct;
@end
