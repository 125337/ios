@interface WCFinderDramaPermeateStreamCGI : WCFinderBaseCgi
{
    id /* block */ _success; // +0x8
    id /* block */ _failed; // +0x10
}
- (id)initWithNextPageBuffer:(id)arg1 success:(id /* block */)arg2 failed:(id /* block */)arg3;
- (id)initWithNextPageBuffer:(id)arg1 nativeDramaStreamBubbleBuffer:(id)arg2 success:(id /* block */)arg3 failed:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failed;
- (void)setFailed:(id /* block */)arg1;
- (void).cxx_destruct;
@end
