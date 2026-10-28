@interface FaceRecogRoundView : MMUIView
{
    BOOL _showFacePositionBox; // +0x8
    AVCaptureVideoPreviewLayer * _previewLayer; // +0x10
    UIImageView * _facePositionBox; // +0x18
    CALayer * _shapeLayer; // +0x20
    UIView * _previewView; // +0x28
    UIView * _blurBkView; // +0x30
    UIImageView * _blurView; // +0x38
    CGRect _faceRoundFrame; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 FaceFrame:(CGRect)arg2;
- (void)setFaceRoundFrame:(CGRect)arg1;
- (void)attachPreviewLayer:(id)arg1;
- (void)showLoading:(BOOL)arg1 image:(id)arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (void)resetView;
- (void)setShowFacePositionBox:(BOOL)arg1;
- (CGRect)faceRoundFrame;
- (BOOL)showFacePositionBox;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg1;
- (id)facePositionBox;
- (void)setFacePositionBox:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)blurBkView;
- (void)setBlurBkView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (void).cxx_destruct;
@end
