@interface VoIPMPSystemAuthNativeImpl : NSObject <VoIPMPSystemAuthNativeAPIBase>
{
    VoIPMPSystemAuthNativeAPICallback * _callback; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setCallback:(id)arg1;
- (void)requestMicrophoneAsync:(unsigned long long)arg1;
- (void)requestCameraAsync:(unsigned long long)arg1;
- (void)requestAsync:(unsigned long long)arg1 type:(int)arg2;
- (id)callback;
- (void).cxx_destruct;
@end
