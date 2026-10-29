@interface IUdrCppGlobalFeature : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<udr::IUdrCppGlobalFeatureCppCover> cpp_cover; // +0x80
    weak_ptr<udr::IUdrCppGlobalFeatureDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<udr::IUdrCppGlobalFeatureDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)report30863Async:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4 state:(int)arg5 errNo:(int)arg6 errCode:(int)arg7 timeStamp:(long long)arg8 remoteVersion:(int)arg9 completion:(id /* block */)arg10;
- (void)report30863Async:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4 state:(int)arg5 errNo:(int)arg6 errCode:(int)arg7 timeStamp:(long long)arg8 remoteVersion:(int)arg9 on:(id)arg10 completion:(id /* block */)arg11;
- (void)notifyPeriodCheckAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)notifyPeriodCheckAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
