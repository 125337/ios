@interface WebviewJSEventHandler_setBackgroundAudioState : WebviewJSEventHandlerBase
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)handleSingleAudioEvent:(id)arg1 audioInfo:(id)arg2 scene:(unsigned long long)arg3;
- (void)handleAlbumEvent:(id)arg1 albumId:(id)arg2 albumMusicInfos:(id)arg3 playAudioId:(id)arg4;
- (id)musicInfoFromParams:(id)arg1;
- (void)fillMvDataWithMusicInfo:(id)arg1 originParams:(id)arg2;
- (id)jsapiName;
@end

