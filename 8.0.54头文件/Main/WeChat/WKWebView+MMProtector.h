@interface WKWebView (MMProtector)
+ (void)load;
+ (void)swizzleInitMethodForProtection;
+ (void)swizzleInitWithFrameMethodForProtection;
+ (void)swizzleInitWithCoderMethodForProtection;
@end

