@interface MMLiteAppUDRCheckMgr : IUdrCppBizFeatureImpl
{
    NSArray * _liteAppProjectIdList; // +0x8
}
+ (id)postProcessQueue;
+ (id)configPeriodCheckParameters;
+ (id)configCheckParameters;
+ (id)configParameters;
- (id)getProjectIdList;
- (id)getParameter;
- (void)postProcessAsync:(unsigned long long)arg1 resource:(id)arg2;
- (void)postProcess:(id)arg1;
- (void)haveSpecifiedResourceAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 errNo:(int)arg5 errCode:(int)arg6;
- (void)onCallBackStartPeriodAsync:(unsigned long long)arg1 projectId:(id)arg2;
- (void)onCallBackCheckSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
- (void)onCallBackSuccessAsync:(unsigned long long)arg1 projectId:(id)arg2 name:(id)arg3 version:(int)arg4 scene:(int)arg5;
- (void)onCallBackFailAsync:(unsigned long long)arg1 errNo:(int)arg2 errCode:(int)arg3 projectId:(id)arg4 name:(id)arg5 version:(int)arg6 scene:(int)arg7;
- (id)liteAppProjectIdList;
- (void)setLiteAppProjectIdList:(id)arg1;
- (void).cxx_destruct;
@end
