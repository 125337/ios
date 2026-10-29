@interface MMLivePageVisitStat : NSObject
+ (void)reportSheetShowObject:(id)arg1;
+ (void)reportPushViewController:(id)arg1;
+ (void)reportPresentViewController:(id)arg1;
+ (void)reportNexusPageShow:(id)arg1;
+ (BOOL)isLiveRelatedClassName:(id)arg1;
+ (BOOL)isExcludedClassName:(id)arg1;
+ (BOOL)isLiveRoomViewController:(id)arg1;
+ (void)reportPageVisitWithPageKey:(id)arg1;
+ (BOOL)dedupWithPageKey:(id)arg1;
@end
