@interface BoxIamBizProfileNativeToCppManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<finder_box::BoxIamBizProfileNativeToCppManagerCppCover> cpp_cover; // +0x80
    weak_ptr<finder_box::BoxIamBizProfileNativeToCppManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<finder_box::BoxIamBizProfileNativeToCppManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (void)setServiceProxyType:(int)arg1;
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
- (void)setBizProfileUpdateTimeAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)setBizProfileUpdateTimeAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)startPollingOutboxMessages;
- (void)stopPollingOutboxMessages;
- (void)notifyOutboxMessagesUpdated:(id)arg1;
- (void)subscribeOutboxMessagesUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeOutboxMessagesUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeOutboxMessagesUpdatedEvent:(id)arg1;
- (void)notifyProfileMessagesUpdated:(id)arg1;
- (void)subscribeProfileMessagesUpdatedNotifyEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeProfileMessagesUpdatedNotifyEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeProfileMessagesUpdatedNotifyEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
