@interface MJComposingMusicClipWaveformView : UIView
{
    NSArray * _samples; // +0x8
    double _selectionLeft; // +0x10
    double _selectionRight; // +0x18
    double _playProgress; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithSamples:(id)arg1;
- (void)setSelectionLeft:(double)arg1 selectionRight:(double)arg2;
- (void)setPlayProgress:(double)arg1 selectionLeft:(double)arg2 selectionRight:(double)arg3;
- (void)drawRect:(CGRect)arg1;
- (id)samples;
- (void)setSamples:(id)arg1;
- (double)selectionLeft;
- (void)setSelectionLeft:(double)arg1;
- (double)selectionRight;
- (void)setSelectionRight:(double)arg1;
- (double)playProgress;
- (void)setPlayProgress:(double)arg1;
- (void).cxx_destruct;
@end
