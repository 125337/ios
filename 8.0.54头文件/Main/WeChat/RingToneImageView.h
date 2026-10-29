@interface RingToneImageView : UIImageView
{
    BOOL _isPlaying; // +0x8
    BOOL _showForCellOnly; // +0x9
    UIImageView * _webCoverView; // +0x10
    RingToneDetail * _ring; // +0x18
    MMUILabel * _sourceLabel; // +0x20
    UIImageView * _qqMusicIconView; // +0x28
    UIView * _coverMaskView; // +0x30
    UIImage * _defaultImage; // +0x38
    SightIconView * _playImageView; // +0x40
    UIImageView * _musicDancingView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrameForCell:(CGRect)arg1;
- (void)initView;
- (void)addDancingMusicView;
- (void)dancingMusicView:(BOOL)arg1 type:(unsigned long long)arg2;
- (void)updateCoverImageWith:(id)arg1;
- (void)setIsPlaying:(BOOL)arg1;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (id)webCoverView;
- (void)setWebCoverView:(id)arg1;
- (id)ring;
- (void)setRing:(id)arg1;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (id)qqMusicIconView;
- (void)setQqMusicIconView:(id)arg1;
- (id)coverMaskView;
- (void)setCoverMaskView:(id)arg1;
- (id)defaultImage;
- (void)setDefaultImage:(id)arg1;
- (id)playImageView;
- (void)setPlayImageView:(id)arg1;
- (id)musicDancingView;
- (void)setMusicDancingView:(id)arg1;
- (void).cxx_destruct;
@end

