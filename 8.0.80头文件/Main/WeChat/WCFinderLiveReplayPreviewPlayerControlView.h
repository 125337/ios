@interface WCFinderLiveReplayPreviewPlayerControlView : WCPlayerControlView
{
    BOOL _startLoaded; // +0x8
    id /* block */ _seekEndCallback; // +0x10
    id /* block */ _startLoadedCompletion; // +0x18
    id /* block */ _prepareToPlayCallback; // +0x20
    id /* block */ _videoSizeChangeCallback; // +0x28
    id /* block */ _onReceiveAllDataCallback; // +0x30
}
- (void)onPlayerSeekCompelete:(double)arg1;
- (void)onPlayerSeekFail:(float)arg1;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onPlayerStateChanged:(unsigned long long)arg1;
- (void)onPlayerCreated;
- (void)onPlayerProcessStateChanged:(unsigned long long)arg1;
- (void)onDownloadProgressChange:(id)arg1 finishLength:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)onReceiveAllVideoData:(id)arg1;
- (void)onStartLoadedChanged;
- (BOOL)startLoaded;
- (void)setStartLoaded:(BOOL)arg1;
- (id /* block */)seekEndCallback;
- (void)setSeekEndCallback:(id /* block */)arg1;
- (id /* block */)startLoadedCompletion;
- (void)setStartLoadedCompletion:(id /* block */)arg1;
- (id /* block */)prepareToPlayCallback;
- (void)setPrepareToPlayCallback:(id /* block */)arg1;
- (id /* block */)videoSizeChangeCallback;
- (void)setVideoSizeChangeCallback:(id /* block */)arg1;
- (id /* block */)onReceiveAllDataCallback;
- (void)setOnReceiveAllDataCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
