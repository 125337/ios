@interface QBWKProzyProtocol : NSURLProtocol <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    BOOL _stopLoading; // +0x10
    NSURLConnection * _nsurlConnection; // +0x18
    BOOL _isTBSInnerRequest; // +0x20
    NSString * _originPOSTURLString; // +0x28
}
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)startLoading;
- (void)stopLoading;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void).cxx_destruct;
@end
