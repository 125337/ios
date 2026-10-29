@interface TextStateRouteHelper : NSObject
+ (id)showPublishWithSourceInfo:(id)arg1 delegate:(id)arg2 viewController:(id)arg3;
+ (id)showPublishWithSourceInfo:(id)arg1 delegate:(id)arg2 viewController:(id)arg3 forceFullScreen:(BOOL)arg4;
+ (id)showPublishWithSourceInfo:(id)arg1 scene:(unsigned int)arg2 configuration:(id)arg3 attachInfo:(id)arg4 delegate:(id)arg5 viewController:(id)arg6 forceFullScreen:(BOOL)arg7;
+ (void)followTextStateFromContact:(id)arg1 viewController:(id)arg2;
+ (void)directPublishNoMediaTextStateWithSourceInfo:(id)arg1;
+ (void)directPublishNoMediaTextStateWithSourceInfo:(id)arg1 mediaItem:(id)arg2;
+ (void)navigateToPOI:(id)arg1 currentViewController:(id)arg2;
@end

