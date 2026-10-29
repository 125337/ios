@interface JSC2Hook : NSObject
+ (BOOL)removeICUIfNeeded;
+ (id)getICUDataPath:(unsigned int *)arg1;
+ (void)setICUDataPath:(id)arg1;
+ (BOOL)checkICUData;
+ (BOOL)isNormal;
+ (BOOL)setupICU;
+ (id)checkSubclasses;
+ (id)checkCategories;
+ (id)checkGlobalVariables;
@end
