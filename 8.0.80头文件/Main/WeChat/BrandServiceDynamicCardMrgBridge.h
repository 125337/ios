@interface BrandServiceDynamicCardMrgBridge : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<brand_service::BrandServiceDynamicCardMrgBridgeCppCover> cpp_cover; // +0x80
    weak_ptr<brand_service::BrandServiceDynamicCardMrgBridgeDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<brand_service::BrandServiceDynamicCardMrgBridgeDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)subscribeAdServerInfoEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeAdServerInfoEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeAdServerInfoEvent:(id)arg1;
- (void)mockInsertCanvas:(int)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)callOnAdServerInfo:(id)arg1;
- (void)subscribeRecFeedsAdServerInfoEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeRecFeedsAdServerInfoEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeRecFeedsAdServerInfoEvent:(id)arg1;
- (void)callOnRecFeedsAdServerInfo:(id)arg1;
- (void)subscribeDynamicCardInfoEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDynamicCardInfoEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDynamicCardInfoEvent:(id)arg1;
- (void)callOnDynamicCardInfo:(int)arg1 msgId:(unsigned long long)arg2 frameSetName:(id)arg3 frameSetData:(id)arg4;
- (id)getAllDynamicCardInfo:(int)arg1;
- (BOOL)setAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (BOOL)setFeedsAdRequestInfo:(id)arg1 adFetchInfo:(id)arg2;
- (BOOL)setAdCardRequestInfo:(unsigned long long)arg1 adInfo:(id)arg2;
- (BOOL)deleteDynamicCard:(unsigned long long)arg1 dynamicCardType:(int)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
