@interface MatrixPathUtil : NSObject
+ (id)matrixCacheRootPath;
+ (id)crashBlockPluginCachePath;
+ (id)appRebootAnalyzerCachePath;
+ (id)memoryStatPluginCachePath;
+ (void)autoCleanDiretory:(id)arg1 withTimeout:(double)arg2;
+ (long long)latestTimeWithCurTime:(long long)arg1 accessTime:(long long)arg2 modifyTime:(long long)arg3 changeTime:(long long)arg4 birthTime:(long long)arg5;
+ (void)setMatrixCacheRootPath:(id)arg1;
+ (unsigned long long)fileSizeAtPath:(id)arg1;
+ (unsigned long long)folderSizeAtPath:(id)arg1;
@end
