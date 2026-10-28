@interface IamBizPersonalCenterRedDotManager : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<biz::IamBizPersonalCenterRedDotManagerCppCover> cpp_cover; // +0x80
    weak_ptr<biz::IamBizPersonalCenterRedDotManagerDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<biz::IamBizPersonalCenterRedDotManagerDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)getRedDotCountAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getRedDotCountAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getCreatorTextRedDotAsync:(id /* block */)arg1;
- (void)getCreatorTextRedDotAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getCreatorWxaDataAsync:(id /* block */)arg1;
- (void)getCreatorWxaDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)cleanRedDot:(int)arg1;
- (void)updateRedDotInfo:(BOOL)arg1;
- (void)updateFansMsgRedDotCount:(id)arg1 count:(int)arg2;
- (void)getRedDotEnableAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getRedDotEnableAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)setRedDotEnable:(int)arg1 enable:(BOOL)arg2;
- (void)getRedDotUpdateTimestampAsync:(id /* block */)arg1;
- (void)getRedDotUpdateTimestampAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)subscribeRedDotUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeRedDotUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeRedDotUpdatedEvent:(id)arg1;
- (void)subscribeCreatorTextRedDotUpdatedEvent:(id)arg1 on:(id)arg2 eventBlock:(id /* block */)arg3;
- (void)subscribeCreatorTextRedDotUpdatedEvent:(id)arg1 eventBlock:(id /* block */)arg2;
- (void)unsubscribeCreatorTextRedDotUpdatedEvent:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
