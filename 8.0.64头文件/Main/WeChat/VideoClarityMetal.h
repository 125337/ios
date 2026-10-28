@interface VideoClarityMetal : NSObject
{
    float _mode; // +0x8
    float[256] _pixelMapping; // +0xc
    float _param_contrast_enhance_strength; // +0x40c
    float _param_histogram_clipping_relthresh; // +0x410
    float _param_dynamic_range_extension; // +0x414
    float _param_nonflat_region_thresh; // +0x418
    float _param_color_saturation_decay; // +0x41c
    float _param_face_decay_zero; // +0x420
    float _param_face_decay_one; // +0x424
}
+ (void)identityMappingToFragment:(id)arg1 atIndex:(int)arg2;
- (id)initWithMode:(int)arg1;
- (void)dealloc;
- (void)analyzeBaseAddress:(char *)arg1 withRows:(unsigned long long)arg2 withCols:(unsigned long long)arg3 withStride:(unsigned long long)arg4;
- (void)updateParameter:(TPFrame *)arg1 withFlag:(int)arg2;
- (void)uploadMappingToFragment:(id)arg1 withFlag:(int)arg2 atIndex:(int)arg3;
@end
