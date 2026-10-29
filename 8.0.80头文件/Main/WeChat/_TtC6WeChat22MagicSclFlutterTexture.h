@interface _TtC6WeChat22MagicSclFlutterTexture : NSObject <FlutterTexture>
{
     registry; // +0x8
     textureId; // +0x10
     bufferLock; // +0x18
     latestPixelBuffer; // +0x20
     isDestroyed; // +0x28
     pushedFrameCount; // +0x30
     logger; // +0x38
}
- (void)pushPixelBuffer:(__CVBuffer *)arg1;
- (__CVBuffer *)copyPixelBuffer;
- (void)destroy;
- (id)init;
- (void).cxx_destruct;
@end
