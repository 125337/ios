@interface WebviewJSEventHandler_handleVideoAction : WebviewJSEventHandler_handleSameLayer
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)insertSameLayerVideo:(id)arg1 event:(id)arg2 errMsg:(id *)arg3;
- (void)updateSameLayerVideo:(id)arg1 event:(id)arg2 errMsg:(id *)arg3;
- (id)operateSameLayerVideo:(id)arg1 errMsg:(id *)arg2;
- (void)removeSameLayerVideo:(id)arg1 errMsg:(id *)arg2;
- (void)setExitFullscreenBtn:(id)arg1 errMsg:(id *)arg2;
- (id)takeVideoSnapshotForViewId:(unsigned int)arg1 maxByteSize:(unsigned int)arg2 errMsg:(id *)arg3;
- (id)getSameLayerPlayerCount:(id)arg1 errMsg:(id *)arg2;
- (id)getInitialParams:(id)arg1 errMsg:(id *)arg2;
- (void)exchangeFinderPlayInfo:(id)arg1 event:(id)arg2;
- (void)openFullScreenFinderVideo:(id)arg1 event:(id)arg2;
- (void)opFinderVideo:(id)arg1 errMsg:(id *)arg2;
- (id)getFinderFeedInfo:(id)arg1 errMsg:(id *)arg2;
- (id)nativeVideoPlugin;
@end
