@interface MJAudialClipSegmentViewModel : MJElementSegmentViewModel
{
    vector<float, std::allocator<float>> _decibels; // +0x8
    shared_ptr<std::vector<float>> _normalizedDecibelHeights; // +0x20
    unsigned int _prevSampleCount; // +0x30
    BOOL _shouldUpdateWaveformProvider; // +0x34
    OMCClipSegment * _clipSegment; // +0x38
    OMCAudioWaveformProvider * _waveformProvider; // +0x40
    OMCDecibelHeightCalculator * _decibelHeightCalc; // +0x48
}
- (id)initWithClipSegment:(id)arg1;
- (BOOL)syncWithSegment:(id)arg1;
- (void)syncWithAudialClipSegmentImpl;
- (tuple<bool, const std::shared_ptr<std::vector<float>> &, float>)normalizedDecibelHeightsWithTimeRange:(struct)arg1 sampleCount:(unsigned int)arg2;
- (tuple<bool, const std::shared_ptr<std::vector<float>> &, float>)normalizedDecibelHeightsWithTimeRange:(struct)arg1 sampleCount:(unsigned int)arg2 forceUpdate:(BOOL)arg3;
- (void)audialClipDidBeReplaced;
- (id)clipSegment;
- (void)setClipSegment:(id)arg1;
- (id)waveformProvider;
- (void)setWaveformProvider:(id)arg1;
- (id)decibelHeightCalc;
- (void)setDecibelHeightCalc:(id)arg1;
- (BOOL)shouldUpdateWaveformProvider;
- (void)setShouldUpdateWaveformProvider:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
