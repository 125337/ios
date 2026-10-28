@interface FLTLiveFrontEndAdapterPlugin : NSObject <MMFlutterPlugin, LiveFrontEndAdapterApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)openMiniAppAppID:(id)arg1 path:(id)arg2 pageType:(unsigned long long)arg3 animationType:(id)arg4 enableTapExpand:(BOOL)arg5 enableDragExpand:(BOOL)arg6 nativeExtra:(id)arg7 error:(id *)arg8;
@end
