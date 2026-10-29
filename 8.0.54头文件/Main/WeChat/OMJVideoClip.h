@interface OMJVideoClip : OMJClip
{
    OMJContentSpatialDesc * _contentSpatialDesc; // +0x10
    CGRect _contentCropRect; // +0x18
    struct _timeRangeInAsset; // +0x38
}
- (id)initWithAssetInfo:(id)arg1;
- (id)initWithAssetInfo:(id)arg1 timeRangeInAsset:(struct)arg2;
- (struct)timeRangeInAsset;
- (id)contentSpatialDesc;
- (void)setContentSpatialDesc:(id)arg1;
- (CGRect)contentCropRect;
- (void)setContentCropRect:(CGRect)arg1;
- (void).cxx_destruct;
@end

