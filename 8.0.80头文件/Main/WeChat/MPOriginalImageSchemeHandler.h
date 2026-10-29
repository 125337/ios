@interface MPOriginalImageSchemeHandler : NSObject <WKURLSchemeHandler>
{
    NSMutableSet * _ongoingTasks; // +0x8
    NSObject<OS_dispatch_queue> * _workQueue; // +0x10
}
- (id)init;
- (id)customScheme;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (void)handleTileRequest:(id)arg1;
- (void)serveTileForKey:(id)arg1 level:(long long)arg2 x:(long long)arg3 y:(long long)arg4 tileSize:(long long)arg5 task:(id)arg6;
- (id)encodeGrayTunnelPNGFromRawData:(id)arg1 tileWidth:(unsigned int)arg2 tileHeight:(unsigned int)arg3 bytesPerTexel:(unsigned int)arg4;
- (void)runOnMain:(id /* block */)arg1;
- (void)respondImageData:(id)arg1 contentType:(id)arg2 extraHeaders:(id)arg3 toTask:(id)arg4;
- (void)respondError:(id)arg1 code:(long long)arg2 message:(id)arg3 statusCode:(long long)arg4;
- (long long)httpStatusForErrorCode:(long long)arg1;
- (id)ongoingTasks;
- (void)setOngoingTasks:(id)arg1;
- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (void).cxx_destruct;
@end
