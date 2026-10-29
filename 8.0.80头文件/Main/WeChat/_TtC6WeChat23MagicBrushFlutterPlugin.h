@interface _TtC6WeChat23MagicBrushFlutterPlugin : NSObject <MMFlutterPlugin, MagicBrushRequest>
{
     flutterApi; // +0x8
     registry; // +0x10
     textureMap; // +0x18
     weakEngine; // +0x20
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)dispatchTouchEventViewId:(id)arg1 event:(id)arg2 error:(id *)arg3;
- (id)init;
- (void).cxx_destruct;
@end
