@interface WCSearchGroupTrainModel : NSObject
+ (void)initialize;
+ (void)ResetDownloadedModel:(id)arg1;
+ (void)ResetGlobalConfig;
+ (BOOL)HasDownloadMainModel;
+ (BOOL)HasDownloadSubModel;
+ (id)DownloadDir;
+ (id)DownloadMainModelPath;
+ (id)DownloadSubModelPath;
+ (id)DefaultMainModelPath;
+ (unsigned int)GetVersion;
+ (id)GetModelPathWithSource:(unsigned int *)arg1;
+ (unsigned int)GetVersion:(unsigned int)arg1;
+ (void)InitModelConfig;
+ (void)loadModel;
+ (void)forceLoadDefaultModelIfNeeded;
+ (double)safeGetFValue:(id)arg1;
- (BOOL)isModelFail;
- (double)scoreByExtMode:(BOOL)arg1 outLeafNodeKeys:(id)arg2 features:(id)arg3;
- (id)getMaxSearchGroupFeature;
@end
