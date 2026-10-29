@interface WAMiniToolVoiceRecordingOverlay : UIView
{
    BOOL _isDarkModeEnabled; // +0x8
    unsigned long long _state; // +0x10
    CALayer * _dimmingLayer; // +0x18
    CAShapeLayer * _curveLayer; // +0x20
    CAShapeLayer * _arcColorLayer; // +0x28
    UIView * _asrCardView; // +0x30
    UILabel * _asrTextLabel; // +0x38
    UILabel * _cancelTipLabel; // +0x40
    WAMiniToolVoiceLoadingRingView * _loadingRingView; // +0x48
    WAMiniToolVoiceWaveformView * _waveformView; // +0x50
    unsigned long long _visibilityToken; // +0x58
}
- (id)initWithDarkModeEnabled:(BOOL)arg1;
- (void)setupLayers;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutAsrCardIfNeeded;
- (void)updateArcPaths;
- (id)resolvedCurveFillColor;
- (id)arcColorForState:(unsigned long long)arg1;
- (void)applyState:(unsigned long long)arg1;
- (void)transitionOutOfLoadingWithCancelling:(BOOL)arg1;
- (BOOL)isPointBelowArc:(CGPoint)arg1;
- (void)updateAsrText:(id)arg1;
- (void)showAnimated:(BOOL)arg1;
- (void)hideAnimated:(BOOL)arg1;
- (unsigned long long)state;
- (BOOL)isDarkModeEnabled;
- (void)setIsDarkModeEnabled:(BOOL)arg1;
- (id)dimmingLayer;
- (void)setDimmingLayer:(id)arg1;
- (id)curveLayer;
- (void)setCurveLayer:(id)arg1;
- (id)arcColorLayer;
- (void)setArcColorLayer:(id)arg1;
- (id)asrCardView;
- (void)setAsrCardView:(id)arg1;
- (id)asrTextLabel;
- (void)setAsrTextLabel:(id)arg1;
- (id)cancelTipLabel;
- (void)setCancelTipLabel:(id)arg1;
- (id)loadingRingView;
- (void)setLoadingRingView:(id)arg1;
- (id)waveformView;
- (void)setWaveformView:(id)arg1;
- (unsigned long long)visibilityToken;
- (void)setVisibilityToken:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
