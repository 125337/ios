@interface _TtC6WeChat25MagicSclBaseFlutterPlugin : NSObject <MMFlutterPlugin, MagicBrushFlutterDelegate>
{
    void * bizName; // +0x8
    void * instanceKey; // +0x18
    void * instanceId; // +0x28
     jsApiList; // +0x38
     jsApiGroups; // +0x40
     weakEngine; // +0x48
     registry; // +0x50
     stateLock; // +0x58
     bizContext; // +0x60
     textureMap; // +0x68
}
- (id)bizName;
- (id)instanceKey;
- (id)instanceId;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)sendJsEventWithName:(id)arg1 data:(id)arg2;
- (id)createExternalTextureWithCanvasId:(unsigned long long)arg1;
- (void)destroyExternalTextureWithCanvasId:(unsigned long long)arg1;
- (id)init;
- (void).cxx_destruct;
@end
