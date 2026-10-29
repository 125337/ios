@interface MBBizSystem : NSObject
{
    id <IMBPublicServiceProxy> _publicServiceProxy; // +0x8
    id <IMBPluginProxy> _pluginProxy; // +0x10
    MagicBrushService * _service; // +0x18
    NSMutableDictionary * _bizDict; // +0x20
    NSMutableDictionary * _publicServiceRC; // +0x28
    NSMutableDictionary * _serviceToBizMessages; // +0x30
    NSMutableDictionary * _bizToServiceMessages; // +0x38
    NSMutableDictionary * _psDelayDestroyBlocksDict; // +0x40
}
- (void)setupPublicServiceCategory;
- (BOOL)bindPublicService:(id)arg1 biz:(id)arg2;
- (void)unbindPublicService:(id)arg1 biz:(id)arg2;
- (void)unbindAllPublicServiceForBiz:(id)arg1;
- (void)destroyAllBizesForPublicService:(id)arg1;
- (void)forceStop:(id)arg1;
- (void)postMessage:(id)arg1 toPublicService:(id)arg2 fromBiz:(id)arg3;
- (void)publicService:(id)arg1 listenToBiz:(id)arg2;
- (void)postMessage:(id)arg1 toBiz:(id)arg2 fromPublicService:(id)arg3;
- (void)biz:(id)arg1 listenToPublicService:(id)arg2;
- (id)getPublicService:(id)arg1 biz:(id)arg2;
- (id)init;
- (id)createBiz:(id)arg1;
- (id)getBiz:(id)arg1;
- (BOOL)injectPlugin:(id)arg1 intoBiz:(id)arg2;
- (id)publicServiceProxy;
- (void)setPublicServiceProxy:(id)arg1;
- (id)pluginProxy;
- (void)setPluginProxy:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (id)bizDict;
- (void)setBizDict:(id)arg1;
- (id)publicServiceRC;
- (void)setPublicServiceRC:(id)arg1;
- (id)serviceToBizMessages;
- (void)setServiceToBizMessages:(id)arg1;
- (id)bizToServiceMessages;
- (void)setBizToServiceMessages:(id)arg1;
- (id)psDelayDestroyBlocksDict;
- (void)setPsDelayDestroyBlocksDict:(id)arg1;
- (void).cxx_destruct;
@end
