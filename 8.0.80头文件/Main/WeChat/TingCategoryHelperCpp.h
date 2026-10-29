@interface TingCategoryHelperCpp : NSObject
+ (BOOL)isAudioCollection:(id)arg1;
+ (BOOL)canAutoPlayRecommendList:(id)arg1;
+ (BOOL)isDailyRecoemmndList:(id)arg1;
+ (BOOL)hasDetailPage:(id)arg1;
+ (BOOL)isMsgCardForwardDisabled:(id)arg1;
+ (void)requestCategoryItemWithErrCode:(id)arg1 ctxRecommendInfo:(id)arg2 options:(id)arg3 callback:(id /* block */)arg4;
+ (void)requestSubscribeCategoryItem:(id)arg1 isCancel:(BOOL)arg2 callback:(id /* block */)arg3;
+ (id)categoryItemFromSubCategory:(id)arg1;
+ (BOOL)isSupportCategoryType:(int)arg1;
+ (BOOL)isLandingSupportCategoryType:(int)arg1;
+ (BOOL)isAllowForward:(int)arg1;
+ (void)setDebugCategoryUnsupported:(BOOL)arg1;
+ (BOOL)isDebugCategoryUnsupported;
@end
