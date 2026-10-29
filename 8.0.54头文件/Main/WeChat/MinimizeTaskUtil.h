@interface MinimizeTaskUtil : MMObject
+ (unsigned int)bussinessTypeForBizName:(id)arg1;
+ (id)bussinessTypeToBizName:(unsigned int)arg1;
+ (unsigned int)getTaskBizTypeInTaskData:(id)arg1;
+ (id)notiDelegateClassNameForBizName:(unsigned int)arg1;
+ (BOOL)isOpenStarSwitch;
+ (id)starFilledIconSvgName;
+ (id)starOutlinedIconSvgName;
+ (id)genActionSheetItemImage;
@end

