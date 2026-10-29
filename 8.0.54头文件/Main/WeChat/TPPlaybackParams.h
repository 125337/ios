@interface TPPlaybackParams : NSObject
{
    BOOL _outputMute; // +0x8
    BOOL _allowsExternalPlayback; // +0x9
    BOOL _usesExternalPlaybackWhileExternalScreenIsActive; // +0xa
    BOOL _enableResourceLoader; // +0xb
    UIView * _playerView; // +0x10
    double _playSpeedRatio; // +0x18
    double _audioGainRatio; // +0x20
    NSString * _audioNormalizeVolumeParams; // +0x28
    long long _seekPositionMs; // +0x30
    long long _seekType; // +0x38
    TPPlayerQueue * _playerQueue; // +0x40
    long long _playerScene; // +0x48
    unsigned long long _videoGravity; // +0x50
    unsigned long long _externalPlaybackVideoGravity; // +0x58
    TPPlayerDataSource * _dataSource; // +0x60
    TPLoopbackParams * _loopbackParams; // +0x68
    NSMutableDictionary * _optionalConfig; // +0x70
    NSMutableArray * _trackList; // +0x78
    NSMutableDictionary * _selectedTrackInfo; // +0x80
    NSMutableDictionary * _selectedTrackOpaque; // +0x88
}
- (id)init;
- (void)reset;
- (void)resetForRetry;
- (void)resetForStop;
- (void)setUrlDataSource:(id)arg1;
- (void)setMediaAsset:(id)arg1;
- (void)addOptionalParams:(id)arg1;
- (void)addSubtitleSource:(id)arg1 mimeType:(id)arg2 name:(id)arg3 httpHeader:(id)arg4;
- (void)addAudioTrackSource:(id)arg1 name:(id)arg2 httpHeader:(id)arg3;
- (void)setLoopback:(BOOL)arg1 startPositionMs:(long long)arg2 endPositionMS:(long long)arg3;
- (void)saveSelectedTrackInfo:(id)arg1 withOpaque:(long long)arg2;
- (void)removeSelectedTrackAtIndex:(unsigned long long)arg1;
- (void)syncAllTracks:(id)arg1;
- (id)selectedTrackInfoForType:(unsigned long long)arg1;
- (long long)selectedTrackOpaqueForType:(unsigned long long)arg1;
- (BOOL)isDataSourceValid;
- (BOOL)isSeekPositionValid;
- (id)allOptionParams;
- (id)allTrackList;
- (long long)longOptionalParamValueForKey:(unsigned long long)arg1;
- (long long)boolOptionalParamValueForKey:(unsigned long long)arg1;
- (id)stringOptionalParamValueForKey:(unsigned long long)arg1;
- (id)queueIntOptionalParamValueForKey:(unsigned long long)arg1;
- (id)queueStringOptionalParamValueForKey:(unsigned long long)arg1;
- (id)getOptionalParamForKey:(unsigned long long)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (double)playSpeedRatio;
- (void)setPlaySpeedRatio:(double)arg1;
- (double)audioGainRatio;
- (void)setAudioGainRatio:(double)arg1;
- (BOOL)outputMute;
- (void)setOutputMute:(BOOL)arg1;
- (id)audioNormalizeVolumeParams;
- (void)setAudioNormalizeVolumeParams:(id)arg1;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;
- (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)arg1;
- (BOOL)enableResourceLoader;
- (void)setEnableResourceLoader:(BOOL)arg1;
- (long long)seekPositionMs;
- (void)setSeekPositionMs:(long long)arg1;
- (long long)seekType;
- (void)setSeekType:(long long)arg1;
- (id)playerQueue;
- (void)setPlayerQueue:(id)arg1;
- (long long)playerScene;
- (void)setPlayerScene:(long long)arg1;
- (unsigned long long)videoGravity;
- (void)setVideoGravity:(unsigned long long)arg1;
- (unsigned long long)externalPlaybackVideoGravity;
- (void)setExternalPlaybackVideoGravity:(unsigned long long)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)loopbackParams;
- (void)setLoopbackParams:(id)arg1;
- (id)optionalConfig;
- (void)setOptionalConfig:(id)arg1;
- (id)trackList;
- (void)setTrackList:(id)arg1;
- (id)selectedTrackInfo;
- (void)setSelectedTrackInfo:(id)arg1;
- (id)selectedTrackOpaque;
- (void)setSelectedTrackOpaque:(id)arg1;
- (void).cxx_destruct;
@end

