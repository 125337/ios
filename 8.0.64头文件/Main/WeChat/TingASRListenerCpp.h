@interface TingASRListenerCpp : UnitRCObjcBaseProxyClass <TingASRListener>
- (void)onASRResult:(id)arg1 listenId:(id)arg2 chatRequestKey:(id)arg3 isSuccess:(BOOL)arg4 errorCode:(int)arg5 errorMessage:(id)arg6;
- (void)onASRDetectUserSpoken;
@end
