@interface MinimizeTaskUtil : MMObject
+ (unsigned int)bussinessTypeForBizName:(id)arg1;
+ (id)bussinessTypeToBizName:(unsigned int)arg1;
+ (unsigned int)getTaskBizTypeInTaskData:(id)arg1;
+ (id)notiDelegateClassNameForBizName:(unsigned int)arg1;
+ (BOOL)isOpenStarSwitch;
+ (BOOL)isOpenMultiContentSwitch;
+ (BOOL)isArrangeMultiContentEntry;
+ (unsigned long long)multiContentTaskMaxCount;
+ (id)starFilledIconSvgName;
+ (id)starOutlinedIconSvgName;
+ (id)starOutlinedIconImageWithColor:(id)arg1 size:(CGSize)arg2;
+ (id)genActionSheetItemImage;
@end
