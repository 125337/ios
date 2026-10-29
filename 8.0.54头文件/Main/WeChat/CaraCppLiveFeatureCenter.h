@interface CaraCppLiveFeatureCenter : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    CaraCppLiveFeatureCenterCppCover cpp_cover; // +0x80
    weak_ptr<cara::CaraCppLiveFeatureCenterDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<cara::CaraCppLiveFeatureCenterDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)init;
- (void)reportThatReddotExpose:(id)arg1 anchor:(id)arg2 score:(const void *)arg3;
- (void)reportThatReddotConsume:(id)arg1 anchor:(id)arg2 score:(const void *)arg3;
- (void)reportThatCellExpose;
- (void)reportThatCellConsume;
- (void)setUserActiveLevel:(int)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

