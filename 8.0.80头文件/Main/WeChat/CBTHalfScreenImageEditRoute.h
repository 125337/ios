@interface CBTHalfScreenImageEditRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 imagePaths:(id)arg2 imageMd5:(id)arg3 shortcutsList:(id)arg4 dismissCallback:(id /* block */)arg5;
+ (id)optionsWithImagePath:(id)arg1 imageMd5:(id)arg2 shortcutsList:(id)arg3 srcInfoParams:(id)arg4;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
