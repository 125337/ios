@interface MBExternalVideoItem : NSObject
{
    BOOL _ignoreSystemMute; // +0x8
    BOOL _preloadAllowed; // +0x9
    unsigned int _preloadOverdueTime; // +0xc
    unsigned int _bgSequenceOnCreate; // +0x10
    unsigned int _preloadCreateTime; // +0x14
    int _preloadErrorCode; // +0x18
    NSString * _src; // +0x20
    long long _playID; // +0x28
    NSString * _mediaId; // +0x30
    NSString * _localPath; // +0x38
    NSString * _localTempPath; // +0x40
    NSString * _event; // +0x48
    unsigned long long _preloadSkipReason; // +0x50
    WCPlayerView * _playerView; // +0x58
    MBExternalVideoControl * _controlView; // +0x60
    id <IMBPublicServiceDispatcher> _dispatcher; // +0x68
    WCPlayerPlayArgs * _playArgs; // +0x70
    unsigned long long _preloadState; // +0x78
}
- (id)initWithSrc:(id)arg1 playID:(long long)arg2 mediaId:(id)arg3 ignoreSystemMute:(BOOL)arg4 dispatcher:(id)arg5;
- (void)prepareResource:(id /* block */)arg1;
- (void)startPlay:(id /* block */)arg1;
- (void)stopPlay:(id /* block */)arg1;
- (void)pausePlay:(id /* block */)arg1;
- (void)resumePlay:(id /* block */)arg1;
- (void)destroy;
- (void)setLoop:(BOOL)arg1 returnBlock:(id /* block */)arg2;
- (void)seekTo:(int)arg1 returnBlock:(id /* block */)arg2;
- (void)setMute:(BOOL)arg1 returnBlock:(id /* block */)arg2;
- (void)setPlaySpeedRatio:(float)arg1 returnBlock:(id /* block */)arg2;
- (void)setEvent:(id)arg1;
- (void)doPreloadPlayer;
- (BOOL)isPreloadPlayerValid;
- (void)rebuildAndPlay;
- (id)createPlayArgs;
- (id)createDownloadArgs;
- (void)startPreloadData;
- (id)src;
- (long long)playID;
- (id)mediaId;
- (id)localPath;
- (id)localTempPath;
- (id)event;
- (BOOL)ignoreSystemMute;
- (BOOL)preloadAllowed;
- (void)setPreloadAllowed:(BOOL)arg1;
- (unsigned long long)preloadSkipReason;
- (void)setPreloadSkipReason:(unsigned long long)arg1;
- (unsigned int)preloadOverdueTime;
- (void)setPreloadOverdueTime:(unsigned int)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)dispatcher;
- (void)setDispatcher:(id)arg1;
- (id)playArgs;
- (void)setPlayArgs:(id)arg1;
- (unsigned long long)preloadState;
- (void)setPreloadState:(unsigned long long)arg1;
- (unsigned int)bgSequenceOnCreate;
- (void)setBgSequenceOnCreate:(unsigned int)arg1;
- (unsigned int)preloadCreateTime;
- (void)setPreloadCreateTime:(unsigned int)arg1;
- (int)preloadErrorCode;
- (void)setPreloadErrorCode:(int)arg1;
- (void).cxx_destruct;
@end
