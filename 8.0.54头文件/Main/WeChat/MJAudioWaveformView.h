@interface MJAudioWaveformView : UIView
{
    shared_ptr<std::vector<float>> _normalizedHeights; // +0x8
    double _startOffset; // +0x18
    id <MJAudioWaveformViewDelegate> _delegate; // +0x20
}
+ (Class)layerClass;
- (id)shapeLayer;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setFillColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)drawWaveformWithNormalizedHeights:(const void *)arg1 startOffset:(double)arg2;
- (void)internalDrawWaveform;
- (void)internalClearWaveform;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

