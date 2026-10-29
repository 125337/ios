@interface FinderMediaAndPlayerQoEInfo : NSObject
{
    BOOL _adajustUpLevel; // +0x8
    BOOL _adajustDownLevel; // +0x9
    BOOL _bReadyToPlay; // +0xa
    int _bitrate; // +0xc
    int _quality; // +0x10
    float _duration; // +0x14
    int _preloadDuration; // +0x18
    int _recieveMoovDataCost; // +0x1c
    int _firstVideoFrameRenderedCost; // +0x20
    int _playDownloadSpeed; // +0x24
    float _playablePos; // +0x28
    int _loopCount; // +0x2c
    NSString * _tid; // +0x30
    NSMutableArray * _specsArray; // +0x38
    NSString * _fileformat; // +0x40
    long long _downloadSize; // +0x48
    long long _showLoadingCount; // +0x50
    long long _stalledCount; // +0x58
    double _totalPlaybackTime; // +0x60
    double _playbackTime; // +0x68
}
+ (id)defaultFinderPlayerQoEInfo;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)specsArray;
- (void)setSpecsArray:(id)arg1;
- (id)fileformat;
- (void)setFileformat:(id)arg1;
- (int)bitrate;
- (void)setBitrate:(int)arg1;
- (int)quality;
- (void)setQuality:(int)arg1;
- (float)duration;
- (void)setDuration:(float)arg1;
- (long long)downloadSize;
- (void)setDownloadSize:(long long)arg1;
- (int)preloadDuration;
- (void)setPreloadDuration:(int)arg1;
- (BOOL)adajustUpLevel;
- (void)setAdajustUpLevel:(BOOL)arg1;
- (BOOL)adajustDownLevel;
- (void)setAdajustDownLevel:(BOOL)arg1;
- (long long)showLoadingCount;
- (void)setShowLoadingCount:(long long)arg1;
- (long long)stalledCount;
- (void)setStalledCount:(long long)arg1;
- (int)recieveMoovDataCost;
- (void)setRecieveMoovDataCost:(int)arg1;
- (int)firstVideoFrameRenderedCost;
- (void)setFirstVideoFrameRenderedCost:(int)arg1;
- (double)totalPlaybackTime;
- (void)setTotalPlaybackTime:(double)arg1;
- (double)playbackTime;
- (void)setPlaybackTime:(double)arg1;
- (int)playDownloadSpeed;
- (void)setPlayDownloadSpeed:(int)arg1;
- (float)playablePos;
- (void)setPlayablePos:(float)arg1;
- (int)loopCount;
- (void)setLoopCount:(int)arg1;
- (BOOL)bReadyToPlay;
- (void)setBReadyToPlay:(BOOL)arg1;
- (void).cxx_destruct;
@end
