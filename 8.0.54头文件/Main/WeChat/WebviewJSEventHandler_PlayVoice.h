@interface WebviewJSEventHandler_PlayVoice : WebviewJSEventHandlerBase <IFavAudioPlayerExt>
{
    BOOL _stopVoiceFlag; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)setStopVoiceFlag;
- (void)OnBeginPlay:(id)arg1;
- (void)OnEndPlay:(id)arg1;
- (void)sendEndEventToJS:(id)arg1;
- (void)OnPlayError:(id)arg1;
@end

