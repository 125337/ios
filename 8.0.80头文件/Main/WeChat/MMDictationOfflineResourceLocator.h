@interface MMDictationOfflineResourceLocator : NSObject
+ (id)resourceRootPath;
+ (id)resourceRootURL;
+ (id)_findSubdirInRootURL:(id)arg1 prefix:(id)arg2 requireUnique:(BOOL)arg3;
+ (id)_findSubdirInResourceRootWithPrefix:(id)arg1;
+ (id)asrEnvURL;
+ (id)vadResURL;
+ (id)vadConfigOnlineURL;
+ (id)vadModelURL;
+ (id)vadCmsURL;
+ (id)postProcessEnvURL;
+ (BOOL)_dirExists:(id)arg1;
+ (BOOL)_fileExists:(id)arg1;
+ (BOOL)_nonEmptyFileExists:(id)arg1;
+ (BOOL)_directoryContainsNonEmptyFile:(id)arg1;
+ (BOOL)asrResourcesAvailable;
+ (BOOL)vadResourcesAvailable;
+ (BOOL)postProcessResourcesAvailable;
+ (BOOL)resourcePackageAvailableAtRootURL:(id)arg1;
+ (BOOL)resourcesAvailable;
@end
