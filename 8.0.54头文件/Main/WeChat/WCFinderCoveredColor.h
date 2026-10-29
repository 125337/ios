@interface WCFinderCoveredColor : NSProxy
{
    BOOL _displayBlurWhenCovered; // +0x8
    BOOL _displayCoveredStyle; // +0x9
    UIColor * _normalColor; // +0x10
    UIColor * _coveredColor; // +0x18
}
+ (id)colorWithNormal:(id)arg1 coveredColor:(id)arg2;
+ (id)colorWithNormal:(id)arg1 coveredBlurColor:(id)arg2;
+ (id)colorWithNormal:(id)arg1;
+ (BOOL)isDynamicCoveredColor:(id)arg1;
- (id)resolvedColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (CGColor *)CGColor;
- (BOOL)isEqual:(id)arg1;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (id)coveredColor;
- (void)setCoveredColor:(id)arg1;
- (BOOL)displayBlurWhenCovered;
- (void)setDisplayBlurWhenCovered:(BOOL)arg1;
- (BOOL)displayCoveredStyle;
- (void)setDisplayCoveredStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end

