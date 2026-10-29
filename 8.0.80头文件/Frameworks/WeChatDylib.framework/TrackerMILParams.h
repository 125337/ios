@interface TrackerMILParams : NSObject
{
    Ptr<cv::TrackerMIL::Params> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::TrackerMIL::Params>)arg1;
- (id)initWithNativePtr:(Ptr<cv::TrackerMIL::Params>)arg1;
- (id)init;
- (float)samplerInitInRadius;
- (void)setSamplerInitInRadius:(float)arg1;
- (int)samplerInitMaxNegNum;
- (void)setSamplerInitMaxNegNum:(int)arg1;
- (float)samplerSearchWinSize;
- (void)setSamplerSearchWinSize:(float)arg1;
- (float)samplerTrackInRadius;
- (void)setSamplerTrackInRadius:(float)arg1;
- (int)samplerTrackMaxPosNum;
- (void)setSamplerTrackMaxPosNum:(int)arg1;
- (int)samplerTrackMaxNegNum;
- (void)setSamplerTrackMaxNegNum:(int)arg1;
- (int)featureSetNumFeatures;
- (void)setFeatureSetNumFeatures:(int)arg1;
- (Ptr<cv::TrackerMIL::Params>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
