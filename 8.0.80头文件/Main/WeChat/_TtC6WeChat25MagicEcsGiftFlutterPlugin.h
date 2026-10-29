@interface _TtC6WeChat25MagicEcsGiftFlutterPlugin : NSObject <MMFlutterPlugin, EcsMagicBizHostApi, IMBExternalViewDelegate>
{
     mbPlugin; // +0x8
     viewid; // +0x10
     viewGroupId; // +0x20
     biz; // +0x30
     flutterApi; // +0x38
     weakEngine; // +0x40
}
- (void)onCanvasViewCreated:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewLayout:(unsigned int)arg1 view:(id)arg2 left:(float)arg3 top:(float)arg4 width:(float)arg5 height:(float)arg6;
- (void)onCanvasViewDestroy:(unsigned int)arg1 view:(id)arg2;
- (void)onCanvasViewFirstFrameRendered:(unsigned int)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)invokeBizName:(id)arg1 apiName:(id)arg2 data:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void).cxx_destruct;
@end
