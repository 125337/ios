@interface LyricHelper : NSObject
+ (long long)calStartLineNum:(id)arg1 fromTime:(long long)arg2;
+ (long long)calEndLineNum:(id)arg1 fromTime:(long long)arg2;
+ (BOOL)isIndexInRange:(id)arg1 index:(long long)arg2;
+ (id)getObjectInArray:(id)arg1 byIndex:(unsigned long long)arg2 ofClassType:(Class)arg3 defaultValue:(id)arg4;
+ (id)safeCastObject:(id)arg1 toClass:(Class)arg2;
+ (id)safeSubstring:(id)arg1 toIndex:(unsigned long long)arg2;
+ (id)safeSubstring:(id)arg1 fromIndex:(unsigned long long)arg2;
+ (id)safeSubstring:(id)arg1 withRange:(_NSRange)arg2;
@end

