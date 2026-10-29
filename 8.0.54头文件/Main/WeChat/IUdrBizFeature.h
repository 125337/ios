@interface IUdrBizFeature : MMUserService <MMServiceProtocol>
- (id)getProjectId;
- (id)getProjectIdList;
- (BOOL)addToPeriod;
- (id)getParameter;
- (void)postProcess:(id)arg1;
- (void)haveSpecifiedResource:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (void)hasBeenCleared:(id)arg1;
@end

