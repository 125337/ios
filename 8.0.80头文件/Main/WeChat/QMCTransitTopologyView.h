@interface QMCTransitTopologyView : UIView <QMCScalable>
{
    id /* block */ _imageLoader; // +0x8
    id /* block */ _diagLogger; // +0x10
    UIScrollView * _scrollView; // +0x18
    UIStackView * _stackView; // +0x20
    NSString * _walkIconURL; // +0x28
    double _scaleFactor; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setup;
- (void)configureWithSteps:(id)arg1;
- (void)configureWithSteps:(id)arg1 walkIconURL:(id)arg2;
- (id)_formatDuration:(id)arg1;
- (id)_makeSeparatorLabel;
- (id)_colorFromCSSString:(id)arg1;
- (void)qmc_applyScale:(double)arg1;
- (id)_chipLabelsIn:(id)arg1;
- (id /* block */)imageLoader;
- (void)setImageLoader:(id /* block */)arg1;
- (id /* block */)diagLogger;
- (void)setDiagLogger:(id /* block */)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (id)walkIconURL;
- (void)setWalkIconURL:(id)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (void).cxx_destruct;
@end
