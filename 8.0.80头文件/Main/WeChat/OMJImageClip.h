@interface OMJImageClip : OMJClip
{
    OMJContentSpatialDesc * _contentSpatialDesc; // +0x10
    struct _duration; // +0x18
    CGRect _contentCropRect; // +0x30
}
- (id)initWithAssetInfo:(id)arg1 duration:(struct)arg2;
- (struct)duration;
- (id)contentSpatialDesc;
- (void)setContentSpatialDesc:(id)arg1;
- (CGRect)contentCropRect;
- (void)setContentCropRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
