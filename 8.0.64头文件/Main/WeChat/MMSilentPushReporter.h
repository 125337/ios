@interface MMSilentPushReporter : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>
{
    NSURLSession * session; // +0x8
}
- (id)initWithIdentifier:(id)arg1;
- (void)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void).cxx_destruct;
@end
