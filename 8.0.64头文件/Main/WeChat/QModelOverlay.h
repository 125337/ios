@interface QModelOverlay : QGLOverlay <CAAnimationDelegate>
{
    BOOL _unlit; // +0x8
    QGLOverlayRenderMode * _renderMode; // +0x10
    NSString * _path; // +0x18
    double _altitude; // +0x20
    double _rotationX; // +0x28
    double _rotationY; // +0x30
    double _rotationZ; // +0x38
    long long _animateType; // +0x40
    double _exposure; // +0x48
    double _anchorX; // +0x50
    double _anchorY; // +0x58
    double _anchorZ; // +0x60
    QModelOverlayAnimationLayer * _animLayer; // +0x68
    CLLocationCoordinate2D _coordinate; // +0x70
    struct _boundingRect; // +0x80
}
- (void)setMaterialVariant:(unsigned long long)arg1;
- (int)getCurrentMaterialVariant;
- (id)getMaterialVariantsInfo;
- (void)setMonoColor:(id)arg1;
- (void)resetMonoColor;
- (void)setAnamtaion:(id)arg1 forKey:(id)arg2 withMapView:(id)arg3;
- (void)startTranslateAnimation:(id)arg1 duration:(double)arg2 initRotation:(double)arg3 autoRotate:(BOOL)arg4;
- (id)generateAnimationLocations:(id)arg1;
- (void)didChangeRotation:(double)arg1;
- (void)didChangeCoordinate:(CGPoint)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)shouldTriggerAnimDidStopDelegate:(id)arg1;
- (void)setPosition:(id)arg1 error:(id *)arg2;
- (id)getPosition:(id)arg1 error:(id *)arg2;
- (void)setScale:(id)arg1 error:(id *)arg2;
- (id)getScale:(id)arg1 error:(id *)arg2;
- (void)setRotation:(id)arg1 error:(id *)arg2;
- (id)getRotation:(id)arg1 error:(id *)arg2;
- (void)playSkeletonAnimation:(id)arg1 error:(id *)arg2;
- (void)stopSkeletonAnimation:(id)arg1 error:(id *)arg2;
- (id)getSkeletonAnimationInfo:(id)arg1 error:(id *)arg2;
- (void)setExposure:(id)arg1 error:(id *)arg2;
- (id)getExposure:(id)arg1 error:(id *)arg2;
- (void)setPixelBound:(id)arg1 error:(id *)arg2;
- (void)startTranslateAnimation:(id)arg1 error:(id *)arg2;
- (id)getMaterialVariantsInfo:(id)arg1 error:(id *)arg2;
- (void)setMaterialVariant:(id)arg1 error:(id *)arg2;
- (id)getCurrentMaterialVariant:(id)arg1 error:(id *)arg2;
- (void)setMonoColor:(id)arg1 error:(id *)arg2;
- (void)resetMonoColor:(id)arg1 error:(id *)arg2;
- (void)enableUnlit:(id)arg1 error:(id *)arg2;
- (id)getUnlitEnabled:(id)arg1 error:(id *)arg2;
- (id)init;
- (BOOL)isSupportClick;
- (void)setInteractive:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setRotationX:(double)arg1;
- (void)setRotationY:(double)arg1;
- (void)setRotationZ:(double)arg1;
- (void)setAnimateType:(long long)arg1;
- (void)setPath:(id)arg1;
- (void)setExposure:(double)arg1;
- (void)setAnchorX:(double)arg1 Y:(double)arg2 Z:(double)arg3;
- (void)setRenderMode:(id)arg1;
- (int)getNativeAnimationType;
- (void)updateLayerData:(void *)arg1;
- (void *)createImpl;
- (void)destoryImpl;
- (id)getType;
- (double)normalizeRotation:(double)arg1;
- (void)notifyOverlayProgress:(double)arg1 hasError:(BOOL)arg2;
- (void)notifOverlayDidTapWithOverlayObject:(id)arg1;
- (void)playAnimationWithIndex:(int)arg1 speed:(float)arg2 autoRepeat:(BOOL)arg3;
- (void)stopAnimation;
- (id)getAnimationInformation;
- (BOOL)isAnimationPlaying;
- (void)setUnlit:(BOOL)arg1;
- (struct)boundingMapRect;
- (id)renderMode;
- (id)path;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (double)altitude;
- (void)setAltitude:(double)arg1;
- (double)rotationX;
- (double)rotationY;
- (double)rotationZ;
- (long long)animateType;
- (double)exposure;
- (BOOL)isUnlit;
- (double)anchorX;
- (void)setAnchorX:(double)arg1;
- (double)anchorY;
- (void)setAnchorY:(double)arg1;
- (double)anchorZ;
- (void)setAnchorZ:(double)arg1;
- (id)animLayer;
- (void)setAnimLayer:(id)arg1;
- (void).cxx_destruct;
@end
