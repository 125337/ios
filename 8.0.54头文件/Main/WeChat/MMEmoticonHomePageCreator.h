@interface MMEmoticonHomePageCreator : NSObject <MMEmoticonLiteAppCreator>
- (id)getQueryStringFor:(id)arg1;
- (id)appid;
- (id)page;
- (void)onGetLiteAppViewController:(id)arg1 context:(id)arg2;
- (BOOL)isLiteAppEnabledFor:(id)arg1;
- (BOOL)allowsFallBackNative;
- (id)getNativeVCFor:(id)arg1;
@end

