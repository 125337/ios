@interface FBSDKGraphRequestConnection : NSObject <NSURLSessionDataDelegate, FBSDKGraphErrorRecoveryProcessorDelegate>
{
    NSString * _overrideVersionPart; // +0x8
    unsigned long long _expectingResults; // +0x10
    NSOperationQueue * _delegateQueue; // +0x18
    FBSDKGraphRequestMetadata * _recoveringRequestMetadata; // +0x20
    FBSDKGraphErrorRecoveryProcessor * _errorRecoveryProcessor; // +0x28
    id <FBSDKGraphRequestConnectionDelegate> _delegate; // +0x30
    double _timeout; // +0x38
    NSHTTPURLResponse * _urlResponse; // +0x40
    NSURLSession * _session; // +0x48
    FBSDKURLSessionTask * _task; // +0x50
    NSMutableArray * _requests; // +0x58
    unsigned long long _state; // +0x60
    FBSDKLogger * _logger; // +0x68
    unsigned long long _requestStartTime; // +0x70
}
+ (void)setDefaultConnectionTimeout:(double)arg1;
+ (double)defaultConnectionTimeout;
+ (id)userAgent;
- (id)init;
- (void)dealloc;
- (void)addRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addRequest:(id)arg1 batchEntryName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)addRequest:(id)arg1 batchParameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancel;
- (void)overrideGraphAPIVersion:(id)arg1;
- (void)start;
- (id)delegateQueue;
- (void)setDelegateQueue:(id)arg1;
- (void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3 batchToken:(id)arg4;
- (void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(BOOL)arg3 logger:(id)arg4;
- (void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3 logger:(id)arg4;
- (BOOL)_shouldWarnOnMissingFieldsParam:(id)arg1;
- (void)_validateFieldsParamForGetRequests:(id)arg1;
- (id)requestWithBatch:(id)arg1 timeout:(double)arg2;
- (id)urlStringForSingleRequest:(id)arg1 forBatch:(BOOL)arg2;
- (void)completeFBSDKURLSessionWithResponse:(id)arg1 data:(id)arg2 networkError:(id)arg3;
- (id)parseJSONResponse:(id)arg1 error:(id *)arg2 statusCode:(long long)arg3;
- (id)parseJSONOrOtherwise:(id)arg1 error:(id *)arg2;
- (void)completeWithResults:(id)arg1 networkError:(id)arg2;
- (void)processResultBody:(id)arg1 error:(id)arg2 metadata:(id)arg3 canNotifyDelegate:(BOOL)arg4;
- (void)processResultDebugDictionary:(id)arg1;
- (id)errorFromResult:(id)arg1 request:(id)arg2;
- (id)errorWithCode:(long long)arg1 statusCode:(long long)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5;
- (void)logRequest:(id)arg1 bodyLength:(unsigned long long)arg2 bodyLogger:(id)arg3 attachmentLogger:(id)arg4;
- (id)accessTokenWithRequest:(id)arg1;
- (void)registerTokenToOmitFromLog:(id)arg1;
- (id)defaultSession;
- (void)cleanUpSession;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)processorDidAttemptRecovery:(id)arg1 didRecover:(BOOL)arg2 error:(id)arg3;
- (id)description;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)timeout;
- (void)setTimeout:(double)arg1;
- (id)urlResponse;
- (id)session;
- (void)setSession:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)requests;
- (void)setRequests:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)logger;
- (void)setLogger:(id)arg1;
- (unsigned long long)requestStartTime;
- (void)setRequestStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

