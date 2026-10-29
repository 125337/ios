@interface WCColorProxy : NSObject
{
    long long _userInterfaceStyle; // +0x8
    NSString * _brandColorReplacement; // +0x10
    UIColor * _brandColor; // +0x18
}
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
- (id)forwardingRealColor;
- (id)forwardingBrandColor;
- (id)colorInCurrentUserInterfaceStyle:(id)arg1;
- (long long)userInterfaceStyle;
- (void)setUserInterfaceStyle:(long long)arg1;
- (id)brandColorReplacement;
- (void)setBrandColorReplacement:(id)arg1;
- (id)brandColor;
- (void)setBrandColor:(id)arg1;
- (void).cxx_destruct;
@end

