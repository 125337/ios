@interface WCFinderHeadImageHelper : NSObject
+ (id)getSizeFormat;
+ (unsigned long long)sizeModeWithSizeStr:(id)arg1;
+ (id)getTargetSizeStr:(unsigned long long)arg1;
+ (id)getMultiresolutionFromURLString:(id)arg1 targetSize:(unsigned long long)arg2;
+ (BOOL)isPureNum:(id)arg1;
@end

