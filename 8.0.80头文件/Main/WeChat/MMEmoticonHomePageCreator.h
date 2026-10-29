@interface MMEmoticonHomePageCreator : NSObject <MMEmoticonLiteAppCreator>
- (id)getQueryStringFor:(id)arg1;
- (id)appid;
- (id)page;
- (void)onStartTryGetLiteAppViewControllerForContext:(id)arg1;
- (void)onGetLiteAppViewController:(id)arg1 context:(id)arg2;
- (BOOL)isLiteAppEnabledFor:(id)arg1;
- (BOOL)isForceOriginFor:(id)arg1;
- (BOOL)allowsFallBackNative;
- (BOOL)isNoDelayWhenOpen;
- (id)getNativeVCFor:(id)arg1;
@end
