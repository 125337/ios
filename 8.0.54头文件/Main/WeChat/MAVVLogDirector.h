@interface MAVVLogDirector : NSObject
{
    int _outputWidth; // +0x8
    int _outputHeight; // +0xc
    int _width; // +0x10
    int _height; // +0x14
}
- (id)init;
- (void)setSize:(int)arg1 height:(int)arg2;
- (void)setOutputSize:(int)arg1 height:(int)arg2;
- (void)setEffectManager:(id)arg1;
- (void)addInputTexture:(id)arg1;
- (void)render:(int)arg1 pts:(long long)arg2;
- (int)outputWidth;
- (void)setOutputWidth:(int)arg1;
- (int)outputHeight;
- (void)setOutputHeight:(int)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
@end

