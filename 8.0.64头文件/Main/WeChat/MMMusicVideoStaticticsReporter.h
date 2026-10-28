@interface MMMusicVideoStaticticsReporter : NSObject
{
    BOOL _hitPreload; // +0x8
    BOOL _isVariableBitrate; // +0x9
    BOOL _isLocalVideo; // +0xa
    unsigned int _reportId; // +0xc
    int _videoEpisodeIndex; // +0x10
    int _videoQualityFormat; // +0x14
    NSString * _url; // +0x18
    long long _videoFileSizeInBytes; // +0x20
    double _videoDurationInMs; // +0x28
    double _videoAverageBitrateInKbps; // +0x30
    long long _averageNetworkSpeedInKBs; // +0x38
    long long _bufferCount; // +0x40
    long long _bufferDurationInMs; // +0x48
    long long _playDurationInMs; // +0x50
    double _startPlayTime; // +0x58
    double _actualPlayTime; // +0x60
    double _startFetchTrackItemTime; // +0x68
    double _didFetchTrackItemTime; // +0x70
}
- (void)fillImformationFromPlayBackInfo:(id)arg1;
- (void)fillImformationFromFinderMediaInfo:(id)arg1;
- (void)fillImformationFromWcplayerReporter:(id)arg1;
- (id)init;
- (void)reportStaticticsWhileStopPlay;
- (void)reportWithString:(id)arg1;
- (int)playStartCost;
- (id)description;
- (BOOL)isOptimizedVideoPreloadPolicy;
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)videoFileSizeInBytes;
- (void)setVideoFileSizeInBytes:(long long)arg1;
- (double)videoDurationInMs;
- (void)setVideoDurationInMs:(double)arg1;
- (double)videoAverageBitrateInKbps;
- (void)setVideoAverageBitrateInKbps:(double)arg1;
- (unsigned int)reportId;
- (void)setReportId:(unsigned int)arg1;
- (long long)averageNetworkSpeedInKBs;
- (void)setAverageNetworkSpeedInKBs:(long long)arg1;
- (long long)bufferCount;
- (void)setBufferCount:(long long)arg1;
- (long long)bufferDurationInMs;
- (void)setBufferDurationInMs:(long long)arg1;
- (long long)playDurationInMs;
- (void)setPlayDurationInMs:(long long)arg1;
- (BOOL)hitPreload;
- (void)setHitPreload:(BOOL)arg1;
- (double)startPlayTime;
- (void)setStartPlayTime:(double)arg1;
- (double)actualPlayTime;
- (void)setActualPlayTime:(double)arg1;
- (int)videoEpisodeIndex;
- (void)setVideoEpisodeIndex:(int)arg1;
- (double)startFetchTrackItemTime;
- (void)setStartFetchTrackItemTime:(double)arg1;
- (double)didFetchTrackItemTime;
- (void)setDidFetchTrackItemTime:(double)arg1;
- (int)videoQualityFormat;
- (void)setVideoQualityFormat:(int)arg1;
- (BOOL)isVariableBitrate;
- (void)setIsVariableBitrate:(BOOL)arg1;
- (BOOL)isLocalVideo;
- (void)setIsLocalVideo:(BOOL)arg1;
- (void).cxx_destruct;
@end
