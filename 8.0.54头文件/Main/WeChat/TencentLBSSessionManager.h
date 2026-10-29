@interface TencentLBSSessionManager : NSObject
{
    NSURLSession * _session; // +0x8
    NSURLSessionConfiguration * _sessionConfiguration; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg1;
- (void)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)session;
- (void)setSession:(id)arg1;
- (id)sessionConfiguration;
- (void)setSessionConfiguration:(id)arg1;
- (void).cxx_destruct;
@end

