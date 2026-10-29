@interface WCFinderAuthorCreatorHelper : NSObject
+ (BOOL)useLiteAppCreatorWithUsername:(id)arg1;
+ (void)preloadLiteAppCreatorWithUsername:(id)arg1 queryArray:(id)arg2;
+ (id)creatorCenterQueryArray:(id)arg1;
+ (void)showCreatorLiteAppWithUsername:(id)arg1 queryArray:(id)arg2 fromVC:(id)arg3;
+ (id)urlByReplacingDuplicateQueryParamsInURL:(id)arg1 withParams:(id)arg2;
@end
