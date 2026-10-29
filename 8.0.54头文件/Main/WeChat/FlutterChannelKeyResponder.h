@interface FlutterChannelKeyResponder : NSObject <FlutterKeyPrimaryResponder>
{
    FlutterBasicMessageChannel * _channel; // +0x8
    long long _pressedModifiers; // +0x10
}
- (id)initWithChannel:(id)arg1;
- (void)handlePress:(id)arg1 callback:(id /* block */)arg2;
- (void)updatePressedModifiers:(id)arg1;
- (long long)adjustModifiers:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (long long)pressedModifiers;
- (void)setPressedModifiers:(long long)arg1;
@end

