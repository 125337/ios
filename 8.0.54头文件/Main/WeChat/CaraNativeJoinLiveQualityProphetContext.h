@interface CaraNativeJoinLiveQualityProphetContext : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    CaraNativeJoinLiveQualityProphetContextCppCover cpp_cover; // +0x80
    weak_ptr<cara::CaraNativeJoinLiveQualityProphetContextDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<cara::CaraNativeJoinLiveQualityProphetContextDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)liveID;
- (int)videoQuality;
- (int)networkQuality;
- (int)scene;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

