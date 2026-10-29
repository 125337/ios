@interface VoiceTransPressGuideVideoView : UIView
{
    BOOL _loadedDarkMode; // +0x8
    BOOL _hasLoadedVideo; // +0x9
    AVQueuePlayer * _player; // +0x10
    AVPlayerLooper * _playerLooper; // +0x18
}
+ (Class)layerClass;
- (id)init;
- (void)reloadVideo;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerLooper;
- (void)setPlayerLooper:(id)arg1;
- (BOOL)loadedDarkMode;
- (void)setLoadedDarkMode:(BOOL)arg1;
- (BOOL)hasLoadedVideo;
- (void)setHasLoadedVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
