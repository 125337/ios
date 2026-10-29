@interface WCMaterialClassifyHelper : NSObject
+ (void)asyncCalculateClassifyLabelsWithVideos:(id)arg1 images:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)asyncCalculateClassifyLabelsForFinderWithVideos:(id)arg1 images:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)_asyncCalculateClassifyLabelsWithVideos:(id)arg1 images:(id)arg2 scene:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
+ (BOOL)isBGMFeatureModelWithName:(id)arg1;
+ (void)asyncCalculateClassifyLabelsWithImages:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)syncCalculateClassifyLabelsWithImage:(id)arg1;
+ (id)modelKeysForClassifierWithScene:(unsigned long long)arg1;
@end

