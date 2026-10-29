@interface ReplayKitEncoderStats : NSObject
{
    unsigned int _encoder_type; // +0x8
    unsigned int _encode_fps; // +0xc
    unsigned int _encode_width; // +0x10
    unsigned int _encode_height; // +0x14
    float _encode_fps_health; // +0x18
    float _encode_bitrate_health; // +0x1c
}
- (unsigned int)encoder_type;
- (void)setEncoder_type:(unsigned int)arg1;
- (unsigned int)encode_fps;
- (void)setEncode_fps:(unsigned int)arg1;
- (unsigned int)encode_width;
- (void)setEncode_width:(unsigned int)arg1;
- (unsigned int)encode_height;
- (void)setEncode_height:(unsigned int)arg1;
- (float)encode_fps_health;
- (void)setEncode_fps_health:(float)arg1;
- (float)encode_bitrate_health;
- (void)setEncode_bitrate_health:(float)arg1;
@end
