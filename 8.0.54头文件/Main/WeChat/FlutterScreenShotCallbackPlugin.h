@interface FlutterScreenShotCallbackPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMethodChannel * _screenShotChannel; // +0x8
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)handleSceenShot;
- (void)onDetachedFromEngine:(id)arg1;
- (void)dealloc;
- (id)screenShotChannel;
- (void)setScreenShotChannel:(id)arg1;
- (void).cxx_destruct;
@end

