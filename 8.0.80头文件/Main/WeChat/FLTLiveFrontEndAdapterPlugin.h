@interface FLTLiveFrontEndAdapterPlugin : NSObject <MMFlutterPlugin, LiveFrontEndAdapterApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)isFakeNativeMiniAppAppID:(id)arg1 completion:(id /* block */)arg2;
- (void)openMiniAppAppID:(id)arg1 path:(id)arg2 scene:(long long)arg3 sceneNote:(id)arg4 pageType:(unsigned long long)arg5 animationType:(id)arg6 enableTapExpand:(BOOL)arg7 enableDragExpand:(BOOL)arg8 nativeExtra:(id)arg9 error:(id *)arg10;
- (void)openAddToCartMiniAppAppID:(id)arg1 path:(id)arg2 scene:(long long)arg3 pageType:(unsigned long long)arg4 animationType:(id)arg5 enableTapExpand:(BOOL)arg6 enableDragExpand:(BOOL)arg7 nativeExtra:(id)arg8 completion:(id /* block */)arg9;
- (id)p_buildOpenParameterWithAppID:(id)arg1 path:(id)arg2 scene:(long long)arg3 sceneNote:(id)arg4 pageType:(unsigned long long)arg5 animationType:(id)arg6 enableTapExpand:(BOOL)arg7 enableDragExpand:(BOOL)arg8 nativeExtra:(id)arg9;
@end
