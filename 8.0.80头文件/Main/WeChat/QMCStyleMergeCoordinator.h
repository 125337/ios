@interface QMCStyleMergeCoordinator : NSObject
+ (id)mergeStylesForItems:(id)arg1 craftDataJson:(id)arg2 commonData:(id)arg3 templateKey:(id)arg4;
+ (id)preprocessCommonData:(id)arg1 commonData:(id)arg2 templateKey:(id)arg3;
+ (BOOL)isLayeredStructure:(id)arg1;
+ (id)extractLayeredFields:(id)arg1;
+ (id)extractItemFields:(id)arg1;
+ (BOOL)extractIsSelected:(id)arg1;
+ (BOOL)extractIsSkip:(id)arg1;
+ (id)extractSourceTemplateKey:(id)arg1 currentTemplateKey:(id)arg2;
+ (id)buildResultWithController:(id)arg1 normal:(id)arg2 selected:(id)arg3;
+ (id)mergeStylesForSingleItem:(id)arg1 preprocessed:(id)arg2 templateKey:(id)arg3 craftDataJson:(id)arg4 sourcePreprocessedCache:(id)arg5;
+ (id)getDictionary:(id)arg1;
@end
