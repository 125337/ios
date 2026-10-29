@interface CaraCppLiveReddotProphet : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    CaraCppLiveReddotProphetCppCover cpp_cover; // +0x80
    weak_ptr<cara::CaraCppLiveReddotProphetDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<cara::CaraCppLiveReddotProphetDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (void)reportThatReddotExpose:(id)arg1 isReady:(const void *)arg2 context:(id)arg3;
- (void)predict:(id)arg1 context:(id)arg2 callback:(id)arg3;
- (void)reportThatReddotConsume:(id)arg1 isReady:(const void *)arg2;
- (void)reportThatPreload:(id)arg1 byPrediction:(const void *)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

