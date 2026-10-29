@interface CameraScanGoodsContentView : CameraScanBaseContentView
{
    BOOL _bShouldHideCaptureView; // +0x8
    UIView<CameraScanGoodsMarkDotViewInterface> * _markDotView; // +0x10
    CameraScanBlurEffectView * _blurView; // +0x18
    UIView * _maskView; // +0x20
    unsigned long long _markDotType; // +0x28
    NSMutableArray * _scanDotViewList; // +0x30
    CameraScanGoodsPinView * _pinView; // +0x38
    UIImageView * _fullScreenBgView; // +0x40
}
- (id)initWithDelegate:(id)arg1 markDotType:(unsigned long long)arg2;
- (void)setupAllSubviews;
- (void)setupFullScreenBgView;
- (void)setupBlurView;
- (void)setupScanDotViewList;
- (void)setupPinView;
- (void)setupMarkdotView;
- (void)setupMaskView;
- (void)layoutSubviews;
- (id)getOneScanDotView;
- (void)startScanningAnimation:(id)arg1;
- (void)stopScanningAnimation;
- (void)startMarkingAnimation:(CGPoint)arg1 completionHandler:(id /* block */)arg2;
- (void)stopMarkingAnimation;
- (void)startShakingAnimation;
- (void)stopShakingAnimation;
- (id)markDotView;
- (void)setMarkDotView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (BOOL)bShouldHideCaptureView;
- (void)setBShouldHideCaptureView:(BOOL)arg1;
- (unsigned long long)markDotType;
- (void)setMarkDotType:(unsigned long long)arg1;
- (id)scanDotViewList;
- (void)setScanDotViewList:(id)arg1;
- (id)pinView;
- (void)setPinView:(id)arg1;
- (id)fullScreenBgView;
- (void)setFullScreenBgView:(id)arg1;
- (void).cxx_destruct;
@end

