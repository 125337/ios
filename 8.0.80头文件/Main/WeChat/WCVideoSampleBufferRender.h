@interface WCVideoSampleBufferRender : WCVideoRender
{
    __CVBuffer * _localImageBuffer; // +0x8
    BOOL isRendered; // +0x10
    BOOL _isMirror; // +0x11
    double _previewRotationOffsetDegrees; // +0x18
    UIView * _renderView; // +0x20
    AVSampleBufferDisplayLayer * _renderLayer; // +0x28
    NSRecursiveLock * _localBufferLock; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 isMirror:(BOOL)arg2;
- (id)getRenderView;
- (id)orientationPreviewLayer;
- (void)applyPreviewTransform;
- (void)updatePreviewRotationOffsetDegrees:(double)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(BOOL)arg4 previewRotationOffsetDegrees:(double)arg5;
- (void)changeFrame:(CGRect)arg1;
- (void)setMirror:(BOOL)arg1;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(BOOL)arg4;
- (BOOL)isRendered;
- (void)setIsRendered:(BOOL)arg1;
- (double)previewRotationOffsetDegrees;
- (void)setPreviewRotationOffsetDegrees:(double)arg1;
- (id)renderView;
- (id)renderLayer;
- (id)localBufferLock;
- (void)setLocalBufferLock:(id)arg1;
- (BOOL)isMirror;
- (void)setIsMirror:(BOOL)arg1;
- (void).cxx_destruct;
@end
