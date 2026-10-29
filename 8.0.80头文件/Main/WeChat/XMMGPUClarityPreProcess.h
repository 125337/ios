@interface XMMGPUClarityPreProcess : NSObject
{
    float _mode; // +0x8
    float[256] _pixel_mapping; // +0xc
    float _param_contrast_enhance_strength; // +0x40c
    float _param_histogram_clipping_relthresh; // +0x410
    float _param_dynamic_range_extension; // +0x414
    float _param_nonflat_region_thresh; // +0x418
    float _param_color_saturation_decay; // +0x41c
    float _param_face_decay_zero; // +0x420
    float _param_face_decay_one; // +0x424
}
- (id)initWithMode:(int)arg1;
- (void)reset;
- (void)analyzePixelBuffer:(__CVBuffer *)arg1;
- (void)analyzePixelBuffer:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 stride:(unsigned long long)arg4;
- (float *)getPixelMapping;
@end
