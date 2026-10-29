@interface WSWebViewPlugin_NativeVideo : WSWebViewPlugin_NativeView <WSWebNativeVideoPlayerLogicDelegate>
{
    NSMutableDictionary * _localFinderDataItemDic; // +0x8
}
- (id)init;
- (id)pluginKey;
- (BOOL)insertVideoPlayerView:(id)arg1 withError:(id *)arg2;
- (void)updatevideoPlayerView:(id)arg1 withParams:(id)arg2 andBlock:(id /* block */)arg3;
- (void)updateVideoPlayerView:(unsigned int)arg1 withParams:(id)arg2 andBlock:(id /* block */)arg3;
- (BOOL)removeVideoPlayerView:(unsigned int)arg1 withError:(id *)arg2;
- (BOOL)operateVideoPlayerView:(unsigned int)arg1 withParams:(id)arg2 andError:(id *)arg3;
- (void)exchangeFinderData:(id)arg1 withBlock:(id /* block */)arg2;
- (id)genComposedFeedIdFromExportId:(id)arg1 andNonceId:(id)arg2;
- (id)genVideoPlayerViewWithViewId:(unsigned int)arg1;
- (id)getVideoPlayerView:(unsigned int)arg1 withError:(id *)arg2;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)onVideoPlayerEvent:(id)arg1 withData:(id)arg2 forViewId:(unsigned int)arg3;
- (id)localFinderDataItemDic;
- (void)setLocalFinderDataItemDic:(id)arg1;
- (void).cxx_destruct;
@end

