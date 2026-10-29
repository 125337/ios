@interface MMFlutterAppForegroundState : NSObject
{
    FlutterBasicMessageChannel * _foregroundStateChannel; // +0x8
}
- (id)initWithMessenger:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void).cxx_destruct;
@end

