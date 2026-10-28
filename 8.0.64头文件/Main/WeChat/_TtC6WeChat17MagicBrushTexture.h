@interface _TtC6WeChat17MagicBrushTexture : NSObject <FlutterTexture, IMBExternalTextureDelegate>
{
     registry; // +0x8
     view; // +0x10
     $__lazy_storage_$_textureId; // +0x18
     logger; // +0x28
     forceMaxFps; // +0x30
     workItem; // +0x38
     needSendTextureAvailable; // +0x40
     danger_control; // +0x48
}
- (__CVBuffer *)copyPixelBuffer;
- (BOOL)setFlutterCanvasMaxFps:(BOOL)arg1 duration:(int)arg2;
- (id)init;
- (void).cxx_destruct;
@end
