@interface WCVideoRender : NSObject
{
    BOOL _isSharedScreenData; // +0x8
    BOOL _isRendered; // +0x9
}
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)renderImage:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3 FitView:(BOOL)arg4;
- (void)changeFrame:(CGRect)arg1;
- (id)getRenderView;
- (void)cameraFrontMode:(BOOL)arg1;
- (void)updateOrientation;
- (float)defaultFrontDegrees;
- (float)frontDegrees;
- (void)setFrontDegrees:(float)arg1;
- (float)defaultBackDegrees;
- (float)backDegrees;
- (void)setBackDegrees:(float)arg1;
- (BOOL)isTouchInsideViewWithPoint:(CGPoint)arg1;
- (BOOL)isSharedScreenData;
- (void)setIsSharedScreenData:(BOOL)arg1;
- (BOOL)isRendered;
@end
