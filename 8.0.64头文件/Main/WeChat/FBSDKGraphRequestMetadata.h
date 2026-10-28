@interface FBSDKGraphRequestMetadata : NSObject
{
    FBSDKGraphRequest * _request; // +0x8
    id /* block */ _completionHandler; // +0x10
    NSDictionary * _batchParameters; // +0x18
}
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2 batchParameters:(id)arg3;
- (void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3;
- (id)description;
- (id)request;
- (void)setRequest:(id)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)batchParameters;
- (void)setBatchParameters:(id)arg1;
- (void).cxx_destruct;
@end
