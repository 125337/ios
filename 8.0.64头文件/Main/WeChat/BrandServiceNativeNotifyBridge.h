@interface BrandServiceNativeNotifyBridge : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<brand_service::BrandServiceNativeNotifyBridgeCppCover> cpp_cover; // +0x80
    weak_ptr<brand_service::BrandServiceNativeNotifyBridgeDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<brand_service::BrandServiceNativeNotifyBridgeDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)subscribeDataChangeEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDataChangeEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDataChangeEvent:(id)arg1;
- (void)callOnDataChange:(int)arg1;
- (void)subscribeInitDoneEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeInitDoneEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeInitDoneEvent:(id)arg1;
- (void)callOnInitDone:(BOOL)arg1;
- (void)subscribeIDKeyEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeIDKeyEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeIDKeyEvent:(id)arg1;
- (void)callOnIDKey:(int)arg1 key:(int)arg2 value:(int)arg3;
- (void)subscribeKVEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeKVEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeKVEvent:(id)arg1;
- (void)callOnKV:(int)arg1 value:(id)arg2;
- (void)subscribeFirstScreenResortStartEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeFirstScreenResortStartEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeFirstScreenResortStartEvent:(id)arg1;
- (void)subscribeFirstScreenResortEndEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeFirstScreenResortEndEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeFirstScreenResortEndEvent:(id)arg1;
- (void)callOnFirstScreenResortStart:(unsigned long long)arg1;
- (void)callOnFirstScreenResortEnd:(unsigned long long)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
