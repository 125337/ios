@interface VideoCompositionAttr : MMObject <NSCoding>
{
    BOOL _hasOriginSound; // +0x8
    BOOL _isPhotoCompositionVideo; // +0x9
    BOOL _forbidsSoftEncoding; // +0xa
    BOOL _useAssetDurationForCompose; // +0xb
    BOOL _isVideoEdited; // +0xc
    BOOL _canCompositeSameVideo; // +0xd
    UIImage * overlayImage; // +0x10
    NSMutableDictionary * _extraInfo; // +0x18
    CALayer * _overlayLayer; // +0x20
    unsigned long long _entranceType; // +0x28
    unsigned long long _subEntranceType; // +0x30
    long long _mediaType; // +0x38
    NSString * _videoBGMPath; // +0x40
    AVMutableVideoComposition * _videoComposition; // +0x48
    id /* block */ _progressBlock; // +0x50
    double _currentVideoEncodeProgress; // +0x58
    CGRect _cropFrame; // +0x60
    struct cropTimeRange; // +0x80
}
+ (id)createFromEditVideoAttr:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)extraInfo;
- (id)description;
- (void)setMediaType:(long long)arg1;
- (void)setVideoComposition:(id)arg1;
- (id)overlayImage;
- (void)setOverlayImage:(id)arg1;
- (struct)cropTimeRange;
- (void)setCropTimeRange:(struct)arg1;
- (id)overlayLayer;
- (void)setOverlayLayer:(id)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (unsigned long long)subEntranceType;
- (void)setSubEntranceType:(unsigned long long)arg1;
- (long long)mediaType;
- (id)videoBGMPath;
- (void)setVideoBGMPath:(id)arg1;
- (BOOL)hasOriginSound;
- (void)setHasOriginSound:(BOOL)arg1;
- (BOOL)isPhotoCompositionVideo;
- (void)setIsPhotoCompositionVideo:(BOOL)arg1;
- (CGRect)cropFrame;
- (void)setCropFrame:(CGRect)arg1;
- (BOOL)forbidsSoftEncoding;
- (void)setForbidsSoftEncoding:(BOOL)arg1;
- (id)videoComposition;
- (BOOL)useAssetDurationForCompose;
- (void)setUseAssetDurationForCompose:(BOOL)arg1;
- (BOOL)isVideoEdited;
- (void)setIsVideoEdited:(BOOL)arg1;
- (BOOL)canCompositeSameVideo;
- (void)setCanCompositeSameVideo:(BOOL)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (double)currentVideoEncodeProgress;
- (void)setCurrentVideoEncodeProgress:(double)arg1;
- (void).cxx_destruct;
@end
