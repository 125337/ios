@interface WCURLSessionDataTask : WCURLSessionTask
- (int)_onCornetTaskReceiveHeader:(id)arg1 statusCode:(int)arg2 taskId:(id)arg3 taskProtocol:(id)arg4;
- (int)onCornetTaskReceiveHeader:(id)arg1 statusCode:(int)arg2 taskId:(id)arg3 taskProtocol:(id)arg4;
- (BOOL)_onCornetTaskReceiveData:(id)arg1;
- (BOOL)onCornetTaskReceiveData:(id)arg1;
@end

