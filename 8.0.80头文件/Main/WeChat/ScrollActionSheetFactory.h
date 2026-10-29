@interface ScrollActionSheetFactory : NSObject
+ (id)actionSheetWithConfig:(id)arg1;
+ (id)itemForType:(unsigned long long)arg1;
+ (id)itemForInfo:(id)arg1;
+ (id)infoWithItemType:(long long)arg1;
+ (void)registerInfo:(int)arg1 title:(id)arg2 iconImg:(id)arg3 positon:(int)arg4;
@end
