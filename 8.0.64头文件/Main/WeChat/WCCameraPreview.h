@interface WCCameraPreview : GPUImageView <SightPreviewView>
{
    double m_zoomLevel; // +0x10
    BOOL m_isReady; // +0x18
    CGSize sizeInPixels; // +0x20
    double inputWidth; // +0x30
    double inputHeight; // +0x38
    double m_currZoomLevel; // +0x40
    int m_focusInAnim; // +0x48
    StrokeView * m_focusStroke; // +0x50
    BOOL m_supportQRFrame; // +0x58
    BOOL m_isPinching; // +0x59
    BOOL renderFirstFrame; // +0x5a
    BOOL _lightBoostOn; // +0x5b
    BOOL _isManualCameraZoom; // +0x5c
    int _videoStabilizationMode; // +0x60
    id <WCCameraPreviewDelegate> m_delegate; // +0x68
    NSString * _qrData; // +0x70
    double _m_lastZoomScale; // +0x78
}
- (id)initWithFrame:(CGRect)arg1 previewLayer:(id)arg2;
- (void)setupGesture;
- (void)handleFocusTap:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)focusCenter;
- (BOOL)supportQRFrame;
- (void)setQRFrameEnable:(BOOL)arg1;
- (BOOL)isReady;
- (void)setReady;
- (void)setZoomLevel:(double)arg1 immediatly:(BOOL)arg2;
- (void)setZoomLevel:(double)arg1;
- (void)forceSetLastZoomScale:(double)arg1;
- (void)setOutputWidth:(float)arg1 andHeight:(float)arg2;
- (CGPoint)transformPointInView:(CGPoint)arg1;
- (CGPoint)transformPointToView:(CGPoint)arg1;
- (void)forceFocusAnimAtPoint:(CGPoint)arg1;
- (void)startFocusAnimAtPoint:(CGPoint)arg1;
- (void)removeFocusStroke;
- (void)hideFocusFrame;
- (id)getShineAnim:(double)arg1 count:(unsigned int)arg2;
- (void)setVideoStabilizationMode:(int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (double)zoomLevel;
- (BOOL)renderFirstFrame;
- (BOOL)lightBoostOn;
- (void)setLightBoostOn:(BOOL)arg1;
- (int)videoStabilizationMode;
- (BOOL)isManualCameraZoom;
- (void)setIsManualCameraZoom:(BOOL)arg1;
- (id)qrData;
- (void)setQrData:(id)arg1;
- (double)m_lastZoomScale;
- (void)setM_lastZoomScale:(double)arg1;
- (void).cxx_destruct;
@end
