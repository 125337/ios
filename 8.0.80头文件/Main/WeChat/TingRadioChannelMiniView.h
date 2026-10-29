@interface TingRadioChannelMiniView : UIView
{
    UIImageView * _coverImage; // +0x8
    UIView * _barView; // +0x10
    PAGView * _waveMaskLayer; // +0x18
    PAGFile * _waveFile; // +0x20
    UIView * _waveColorView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)initPagWave;
- (void)layoutSubviews;
- (void)setCustomImage:(id)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (id)barView;
- (void)setBarView:(id)arg1;
- (id)waveMaskLayer;
- (void)setWaveMaskLayer:(id)arg1;
- (id)waveFile;
- (void)setWaveFile:(id)arg1;
- (id)waveColorView;
- (void)setWaveColorView:(id)arg1;
- (void).cxx_destruct;
@end
