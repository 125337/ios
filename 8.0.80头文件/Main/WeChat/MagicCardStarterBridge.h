@interface MagicCardStarterBridge : NSObject
+ (unsigned long long)acquireBizWithParams:(id)arg1;
+ (void)activateBiz:(unsigned long long)arg1;
+ (void)deactivateBiz:(unsigned long long)arg1;
+ (void)pauseBiz:(unsigned long long)arg1;
+ (void)resumeBiz:(unsigned long long)arg1;
+ (id)bindFrameSetViewWithBizId:(unsigned long long)arg1 bizName:(id)arg2 path:(id)arg3 query:(id)arg4 containerView:(id)arg5 frameSetName:(id)arg6 frameSetData:(id)arg7 callback:(id /* block */)arg8;
+ (void)removeFrameSetViewWithBizId:(unsigned long long)arg1 path:(id)arg2 query:(id)arg3 frameSetName:(id)arg4;
+ (void)removeAllFrameSetViewWithBizId:(unsigned long long)arg1 path:(id)arg2 query:(id)arg3;
+ (void)sendEvent:(unsigned long long)arg1 name:(id)arg2 data:(id)arg3;
+ (void)initializeAdframeworkWithSclPublicServiceWspkgPath:(id)arg1;
+ (void)notifyAppForegroundState:(BOOL)arg1;
+ (void)updateFrameSetWithBizId:(unsigned long long)arg1 frameSetId:(id)arg2 width:(int)arg3 height:(int)arg4;
@end
