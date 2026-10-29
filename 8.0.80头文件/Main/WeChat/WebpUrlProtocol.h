@interface WebpUrlProtocol : NSURLProtocol <NSURLSessionDataDelegate>
{
    BOOL _cancel; // +0x10
    id <WKURLSchemeTask> _schemeTask; // +0x18
    NSURLRequest * _originRequest; // +0x20
    NSURLRequest * _realRequest; // +0x28
    id <NSURLProtocolClient> _realClient; // +0x30
    NSURLSession * _session; // +0x38
    NSMutableData * _imageData; // +0x40
    double _timeDownload; // +0x48
    double _timeDecode; // +0x50
    double _timeFinish; // +0x58
}
+ (void)wa_web_registerWebpScheme;
+ (void)wa_web_unregisterWebpScheme;
+ (BOOL)isWebpUrlRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
- (void)dealloc;
- (void)startLoadingBySchemeTask:(id)arg1 client:(id)arg2;
- (void)startLoading;
- (void)innerLoading;
- (void)stopLoading;
- (void)responseData:(id)arg1;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id)schemeTask;
- (void)setSchemeTask:(id)arg1;
- (id)originRequest;
- (void)setOriginRequest:(id)arg1;
- (id)realRequest;
- (void)setRealRequest:(id)arg1;
- (id)realClient;
- (void)setRealClient:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (double)timeDownload;
- (void)setTimeDownload:(double)arg1;
- (double)timeDecode;
- (void)setTimeDecode:(double)arg1;
- (double)timeFinish;
- (void)setTimeFinish:(double)arg1;
- (BOOL)cancel;
- (void)setCancel:(BOOL)arg1;
- (void).cxx_destruct;
@end
