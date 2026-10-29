@interface MJDummyNarrationSegmentCell : UIView
{
    vector<float, std::allocator<float>> _decibels; // +0x8
    shared_ptr<std::vector<float>> _realDecibelHeights; // +0x20
    shared_ptr<std::vector<float>> _allDecibelHeights; // +0x30
    int _dummySampleCount; // +0x40
    vector<float, std::allocator<float>> _dummyDecibelHeights; // +0x48
    BOOL _contentCanBeDrawn; // +0x60
    OMCDecibelHeightCalculator * _decibelHeightCalc; // +0x68
    MJAudioWaveformView * _waveformView; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithCaptionItems:(id)arg1;
- (void)updateWithDecibels:(const void *)arg1;
- (BOOL)contentCanBeDrawn;
- (void)setContentCanBeDrawn:(BOOL)arg1;
- (id)decibelHeightCalc;
- (id)waveformView;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

