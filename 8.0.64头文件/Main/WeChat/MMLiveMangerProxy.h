@interface MMLiveMangerProxy : NSProxy
{
    MMLiveManger * _liveManager; // +0x8
}
+ (Class)class;
- (id)initWithInstance:(id)arg1;
- (void)destroy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)liveManager;
- (void)setLiveManager:(id)arg1;
- (void).cxx_destruct;
@end
