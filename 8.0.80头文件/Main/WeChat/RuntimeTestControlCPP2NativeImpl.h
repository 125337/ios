@interface RuntimeTestControlCPP2NativeImpl : NSObject <RuntimeTestControlCPP2NativeCallerBase>
{
    RuntimeTestControlCPP2NativeCallerCallback * _callback; // +0x8
}
+ (id)sharedInstance;
- (void)setCallback:(id)arg1;
- (void)openLeftPanelAsync:(unsigned long long)arg1;
- (id)callback;
- (void).cxx_destruct;
@end
