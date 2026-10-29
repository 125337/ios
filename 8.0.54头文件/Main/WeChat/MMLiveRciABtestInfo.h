@interface MMLiveRciABtestInfo : NSObject
{
    BOOL _enableRci; // +0x8
    BOOL _allowCompressedForRenderingYUV; // +0x9
    BOOL _allowCompressedForSrc; // +0xa
    long long _effectFallbackFlags; // +0x10
}
+ (id)sharedInstance;
- (void)loadInfo;
- (BOOL)enableRci;
- (void)setEnableRci:(BOOL)arg1;
- (BOOL)allowCompressedForRenderingYUV;
- (void)setAllowCompressedForRenderingYUV:(BOOL)arg1;
- (BOOL)allowCompressedForSrc;
- (void)setAllowCompressedForSrc:(BOOL)arg1;
- (long long)effectFallbackFlags;
- (void)setEffectFallbackFlags:(long long)arg1;
@end

