@interface TextStateIconHelper : NSObject
+ (id)parseFromI18nList:(id)arg1;
+ (id)exportI18nListFromDict:(id)arg1;
+ (id)typeNumberFromConfigId:(id)arg1;
+ (id)getStoragePathForType:(unsigned int)arg1;
+ (void)encodeAndSaveIconStorage:(id)arg1 type:(unsigned int)arg2;
+ (id)decodeAndLoadIconStorageForType:(unsigned int)arg1;
+ (id)getFlutterStorageDirPath;
+ (id)getFlutterMainIconConfigPath;
+ (id)getFlutterPanelIconConfigPath;
+ (id)getFlutterPassthroughIconListPath;
+ (id)getFlutterExperimentTablePath;
+ (id)getPassthroughIconListPath;
+ (void)encodeAndSavePassthroughIconList:(id)arg1;
+ (id)decodeAndLoadPassthroughIconList;
+ (id)getExperimentTablePath;
+ (void)encodeAndSaveExperimentTable:(id)arg1;
+ (id)decodeAndLoadExperimentTable;
+ (void)setIcon:(id)arg1 toWebImageView:(id)arg2;
+ (void)setIcon:(id)arg1 toWebImageView:(id)arg2 isBig:(BOOL)arg3;
+ (void)setIcon:(id)arg1 toWebImageView:(id)arg2 isBig:(BOOL)arg3 alwaysTemplate:(BOOL)arg4;
+ (void)setIcon:(id)arg1 toWebImageView:(id)arg2 isBig:(BOOL)arg3 alwaysTemplate:(BOOL)arg4 error:(id *)arg5;
+ (id)cachedEmojiImageForIconId:(id)arg1 size:(CGSize)arg2;
+ (void)cacheEmojiImage:(id)arg1 forIconId:(id)arg2 size:(CGSize)arg3;
+ (id)sharedIconRenderingQueue;
+ (id)sharedIconRecursiveLock;
+ (id)copyFileWithPrefix:(id)arg1 toPath:(id)arg2;
@end
