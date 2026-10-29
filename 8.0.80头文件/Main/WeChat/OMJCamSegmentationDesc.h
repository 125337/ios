@interface OMJCamSegmentationDesc : NSObject
{
    float _blurIntensity; // +0x8
    long long _backgroundType; // +0x10
    OMJAssetInfo * _assetInfo; // +0x18
}
+ (id)segmentationDescWithBlurIntensity:(float)arg1;
+ (id)segmentationDescWithAssetInfo:(id)arg1;
+ (id)segmentationDesc;
- (id)initWithBackgroundType:(long long)arg1 blurIntensity:(float)arg2 assetInfo:(id)arg3;
- (id)description;
- (long long)backgroundType;
- (float)blurIntensity;
- (id)assetInfo;
- (void).cxx_destruct;
@end
