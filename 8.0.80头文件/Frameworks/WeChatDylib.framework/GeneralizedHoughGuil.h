@interface GeneralizedHoughGuil : GeneralizedHough
{
    Ptr<cv::GeneralizedHoughGuil> _nativePtrGeneralizedHoughGuil; // +0x8
}
+ (id)fromNative:(Ptr<cv::GeneralizedHoughGuil>)arg1;
- (id)initWithNativePtr:(Ptr<cv::GeneralizedHoughGuil>)arg1;
- (void)setXi:(double)arg1;
- (double)getXi;
- (void)setLevels:(int)arg1;
- (int)getLevels;
- (void)setAngleEpsilon:(double)arg1;
- (double)getAngleEpsilon;
- (void)setMinAngle:(double)arg1;
- (double)getMinAngle;
- (void)setMaxAngle:(double)arg1;
- (double)getMaxAngle;
- (void)setAngleStep:(double)arg1;
- (double)getAngleStep;
- (void)setAngleThresh:(int)arg1;
- (int)getAngleThresh;
- (void)setMinScale:(double)arg1;
- (double)getMinScale;
- (void)setMaxScale:(double)arg1;
- (double)getMaxScale;
- (void)setScaleStep:(double)arg1;
- (double)getScaleStep;
- (void)setScaleThresh:(int)arg1;
- (int)getScaleThresh;
- (void)setPosThresh:(int)arg1;
- (int)getPosThresh;
- (Ptr<cv::GeneralizedHoughGuil>)nativePtrGeneralizedHoughGuil;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
