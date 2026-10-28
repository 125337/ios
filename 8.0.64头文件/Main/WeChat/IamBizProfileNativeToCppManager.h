@interface IamBizProfileNativeToCppManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizProfileNativeToCppManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizProfileNativeToCppManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizProfileNativeToCppManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)setProfileOutboxAppmsgIds:(id)arg1;
- (void)getProfileOutboxAppmsgIdsAsync:(id /* block */)arg1;
- (void)getProfileOutboxAppmsgIdsAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteProfileOutboxAppmsgId:(int)arg1;
- (void)getCacheOutboxMessagesAsync:(id /* block */)arg1;
- (void)getCacheOutboxMessagesAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchOutboxMessagesAsync:(id /* block */)arg1;
- (void)fetchOutboxMessagesAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAppmsgAsync:(int)arg1 index:(int)arg2 completion:(id /* block */)arg3;
- (void)deleteAppmsgAsync:(int)arg1 index:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)getTempUrlAsync:(int)arg1 index:(int)arg2 completion:(id /* block */)arg3;
- (void)getTempUrlAsync:(int)arg1 index:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)startPollingOutboxMessages;
- (void)stopPollingOutboxMessages;
- (void)subscribeOutboxMessagesUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeOutboxMessagesUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeOutboxMessagesUpdatedEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
