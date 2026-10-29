@interface IUdrCppBizFeature : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<udr::IUdrCppBizFeatureCppCover> cpp_cover; // +0x80
    weak_ptr<udr::IUdrCppBizFeatureDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<udr::IUdrCppBizFeatureDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (id)getProjectId;
- (id)getProjectIdList;
- (BOOL)addToPeriod;
- (id)getParameter;
- (void)postProcessAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)postProcessAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)haveSpecifiedResourceAsync:(id)arg1 name:(id)arg2 version:(int)arg3 errNo:(int)arg4 errCode:(int)arg5 completion:(id /* block */)arg6;
- (void)haveSpecifiedResourceAsync:(id)arg1 name:(id)arg2 version:(int)arg3 errNo:(int)arg4 errCode:(int)arg5 on:(id)arg6 completion:(id /* block */)arg7;
- (void)onCallBackStartPeriodAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onCallBackStartPeriodAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onCallBackCheckSuccessAsync:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4 completion:(id /* block */)arg5;
- (void)onCallBackCheckSuccessAsync:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)onCallBackSuccessAsync:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4 completion:(id /* block */)arg5;
- (void)onCallBackSuccessAsync:(id)arg1 name:(id)arg2 version:(int)arg3 scene:(int)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)onCallBackFailAsync:(int)arg1 errCode:(int)arg2 projectId:(id)arg3 name:(id)arg4 version:(int)arg5 scene:(int)arg6 completion:(id /* block */)arg7;
- (void)onCallBackFailAsync:(int)arg1 errCode:(int)arg2 projectId:(id)arg3 name:(id)arg4 version:(int)arg5 scene:(int)arg6 on:(id)arg7 completion:(id /* block */)arg8;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
