@interface WCFinderClickEventProxy : NSObject
{
    id /* block */ _block; // +0x8
}
+ (id)proxyWithBlock:(id /* block */)arg1;
- (void)addTapGestureToView:(id)arg1;
- (void)addClickActionToButton:(id)arg1;
- (void)onClick;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

