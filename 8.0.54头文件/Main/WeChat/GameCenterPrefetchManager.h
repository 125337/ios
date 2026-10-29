@interface GameCenterPrefetchManager : MMUserService <MMServiceProtocol, NSURLSessionDelegate>
{
    NSURLSession * _urlSession; // +0x8
}
- (id)init;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)prefetchUrlModel:(id)arg1;
- (void)prefetchUrlArray:(id)arg1;
- (id)urlSession;
- (void)setUrlSession:(id)arg1;
- (void).cxx_destruct;
@end

