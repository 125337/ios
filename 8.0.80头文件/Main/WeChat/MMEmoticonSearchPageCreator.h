@interface MMEmoticonSearchPageCreator : NSObject <MMEmoticonLiteAppCreator>
- (id)getQueryStringFor:(id)arg1;
- (id)appid;
- (id)page;
- (id)pageForContext:(id)arg1;
- (id)getNativeVCFor:(id)arg1;
- (BOOL)isForceOriginFor:(id)arg1;
- (BOOL)isLiteAppEnabledFor:(id)arg1;
- (void)onGetLiteAppViewController:(id)arg1 context:(id)arg2;
- (BOOL)useHalfScreen;
@end
