@interface FBSDKURLSessionTask : NSObject
{
    NSURLSessionTask * _task; // +0x8
    id /* block */ _handler; // +0x10
    unsigned long long _requestStartTime; // +0x18
    unsigned long long _loggerSerialNumber; // +0x20
}
- (id)initWithRequest:(id)arg1 fromSession:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)logAndInvokeHandler:(id /* block */)arg1 error:(id)arg2;
- (void)logAndInvokeHandler:(id /* block */)arg1 response:(id)arg2 responseData:(id)arg3;
- (void)invokeHandler:(id /* block */)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4;
- (void)logMessage:(id)arg1;
- (void)taskDidCompleteWithResponse:(id)arg1 data:(id)arg2;
- (void)taskDidCompleteWithError:(id)arg1;
- (void)start;
- (void)cancel;
- (id)task;
- (void)setTask:(id)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (unsigned long long)requestStartTime;
- (void)setRequestStartTime:(unsigned long long)arg1;
- (unsigned long long)loggerSerialNumber;
- (void).cxx_destruct;
@end
