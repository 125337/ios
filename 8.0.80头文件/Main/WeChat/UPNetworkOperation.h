@interface UPNetworkOperation : NSObject
{
    NSURLConnection * _connection; // +0x8
    NSHTTPURLResponse * _response; // +0x10
    NSMutableData * _mutableData; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
+ (id)getScanConfig:(id)arg1;
+ (id)getConfig:(id)arg1 encTn:(id)arg2;
+ (id)sendCallApp:(id)arg1 encTn:(id)arg2 schema:(id)arg3 universalLink:(id)arg4;
+ (id)uuidString;
- (void)setCompletionBlockWithSuccess:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)connection;
- (void)setConnection:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)mutableData;
- (void)setMutableData:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
