@interface MPPageFastLoadCustomSchemeHandler : NSObject <WKURLSchemeHandler>
{
    id <MPPageFastLoadCustomSchemeHandlerDelegate> _delegate; // +0x8
    NSURLSession * _onlineRequestSession; // +0x10
    NSMutableSet * _activeTaskSet; // +0x18
    NSObject<OS_dispatch_queue> * _imageDecodeQueue; // +0x20
    MPPageFastLoadWXPicDecoder * _wxPicDecoder; // +0x28
}
- (id)init;
- (id)customScheme;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)doOnlineRequest:(id)arg1;
- (void)response404ForTask:(id)arg1;
- (void)decodeAndFinishTask:(id)arg1 imageData:(id)arg2 serverContentType:(id)arg3 serverResponseHeaders:(id)arg4;
- (id)getImageTypeFromTask:(id)arg1;
- (id)createSuccessResponseForImageData:(id)arg1 contentType:(id)arg2 url:(id)arg3 headers:(id)arg4;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)onlineRequestSession;
- (void)setOnlineRequestSession:(id)arg1;
- (id)activeTaskSet;
- (void)setActiveTaskSet:(id)arg1;
- (id)imageDecodeQueue;
- (void)setImageDecodeQueue:(id)arg1;
- (id)wxPicDecoder;
- (void)setWxPicDecoder:(id)arg1;
- (void).cxx_destruct;
@end
