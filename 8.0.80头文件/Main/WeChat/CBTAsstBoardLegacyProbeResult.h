@interface CBTAsstBoardLegacyProbeResult : NSObject
{
    long long _renderStrategy; // +0x8
    NSString * _nativeFamily; // +0x10
    NSString * _probePath; // +0x18
    NSString * _reason; // +0x20
}
+ (id)resultWithStrategy:(long long)arg1 nativeFamily:(id)arg2 probePath:(id)arg3 reason:(id)arg4;
- (long long)renderStrategy;
- (void)setRenderStrategy:(long long)arg1;
- (id)nativeFamily;
- (void)setNativeFamily:(id)arg1;
- (id)probePath;
- (void)setProbePath:(id)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (void).cxx_destruct;
@end
