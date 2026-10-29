@interface MMNexusPresenter : NSObject
+ (id)resolvePageContextForPageId:(id)arg1;
+ (void)bindHostToWebVC:(id)arg1 context:(id)arg2;
+ (void)load;
+ (id)presentPageId:(id)arg1 mode:(unsigned long long)arg2 nav:(id)arg3 config:(id /* block */)arg4;
+ (id)presentPageId:(id)arg1 mode:(unsigned long long)arg2 fromVC:(id)arg3 config:(id /* block */)arg4;
+ (void)warmupPageId:(id)arg1;
+ (void)prefetchPageId:(id)arg1;
+ (void)prefetchPageIds:(id)arg1;
+ (void)purgePreloadPool;
+ (BOOL)_isInstanceAlive:(id)arg1;
+ (id)_duplicateSentinel;
+ (id)_presentWithMeta:(id)arg1 config:(id)arg2 mode:(unsigned long long)arg3 nav:(id)arg4 localPath:(id)arg5;
@end
