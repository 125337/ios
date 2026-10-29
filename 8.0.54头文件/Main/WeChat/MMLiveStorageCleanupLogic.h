@interface MMLiveStorageCleanupLogic : NSObject
+ (unsigned long long)evaluateStorageCleanup;
+ (unsigned long long)executeStorageCleanup;
+ (unsigned long long)cleanupStorageWithScenario:(unsigned long long)arg1;
+ (void)markFilesWithPathComponents:(id)arg1 relativeToDirectory:(id)arg2 forDeviationDirectiveType:(unsigned long long)arg3 atLevel:(unsigned long long)arg4 enableVerboseLogging:(BOOL)arg5;
+ (void)markFilesRecursivelyInDirectory:(id)arg1 forDeviationDirectiveType:(unsigned long long)arg2 enableVerboseLogging:(BOOL)arg3;
+ (unsigned long long)cleanupFilesInDirectory:(id)arg1 forScenario:(unsigned long long)arg2 withFileReferences:(id)arg3 enableVerboseLogging:(BOOL)arg4;
@end

