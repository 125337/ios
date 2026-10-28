@interface TPClipPlayer : NSObject <TPAVPlayerDelegate, TPSlicePlayerCacheDelegate, TPPlayerVideoPrivateDelegate, ITPAVPlayer>
{
    BOOL isCaching; // +0x8
    BOOL enableAccurateStartPos; // +0x9
    BOOL enableVideoFrameOutput; // +0xa
    BOOL enableLoopback; // +0xb
    BOOL enableSnapshot; // +0xc
    BOOL enableResourceLoader; // +0xd
    BOOL _allowsExternalPlayback; // +0xe
    BOOL _usesExternalPlaybackWhileExternalScreenIsActive; // +0xf
    BOOL isPlayInPIP; // +0x10
    BOOL _enableAutoPictureInPicture; // +0x11
    BOOL _isResuming; // +0x12
    BOOL _shouldNotifyClipStartWhenPlaying; // +0x13
    float _volume; // +0x14
    float _rate; // +0x18
    int playerID; // +0x1c
    TPPlayerVideo * _currentVideo; // +0x20
    TPPlayerLayerViewContainer * _view; // +0x28
    id _delegate; // +0x30
    long long duration; // +0x38
    long long currentTime; // +0x40
    double currentTimeBase; // +0x48
    long long bufferedDuration; // +0x50
    long long playbackState; // +0x58
    NSError * error; // +0x60
    long long loopbackStartPos; // +0x68
    long long loopbackSkipEndPos; // +0x70
    NSString * _videoGravity; // +0x78
    NSString * _externalPlaybackVideoGravity; // +0x80
    long long _currentClipIndex; // +0x88
    long long _preferredForwardBufferDurationMs; // +0x90
    unsigned long long _allowedAudioSpatializationFormats; // +0x98
    TPSlicePlayer * _player; // +0xa0
    TPPlayerVideo * _video; // +0xa8
    NSTimer * _playerSwitchTimer; // +0xb0
    long long _seekSource; // +0xb8
    long long _seekingTime; // +0xc0
    id /* block */ _playerTimeObserverBlock; // +0xc8
    TPPlayerLogContext * _log; // +0xd0
    CGSize _presentationSize; // +0xd8
}
- (id)init;
- (void)dealloc;
- (void)setView:(id)arg1;
- (void)loadVideo:(id)arg1;
- (void)updateVideo:(id)arg1;
- (void)play;
- (void)pause;
- (void)stop;
- (void)setRate:(float)arg1;
- (BOOL)isCaching;
- (void)seekToTime:(long long)arg1 mode:(long long)arg2;
- (void)seekToTime:(long long)arg1 mode:(long long)arg2 source:(long long)arg3;
- (void)setVolume:(float)arg1;
- (long long)currentTime;
- (long long)bufferedDuration;
- (id)snapshot;
- (long long)countSliceOrder:(long long)arg1;
- (void)startOutputFrame:(double)arg1;
- (void)stopOutputFrame;
- (void)pauseOutputFrame;
- (void)resumeOutputFrame;
- (void)setTimeObserverBlock:(id /* block */)arg1;
- (long long)getPreItemsTime:(long long)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)setExternalPlaybackVideoGravity:(id)arg1;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (void)changePlayerPlaybackState:(long long)arg1;
- (id)trackInfoArray;
- (BOOL)selectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (BOOL)deselectTrackInfo:(long long)arg1 opaque:(long long)arg2;
- (BOOL)deselectTrackInfoWithoutCallback:(long long)arg1 opaque:(long long)arg2;
- (void)onPlayerTimeObserverCalled:(struct)arg1;
- (BOOL)checkNeedSkipEnd;
- (void)checkPlayerSwitchTimer;
- (void)checkCacheNext;
- (void)getReadyToSwitchPlayer:(id)arg1;
- (long long)currentClipIndex;
- (void)setAllowedAudioSpatializationFormats:(unsigned long long)arg1;
- (unsigned long long)allowedAudioSpatializationFormats;
- (void)setEnableAutoPictureInPicture:(BOOL)arg1;
- (void)notifyClipStartIfNeededWhenAdvanceToNext;
- (void)notifyClipStartIfNeededWhenPlaying;
- (void)updateContext:(id)arg1;
- (void)player:(id)arg1 loadStateDidChange:(long long)arg2;
- (void)player:(id)arg1 playbackStateDidChange:(long long)arg2;
- (void)player:(id)arg1 didErrorOccurred:(id)arg2;
- (void)player:(id)arg1 seekCompleted:(BOOL)arg2;
- (void)player:(id)arg1 airplayDidActive:(BOOL)arg2;
- (void)player:(id)arg1 timeBaseValueChange:(double)arg2;
- (void)player:(id)arg1 onVideoFrame:(__CVBuffer *)arg2;
- (void)player:(id)arg1 naturalSizeAvailableWithSize:(CGSize)arg2;
- (id)player:(id)arg1 assembleAVAssetWithIndex:(unsigned long long)arg2;
- (void)playerFirstFrameRendered:(id)arg1;
- (void)player:(id)arg1 videoEndOfOnePlayLoop:(id)arg2;
- (void)player:(id)arg1 didSelectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 didDeselectedTrackAtIndex:(unsigned long long)arg2 opaque:(long long)arg3;
- (void)player:(id)arg1 didFailedToPlayToEndWithError:(id)arg2;
- (void)slicePlayer:(id)arg1 changedToNewPlayer:(id)arg2;
- (void)startPosDidChange:(id)arg1;
- (void)skipEndPosDidChange:(id)arg1;
- (id)currentVideo;
- (void)setCurrentVideo:(id)arg1;
- (id)view;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (void)setCurrentTime:(long long)arg1;
- (double)currentTimeBase;
- (void)setCurrentTimeBase:(double)arg1;
- (void)setIsCaching:(BOOL)arg1;
- (void)setBufferedDuration:(long long)arg1;
- (float)volume;
- (float)rate;
- (long long)playbackState;
- (void)setPlaybackState:(long long)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (int)playerID;
- (void)setPlayerID:(int)arg1;
- (BOOL)enableAccurateStartPos;
- (void)setEnableAccurateStartPos:(BOOL)arg1;
- (BOOL)enableVideoFrameOutput;
- (void)setEnableVideoFrameOutput:(BOOL)arg1;
- (BOOL)enableLoopback;
- (void)setEnableLoopback:(BOOL)arg1;
- (long long)loopbackStartPos;
- (void)setLoopbackStartPos:(long long)arg1;
- (long long)loopbackSkipEndPos;
- (void)setLoopbackSkipEndPos:(long long)arg1;
- (BOOL)enableSnapshot;
- (void)setEnableSnapshot:(BOOL)arg1;
- (BOOL)enableResourceLoader;
- (void)setEnableResourceLoader:(BOOL)arg1;
- (id)videoGravity;
- (BOOL)allowsExternalPlayback;
- (id)externalPlaybackVideoGravity;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (void)setCurrentClipIndex:(long long)arg1;
- (long long)preferredForwardBufferDurationMs;
- (void)setPreferredForwardBufferDurationMs:(long long)arg1;
- (BOOL)isPlayInPIP;
- (void)setIsPlayInPIP:(BOOL)arg1;
- (BOOL)enableAutoPictureInPicture;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)video;
- (void)setVideo:(id)arg1;
- (id)playerSwitchTimer;
- (void)setPlayerSwitchTimer:(id)arg1;
- (long long)seekSource;
- (void)setSeekSource:(long long)arg1;
- (long long)seekingTime;
- (void)setSeekingTime:(long long)arg1;
- (CGSize)presentationSize;
- (void)setPresentationSize:(CGSize)arg1;
- (id /* block */)playerTimeObserverBlock;
- (void)setPlayerTimeObserverBlock:(id /* block */)arg1;
- (BOOL)isResuming;
- (void)setIsResuming:(BOOL)arg1;
- (BOOL)shouldNotifyClipStartWhenPlaying;
- (void)setShouldNotifyClipStartWhenPlaying:(BOOL)arg1;
- (id)log;
- (void)setLog:(id)arg1;
- (void).cxx_destruct;
@end
