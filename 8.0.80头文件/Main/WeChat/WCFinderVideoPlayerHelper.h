@interface WCFinderVideoPlayerHelper : NSObject
+ (void)updatePlayerPreloadInfo:(id)arg1 playerView:(id)arg2;
+ (void)createPlayerViewWithFeedContentVM:(id)arg1 size:(CGSize)arg2 controllerGenerator:(id /* block */)arg3 playerView:(id *)arg4;
+ (void)createPlayerViewWithFeedContentVM:(id)arg1 size:(CGSize)arg2 controller:(id)arg3 playerView:(id *)arg4;
+ (double)CalculateVideoDisplayFrame:(id)arg1 containerSize:(CGSize)arg2 isSubScene:(BOOL)arg3;
+ (id)playerArgTid:(id)arg1;
@end
