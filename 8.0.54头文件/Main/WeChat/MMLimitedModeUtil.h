@interface MMLimitedModeUtil : NSObject
+ (id)descForLevel:(long long)arg1 bizType:(long long)arg2;
+ (id)titleForBizType:(long long)arg1;
+ (id)imageForBizType:(long long)arg1 iconSize:(CGSize)arg2;
+ (id)extraDescForLevel:(long long)arg1 bizType:(long long)arg2;
+ (id)subTitleForBizType:(long long)arg1 bizType:(long long)arg2;
+ (id)getTitleFromXlabOption:(id)arg1;
+ (void)removeTargeIndexViewContrller:(id)arg1 viewContrllerIndex:(long long)arg2;
+ (void)popToSettingPageFrom:(id)arg1;
+ (id)limitedModeTitle;
+ (void)showLimitedModeTip:(id)arg1;
+ (BOOL)EnableFindPasswordOptimize;
@end

