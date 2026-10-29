@interface MMLiteAppPlatformViewPlugin : NSObject <FlutterPlugin>
{
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x8
}
+ (void)registerWithRegistrar:(id)arg1;
- (void)instanceRegisterWithRegistrar:(id)arg1;
- (id)messenger;
- (void)setMessenger:(id)arg1;
- (void).cxx_destruct;
@end

