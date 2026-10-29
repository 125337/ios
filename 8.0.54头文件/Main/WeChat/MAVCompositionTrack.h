@interface MAVCompositionTrack : NSObject
{
    unsigned long long _trackId; // +0x8
    double _playRate; // +0x10
    double _volume; // +0x18
    NSNumber * _rotate; // +0x20
    MAVTrackTransition * _transition; // +0x28
    NSString * _path; // +0x30
    unsigned long long _type; // +0x38
    TAVClip * _internalClip; // +0x40
    CGSize _sourceSize; // +0x48
    struct _sourceDuration; // +0x58
    CGRect _cropRect; // +0x70
    CGRect _trackCropRect; // +0x90
    struct _timeRange; // +0xb0
    struct _trackTimeRange; // +0xe0
    struct _transitionTimeRange; // +0x110
}
+ (void)load;
+ (void)setFixesTransform:(BOOL)arg1;
+ (CGAffineTransform)wcvm_adjustPreferredTransform:(CGAffineTransform)arg1 withNaturalSize:(CGSize)arg2;
+ (id)KEY_EXTRA_TRACK;
+ (void)makeChain:(id)arg1;
+ (CGAffineTransform)adjustPreferredTransform:(CGAffineTransform)arg1 withNaturalSize:(CGSize)arg2;
- (id)initVideoTrackWithAsset:(id)arg1 path:(id)arg2;
- (id)initWithPath:(id)arg1 type:(unsigned long long)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)buildClip;
- (id)buildThumbSource;
- (id)getResource;
- (void)setTimeRange:(struct)arg1;
- (struct)startTime;
- (struct)duration;
- (void)setTrackTimeRange:(struct)arg1;
- (struct)trackStartTime;
- (struct)trackDuration;
- (BOOL)hasVideo;
- (BOOL)hasAudio;
- (void)setVolume:(double)arg1;
- (id)buildVideoClip;
- (void)initVideoClipInfo:(id)arg1 asset:(id)arg2;
- (void)initImageClipInfo:(CGImage *)arg1;
- (id)description;
- (unsigned long long)trackId;
- (void)setTrackId:(unsigned long long)arg1;
- (struct)timeRange;
- (struct)trackTimeRange;
- (double)playRate;
- (void)setPlayRate:(double)arg1;
- (double)volume;
- (id)rotate;
- (void)setRotate:(id)arg1;
- (CGRect)cropRect;
- (void)setCropRect:(CGRect)arg1;
- (CGRect)trackCropRect;
- (void)setTrackCropRect:(CGRect)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (struct)transitionTimeRange;
- (void)setTransitionTimeRange:(struct)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (struct)sourceDuration;
- (void)setSourceDuration:(struct)arg1;
- (CGSize)sourceSize;
- (void)setSourceSize:(CGSize)arg1;
- (id)internalClip;
- (void)setInternalClip:(id)arg1;
- (void).cxx_destruct;
@end

