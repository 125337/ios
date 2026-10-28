@interface UDRKVCommReportFeatureService : IUdrBizFeature
- (id)getProjectId;
- (BOOL)addToPeriod;
- (id)getParameter;
- (void)postProcess:(id)arg1;
- (void)haveSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3 errNo:(int)arg4 errCode:(int)arg5;
@end
