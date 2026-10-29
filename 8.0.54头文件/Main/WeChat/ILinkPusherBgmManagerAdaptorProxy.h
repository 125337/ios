@interface ILinkPusherBgmManagerAdaptorProxy : NSProxy
{
    ILinkPusherBgmManagerAdaptor * _ilinkPusherBgmManagerAdaptor; // +0x8
}
+ (Class)class;
- (id)initWithInstance:(id)arg1;
- (void)destroy;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)ilinkPusherBgmManagerAdaptor;
- (void)setIlinkPusherBgmManagerAdaptor:(id)arg1;
- (void).cxx_destruct;
@end

