@interface AffineFeature : Feature2D
{
    Ptr<cv::AffineFeature> _nativePtrAffineFeature; // +0x8
}
+ (id)fromNative:(Ptr<cv::AffineFeature>)arg1;
+ (id)create:(id)arg1 maxTilt:(int)arg2 minTilt:(int)arg3 tiltStep:(float)arg4 rotateStepBase:(float)arg5;
+ (id)create:(id)arg1 maxTilt:(int)arg2 minTilt:(int)arg3 tiltStep:(float)arg4;
+ (id)create:(id)arg1 maxTilt:(int)arg2 minTilt:(int)arg3;
+ (id)create:(id)arg1 maxTilt:(int)arg2;
+ (id)create:(id)arg1;
- (id)initWithNativePtr:(Ptr<cv::AffineFeature>)arg1;
- (void)setViewParams:(id)arg1 rolls:(id)arg2;
- (void)getViewParams:(id)arg1 rolls:(id)arg2;
- (id)getDefaultName;
- (Ptr<cv::AffineFeature>)nativePtrAffineFeature;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
