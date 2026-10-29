@interface MJAudioSegmentCell : MJSegmentCell <MJAudioWaveformViewDelegate>
{
    BOOL _contentCanBeDrawn; // +0x8
    MJAudioWaveformView * _waveformView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)audioWaveformViewDidLayout:(id)arg1;
- (void)drawWaveformWithTimeRange:(struct)arg1 sampleCount:(unsigned int)arg2;
- (void)drawWaveformWithTimeRange:(struct)arg1 sampleCount:(unsigned int)arg2 forceUpdate:(BOOL)arg3;
- (BOOL)contentCanBeDrawn;
- (void)setContentCanBeDrawn:(BOOL)arg1;
- (id)waveformView;
- (void).cxx_destruct;
@end

