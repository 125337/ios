@interface SightPreviewViewF2 : MMUIView <SightPreviewView>
{
    double m_zoomLevel; // +0x8
    BOOL m_isReady; // +0x10
    CGSize sizeInPixels; // +0x18
    double inputWidth; // +0x28
    double inputHeight; // +0x30
    double m_currZoomLevel; // +0x38
    int m_focusInAnim; // +0x40
    BOOL m_supportQRFrame; // +0x44
    BOOL _showLightingAdjustBar; // +0x45
    BOOL _renderFirstFrame; // +0x46
    BOOL _lightBoostOn; // +0x47
    int _videoStabilizationMode; // +0x48
    UIColor * _strokeColor; // +0x50
    UIColor * _focusViewShadowColor; // +0x58
    SightFocusView * _focusView; // +0x60
    NSString * _qrData; // +0x68
    NSObject<SightQRCodeScannerDelegate> * _qrDelegate; // +0x70
}
- (void)logInnerPreviewLayerStateWithScene:(id)arg1 previewLayer:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 previewLayer:(id)arg2;
- (id)innerPreviewLayer;
- (void)layoutSubviews;
- (BOOL)supportQRFrame;
- (void)setQRFrameEnable:(BOOL)arg1;
- (BOOL)isReady;
- (void)setReady;
- (void)setZoomLevel:(double)arg1 immediatly:(BOOL)arg2;
- (void)setZoomLevel:(double)arg1;
- (void)setOutputWidth:(float)arg1 andHeight:(float)arg2;
- (BOOL)isFocusActive;
- (CGPoint)captureDevicePointOfInterestForPoint:(CGPoint)arg1;
- (CGPoint)transformPointInView:(CGPoint)arg1;
- (CGPoint)transformPointToView:(CGPoint)arg1;
- (void)forceFocusAnimAtPoint:(CGPoint)arg1;
- (void)startFocusAnimAtPoint:(CGPoint)arg1;
- (void)removeFocusStroke;
- (BOOL)stratAdjustLighting;
- (double)increaseLightingBarPercent:(double)arg1;
- (void)stopAdjustLighting;
- (void)onQRCodeFrame:(float *)arg1 withData:(id)arg2;
- (void)setQRScannerDelegate:(id)arg1;
- (void)setLightBoostOn:(BOOL)arg1;
- (void)setVideoStabilizationMode:(int)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setFocusViewShadowColor:(id)arg1;
- (double)zoomLevel;
- (BOOL)showLightingAdjustBar;
- (void)setShowLightingAdjustBar:(BOOL)arg1;
- (BOOL)renderFirstFrame;
- (id)strokeColor;
- (id)focusViewShadowColor;
- (BOOL)lightBoostOn;
- (int)videoStabilizationMode;
- (id)focusView;
- (void)setFocusView:(id)arg1;
- (id)qrData;
- (void)setQrData:(id)arg1;
- (id)qrDelegate;
- (void)setQrDelegate:(id)arg1;
- (void).cxx_destruct;
@end
