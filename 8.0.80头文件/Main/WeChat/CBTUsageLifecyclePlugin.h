@interface CBTUsageLifecyclePlugin : NSObject <MMFlutterPlugin>
{
    FlutterBasicMessageChannel * _applicationChannel; // +0x8
    FlutterBasicMessageChannel * _hostChannel; // +0x10
    NSString * _lastApplicationEvent; // +0x18
    NSString * _lastHostEvent; // +0x20
    unsigned long long _applicationSequence; // +0x28
    unsigned long long _hostSequence; // +0x30
}
+ (id)pluginForInstance:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)applicationBackground:(id)arg1;
- (void)applicationForeground:(id)arg1;
- (void)sendForeground:(BOOL)arg1;
- (void)sendHostState:(id)arg1;
- (void)sendHostState:(id)arg1 anchor:(unsigned long long)arg2 anchorTime:(long long)arg3;
- (id /* block */)captureHostExitConfirmation;
- (void)onDetachedFromEngine:(id)arg1;
- (void)dealloc;
- (id)applicationChannel;
- (void)setApplicationChannel:(id)arg1;
- (id)hostChannel;
- (void)setHostChannel:(id)arg1;
- (id)lastApplicationEvent;
- (void)setLastApplicationEvent:(id)arg1;
- (id)lastHostEvent;
- (void)setLastHostEvent:(id)arg1;
- (unsigned long long)applicationSequence;
- (void)setApplicationSequence:(unsigned long long)arg1;
- (unsigned long long)hostSequence;
- (void)setHostSequence:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
