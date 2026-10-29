@interface VoIPMPFlutterTextureHolder : NSObject <FlutterTexture>
{
    BOOL _isLandscapeMode; // +0x8
    BOOL _didUnregisterTexture; // +0x9
    int _width; // +0xc
    int _height; // +0x10
    int _rotate; // +0x14
    long long _textureId; // +0x18
    NSObject<FlutterTextureRegistry> * _registry; // +0x20
    __CVBuffer * _pixelBuffer; // +0x28
}
- (id)initWithTextureRegistry:(id)arg1;
- (void)dealloc;
- (__CVBuffer *)copyPixelBuffer;
- (__CVBuffer *)copyPixelBuffer:(__CVBuffer *)arg1 width:(int)arg2 height:(int)arg3 rotate:(int)arg4 mirrored:(BOOL)arg5;
- (BOOL)updatePixelBuffer:(__CVBuffer *)arg1 width:(int)arg2 height:(int)arg3 rotate:(int)arg4 isLandscapeMode:(BOOL)arg5 mirrored:(BOOL)arg6;
- (BOOL)updateVideoFrame:(const char *)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
- (int)VoIPMPTextureRotateFromFormat:(int)arg1;
- (void)unregisterTexture;
- (long long)textureId;
- (void)setTextureId:(long long)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (int)rotate;
- (void)setRotate:(int)arg1;
- (BOOL)isLandscapeMode;
- (void)setIsLandscapeMode:(BOOL)arg1;
- (id)registry;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)didUnregisterTexture;
- (void)setDidUnregisterTexture:(BOOL)arg1;
- (void).cxx_destruct;
@end
