@interface EcsJsaService : MMUserService <MMServiceProtocol>
- (void)asyncHandle:(id)arg1 params:(id)arg2 callback:(id /* block */)arg3;
- (id)supportedAsyncActionInfoList:(int)arg1;
- (id)syncHandle:(id)arg1 params:(id)arg2;
- (void)trackFailedWithSceneId:(id)arg1 reason:(id)arg2 params:(id)arg3;
@end
