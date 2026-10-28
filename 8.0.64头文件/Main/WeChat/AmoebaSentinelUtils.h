@interface AmoebaSentinelUtils : NSObject
+ (id)screenshotOfView:(id)arg1;
+ (id)legacyScreenshotOfView:(id)arg1;
+ (id)captureScreen;
+ (id)captureLongScreenshotOfScrollView:(id)arg1;
+ (id)captureWithoutStatusBarInView:(id)arg1;
+ (void)captureWebView:(id)arg1 completion:(id /* block */)arg2;
+ (id)captureScreenNodeInfos:(id)arg1;
+ (long long)calcNodeCount:(id)arg1;
+ (id)captureViewNodeInfo:(id)arg1 deep:(long long)arg2 pageRect:(CGRect)arg3;
+ (CGRect)getViewExposeRect:(CGRect)arg1 pageRect:(CGRect)arg2;
+ (BOOL)rect:(CGRect)arg1 isInOther:(CGRect)arg2;
+ (id)safelyGetKeyWindow;
+ (id)compressedImage:(id)arg1 quality:(double)arg2;
@end
