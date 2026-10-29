@interface MMXp2pWrapperProxy : NSProxy
{
    MMXp2pWrapper * _p2pManager; // +0x8
}
+ (Class)class;
- (id)initWithInstance:(id)arg1;
- (void)destroy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)p2pManager;
- (void)setP2pManager:(id)arg1;
- (void).cxx_destruct;
@end

