@interface MMEmoticonBrowsePageCreator : NSObject <MMEmoticonLiteAppCreator>
- (id)getQueryStringFor:(id)arg1;
- (id)appid;
- (id)page;
- (BOOL)isLiteAppEnabledFor:(id)arg1;
- (void)onGetLiteAppViewController:(id)arg1 context:(id)arg2;
- (void)onStartTryGetLiteAppViewControllerForContext:(id)arg1;
- (void)onGetLiteAppViewControllerFailedForContext:(id)arg1;
- (BOOL)allowsFallBackNative;
- (id)getNativeVCFor:(id)arg1;
@end
