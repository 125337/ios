@interface WCLabsStorage : NSObject
+ (id)getLabsAppItemDicPath;
+ (BOOL)saveLabsAppItemDic:(id)arg1;
+ (id)loadLabsAppItemDic;
+ (id)getLabsCommonInfoPath;
+ (BOOL)saveLabsCommonInfo:(id)arg1;
+ (id)loadLabsCommonInfo;
+ (id)getRedDotFromClientIdListPath;
+ (BOOL)saveRedDotFromClientIdList:(id)arg1;
+ (id)loadRedDotFromClientIdList;
+ (id)getClearedRedDotLabsAppidAryPath;
+ (BOOL)saveClearedRedDotLabsAppidAry:(id)arg1;
+ (id)loadClearedRedDotLabsAppidAry;
+ (id)getClearedRedDotLabsAppidAryPathInAppEntracnce;
+ (BOOL)saveClearedRedDotLabsAppidAryInAppEntracnce:(id)arg1;
+ (id)loadClearedRedDotLabsAppidAryInAppEntracnce;
@end
