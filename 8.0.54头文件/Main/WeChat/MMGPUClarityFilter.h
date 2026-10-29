@interface MMGPUClarityFilter : MMGPUOneTextureRender
{
    int uniform_location_clarity_flag; // +0x50
    int uniform_location_pixel_mapping; // +0x54
    int uniform_location_saturation_decay; // +0x58
    int uniform_location_face_decay_zero; // +0x5c
    int uniform_location_face_decay_one; // +0x60
}
- (id)initWithMode:(int)arg1;
- (void)setClarityFlag:(int)arg1;
- (void)setPixelMapping:(float *)arg1;
- (void)setSaturationDecay:(float)arg1;
- (void)setFaceDecayZero:(float)arg1 One:(float)arg2;
- (unsigned int)process:(int)arg1 inputRes:(CGSize)arg2;
@end

