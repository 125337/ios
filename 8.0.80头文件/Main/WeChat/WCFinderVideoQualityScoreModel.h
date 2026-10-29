@interface WCFinderVideoQualityScoreModel : NSObject
{
    BOOL _hasStickers; // +0x8
    double _videoScore; // +0x10
    double _videoCoverScore; // +0x18
    double _videoAudioScore; // +0x20
    double _thumbScore; // +0x28
    double _hdimgScore; // +0x30
    WCFinderCheckThumbModel * _coverModel; // +0x38
}
- (double)videoScore;
- (void)setVideoScore:(double)arg1;
- (double)videoCoverScore;
- (void)setVideoCoverScore:(double)arg1;
- (double)videoAudioScore;
- (void)setVideoAudioScore:(double)arg1;
- (double)thumbScore;
- (void)setThumbScore:(double)arg1;
- (double)hdimgScore;
- (void)setHdimgScore:(double)arg1;
- (BOOL)hasStickers;
- (void)setHasStickers:(BOOL)arg1;
- (id)coverModel;
- (void)setCoverModel:(id)arg1;
- (void).cxx_destruct;
@end
