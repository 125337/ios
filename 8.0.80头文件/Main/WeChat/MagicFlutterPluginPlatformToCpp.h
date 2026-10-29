@interface MagicFlutterPluginPlatformToCpp : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<magicbrush_v2::MagicFlutterPluginPlatformToCppCppCover> cpp_cover; // +0x80
    weak_ptr<magicbrush_v2::MagicFlutterPluginPlatformToCppDispatcher> cpp_dispatcher; // +0x90
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<magicbrush_v2::MagicFlutterPluginPlatformToCppDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (unsigned long long)preloadBiz:(id)arg1 cacheTime:(unsigned long long)arg2 backgroundCacheTime:(unsigned long long)arg3;
- (unsigned long long)attachToEngine:(id)arg1;
- (void)detachToEngine:(id)arg1 instanceKey:(id)arg2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
