@interface MMLiveRciABtestInfo : NSObject
{
    BOOL _enableRciAnchor; // +0x8
    BOOL _enableRciAudience; // +0x9
    BOOL _allowCompressedForRenderingYUV; // +0xa
    BOOL _allowCompressedForSrc; // +0xb
    long long _effectFallbackFlags; // +0x10
}
+ (id)sharedInstance;
- (void)loadInfo;
- (BOOL)enableRciAnchor;
- (void)setEnableRciAnchor:(BOOL)arg1;
- (BOOL)enableRciAudience;
- (void)setEnableRciAudience:(BOOL)arg1;
- (BOOL)allowCompressedForRenderingYUV;
- (void)setAllowCompressedForRenderingYUV:(BOOL)arg1;
- (BOOL)allowCompressedForSrc;
- (void)setAllowCompressedForSrc:(BOOL)arg1;
- (long long)effectFallbackFlags;
- (void)setEffectFallbackFlags:(long long)arg1;
@end
