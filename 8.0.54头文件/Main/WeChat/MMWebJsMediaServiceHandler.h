@interface MMWebJsMediaServiceHandler : MMObject
{
    MMMediaServiceWrapper * _mediaService; // +0x8
    NSMutableDictionary * _dicEvent2CallBackFunc; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)injectMediaToolKitJsContext:(id)arg1;
- (BOOL)isAudioPlaying;
- (void)setupAudioSession;
- (void)__callbackWithFunc:(id)arg1 errCode:(int)arg2 errDesc:(id)arg3 retDic:(id)arg4;
- (id /* block */)commSdkCallback:(id)arg1 containerId:(unsigned int)arg2 apiName:(id)arg3;
- (void)addApi_addEventListener:(id)arg1;
- (void)addApi_removeEventListener:(id)arg1;
- (void)addApi_playerCreate:(id)arg1;
- (void)notifyEvent:(id)arg1 errCode:(int)arg2 errDesc:(id)arg3;
- (void)addApi_playerStart:(id)arg1;
- (void)addApi_playerSeek:(id)arg1;
- (void)addApi_playerWait:(id)arg1;
- (void)addApi_playerGetFrame:(id)arg1;
- (void)addApi_playerStop:(id)arg1;
- (void)addApi_playerRemove:(id)arg1;
- (void)addApi_audioCreate:(id)arg1;
- (void)addApi_audioAddTask:(id)arg1;
- (void)addApi_audioDelTask:(id)arg1;
- (void)addApi_audioStart:(id)arg1;
- (void)addApi_audioUpdate:(id)arg1;
- (void)addApi_audioStop:(id)arg1;
- (void)addApi_audioRemove:(id)arg1;
- (id)mediaService;
- (void)setMediaService:(id)arg1;
- (id)dicEvent2CallBackFunc;
- (void)setDicEvent2CallBackFunc:(id)arg1;
- (void).cxx_destruct;
@end

