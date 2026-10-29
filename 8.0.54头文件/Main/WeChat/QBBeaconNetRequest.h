@interface QBBeaconNetRequest : NSObject
{
    int priority; // +0x8
    NSString * serverUrl; // +0x10
    QBBeaconReqDataPackage * reqDataPkg; // +0x18
    NSURLConnection * urlConnection; // +0x20
    NSMutableURLRequest * request; // +0x28
    NSData * retryPostData; // +0x30
    NSMutableData * rspData; // +0x38
    NSString * sessionId; // +0x40
    id delegate; // +0x48
}
+ (id)defaultQueue;
- (void)startAsync;
- (void)reqFinished;
- (id)init;
- (void)dealloc;
- (void)_startAsync;
- (void)doFailOperation:(id)arg1;
- (void)doSuccessOperation:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void).cxx_destruct;
- (int)priority;
- (void)setPriority:(int)arg1;
- (id)serverUrl;
- (void)setServerUrl:(id)arg1;
- (id)reqDataPkg;
- (void)setReqDataPkg:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)urlConnection;
- (void)setUrlConnection:(id)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)rspData;
- (void)setRspData:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)retryPostData;
- (void)setRetryPostData:(id)arg1;
@end

