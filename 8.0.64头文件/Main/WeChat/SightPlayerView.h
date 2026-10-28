@interface SightPlayerView : UIView <MMAVPlayerItem, MVideoPlayerViewDelegate>
{
    NSString * m_path; // +0x8
    BOOL m_isMute; // +0x10
    AVPlayer * m_player; // +0x18
    AVPlayerItem * m_playItem; // +0x20
    int m_status; // +0x28
    long long m_previewContentMode; // +0x30
    long long m_avplayerContentMode; // +0x38
    BOOL m_disableContentModeAnimation; // +0x40
    BOOL m_disableResumeMusicPlayAfterPause; // +0x41
    NSString * m_cpKey; // +0x48
    BOOL m_isPlayerPause; // +0x50
    BOOL m_isTryingProtect; // +0x51
    timeval m_startProtectingTime; // +0x58
    SightRecoder * m_sightRecoder; // +0x68
    NSObject * m_oPlaybackTimeObserver; // +0x70
    BOOL _isAnimating; // +0x78
    BOOL _disablePlayerStatusTimerCheck; // +0x79
    BOOL _neverHidePreview; // +0x7a
    BOOL _removeCrossFadeTransition; // +0x7b
    float _m_uiMaxLimitDuration; // +0x7c
    id <SightPlayerViewDelegate> m_delegate; // +0x80
    unsigned long long _scene; // +0x88
    long long _contentMode; // +0x90
    NSString * _cpKey; // +0x98
    AVPlayerLayerView * _playerLayerView; // +0xa0
    MVideoPlayerView * _m_preview; // +0xa8
    double _playRate; // +0xb0
    NSString * _recodedPath; // +0xb8
    NSString * _playerPath; // +0xc0
}
- (void)setIsAnimating:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)itemPlayEnded:(id)arg1;
- (void)startTransitionAnim;
- (void)onPlayEnd;
- (void)setContentMode:(long long)arg1;
- (void)setPlayerLayerContentMode:(long long)arg1 disableAnimation:(BOOL)arg2;
- (long long)getSilentPlayContentMode;
- (long long)getFullPlayContentMode;
- (void)initPreview;
- (void)startPreview;
- (void)pausePreview;
- (void)setMute;
- (void)setUnMute;
- (void)initPlayer;
- (void)startPlayer;
- (void)pausePlayer;
- (void)clearPlayer;
- (void)silentPlay;
- (BOOL)fullPlayWithMute:(BOOL)arg1;
- (BOOL)clear;
- (void)savePlayedTimeToMemory;
- (void)clearBufferCountAndPlayedTime;
- (void)reportKVArgs:(id)arg1;
- (unsigned long long)startDownloadVideo;
- (void)stopDownloadVideo;
- (void)seekToStartFrame;
- (struct)getCurrentPlaybackTime;
- (void)seekTo:(float)arg1;
- (void)setPlayRate:(double)arg1;
- (void)performLoadItem:(id)arg1;
- (void)performPauseForce:(BOOL)arg1;
- (void)performSilentPlay;
- (void)silentPlayImmediately;
- (BOOL)performFullLoad;
- (BOOL)performFullPlay;
- (BOOL)performFullPlayWithMute:(BOOL)arg1;
- (BOOL)performClear;
- (void)willStack;
- (void)onResume;
- (void)setCpKey:(id)arg1;
- (BOOL)isPlayProtect;
- (BOOL)isReEncode;
- (int)getProtectType;
- (void)monitoringPlayback:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)recodeSightWithCompletion:(id /* block */)arg1;
- (id)recodedPath;
- (id)playerPath;
- (id)makeNewTmpPath:(id)arg1 withSubfix:(id)arg2;
- (id)path;
- (void)setPath:(id)arg1;
- (BOOL)isMute;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)status;
- (BOOL)disableResumeMusicPlayAfterPause;
- (void)setDisableResumeMusicPlayAfterPause:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playItem;
- (void)setPlayItem:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (long long)contentMode;
- (BOOL)isAnimating;
- (BOOL)disablePlayerStatusTimerCheck;
- (void)setDisablePlayerStatusTimerCheck:(BOOL)arg1;
- (BOOL)neverHidePreview;
- (void)setNeverHidePreview:(BOOL)arg1;
- (BOOL)removeCrossFadeTransition;
- (void)setRemoveCrossFadeTransition:(BOOL)arg1;
- (id)cpKey;
- (id)playerLayerView;
- (void)setPlayerLayerView:(id)arg1;
- (id)m_preview;
- (void)setM_preview:(id)arg1;
- (double)playRate;
- (float)m_uiMaxLimitDuration;
- (void)setM_uiMaxLimitDuration:(float)arg1;
- (void)setRecodedPath:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void).cxx_destruct;
@end
