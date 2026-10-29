@interface BrandServiceNotiManagerBridge : NSObject
{
    weak_ptr<zidl::ZClientInvoker> client_invoker_; // +0x8
    ConcurrentDictionary * insertBlockDict; // +0x18
    ConcurrentDictionary * onBatchReadBlockDict; // +0x20
    NSMapTable * notiListReadEventMap; // +0x28
    ConcurrentDictionary * onBatchExposeBlockDict; // +0x30
    NSMapTable * insertNotiEventMap; // +0x38
    NSMapTable * editNotiEventMap; // +0x40
    NSMapTable * deleteNotiEventMap; // +0x48
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (void)attachClientInvoker:(const void *)arg1;
- (shared_ptr<zidl::ZClientInvoker>)getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)insertAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)insertAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)getData:(unsigned long long)arg1 limit:(int)arg2;
- (id)getLaterData:(unsigned long long)arg1 limit:(int)arg2;
- (id)getByLocalId:(unsigned long long)arg1;
- (unsigned long long)getTotalCount;
- (unsigned long long)getTotalUnreadCount;
- (id)getFirstUnreadData;
- (void)onBatchReadAsync:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)onBatchReadAsync:(unsigned long long)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)subscribeNotiListReadEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeNotiListReadEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unSubscribeNotiListReadEvent:(id)arg1;
- (void)callOnNotiListRead;
- (void)onBatchExposeAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onBatchExposeAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)deleteByLocalId:(unsigned long long)arg1;
- (BOOL)deleteByUserName:(id)arg1;
- (void)subscribeInsertNotiEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeInsertNotiEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unSubscribeInsertNotiEvent:(id)arg1;
- (void)callOnInsertNoti:(id)arg1;
- (void)subscribeEditNotiEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeEditNotiEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unSubscribeEditNotiEvent:(id)arg1;
- (void)callOnEditNoti:(id)arg1;
- (void)subscribeDeleteNotiEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeDeleteNotiEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unSubscribeDeleteNotiEvent:(id)arg1;
- (void)callOnDeleteNoti:(unsigned long long)arg1 username:(id)arg2 svrId:(unsigned long long)arg3;
- (BOOL)hasInit;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

