@interface WeMagicAdPlatformToCpp : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<wemagic::WeMagicAdPlatformToCppCppCover> cpp_cover; // +0x80
    weak_ptr<wemagic::WeMagicAdPlatformToCppDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wemagic::WeMagicAdPlatformToCppDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)pauseBiz:(unsigned long long)arg1;
- (void)resumeBiz:(unsigned long long)arg1;
- (void)destroyBiz:(unsigned long long)arg1;
- (unsigned long long)acquireBiz:(id)arg1;
- (void)activateBiz:(unsigned long long)arg1;
- (void)deactivateBiz:(unsigned long long)arg1;
- (void)createFrameSetRoot:(unsigned long long)arg1 rootConfig:(id)arg2;
- (void)destroyFrameSetRoot:(unsigned long long)arg1 frameSetRootId:(id)arg2;
- (id)bindFrameSetView:(unsigned long long)arg1 rootConfig:(id)arg2 frameSetInfo:(id)arg3;
- (void)removeFrameSetView:(unsigned long long)arg1 rootConfig:(id)arg2 frameSetName:(id)arg3;
- (void)updateFrameSet:(unsigned long long)arg1 frameSetId:(id)arg2 width:(int)arg3 height:(int)arg4;
- (void)removeAllFrameSetView:(unsigned long long)arg1 rootConfig:(id)arg2;
- (void)notifyFrameSetViewAttach:(unsigned long long)arg1 rootId:(id)arg2 frameSetId:(id)arg3;
- (void)notifyFrameSetViewDetach:(unsigned long long)arg1 rootId:(id)arg2 frameSetId:(id)arg3;
- (void)sendEvent:(unsigned long long)arg1 name:(id)arg2 data:(id)arg3;
- (void)notifyFrameSetViewReady:(unsigned long long)arg1 frameSetId:(id)arg2 rootId:(id)arg3 width:(int)arg4 height:(int)arg5;
- (void)scrollAllOnScreenFrameSetView:(unsigned long long)arg1 rootConfig:(id)arg2 offsetHeight:(float)arg3 listViewTop:(float)arg4;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
