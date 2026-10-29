@interface MAVBlendEffect : MAVVLogEffect <MAVTextureInfoEffect>
- (long long)type;
- (void)setIsPreMultiplied:(BOOL)arg1;
- (void)setTextureInfo:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)setTextureInfoWithPixelBuf:(__CVBuffer *)arg1;
- (void)dealloc;
@end

