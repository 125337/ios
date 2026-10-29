@interface BrandServiceNotiManagerBridge : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<brand_service::BrandServiceNotiManagerBridgeCppCover> cpp_cover; // +0x80
    weak_ptr<brand_service::BrandServiceNotiManagerBridgeDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<brand_service::BrandServiceNotiManagerBridgeDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)insertAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)insertAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)getData:(unsigned long long)arg1 limit:(int)arg2;
- (unsigned long long)getUnExpiredCountFromDb;
- (id)getLaterData:(unsigned long long)arg1 limit:(int)arg2;
- (id)getByLocalId:(unsigned long long)arg1;
- (unsigned long long)getTotalCount;
- (unsigned long long)getTotalUnreadCount;
- (id)getFirstUnreadData;
- (void)onBatchReadAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)onBatchReadAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)subscribeNotiListReadEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotiListReadEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeNotiListReadEvent:(id)arg1;
- (void)callOnNotiListRead;
- (void)onBatchExposeAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onBatchExposeAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)deleteByLocalId:(unsigned long long)arg1;
- (BOOL)deleteByUserName:(id)arg1;
- (void)subscribeInsertNotiEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeInsertNotiEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeInsertNotiEvent:(id)arg1;
- (void)callOnInsertNoti:(id)arg1;
- (void)subscribeEditNotiEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeEditNotiEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeEditNotiEvent:(id)arg1;
- (void)callOnEditNoti:(id)arg1;
- (void)subscribeDeleteNotiEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDeleteNotiEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeDeleteNotiEvent:(id)arg1;
- (void)callOnDeleteNoti:(unsigned long long)arg1 username:(id)arg2 svrId:(unsigned long long)arg3;
- (void)subscribeUpdateNotiExpireTimeEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeUpdateNotiExpireTimeEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeUpdateNotiExpireTimeEvent:(id)arg1;
- (void)callOnUpdateNotiExpireTime:(unsigned long long)arg1;
- (BOOL)hasInit;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
