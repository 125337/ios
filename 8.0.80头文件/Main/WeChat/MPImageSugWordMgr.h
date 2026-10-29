@interface MPImageSugWordMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
+ (id)generateRequestId;
- (id)requestSugWordWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)resultWithRequestId:(id)arg1;
- (id)resultFromResp:(id)arg1;
- (void)callbackCompletion:(id /* block */)arg1 success:(BOOL)arg2 result:(id)arg3;
@end
