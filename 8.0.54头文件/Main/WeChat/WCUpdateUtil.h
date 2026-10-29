@interface WCUpdateUtil : NSObject
+ (id)getDirOfUpdate;
+ (id)getUpdateDataZipFilePath;
+ (id)getUpdateDataZipFilePathWithCustomVersion:(id)arg1;
+ (id)getUpdateDataDirPath;
+ (id)getTmpUpdateDataDirPath;
+ (id)getUpdateResDirPath;
+ (id)getUpdatePluginDirPath;
+ (id)getUpdateFlutterDirPath;
+ (id)getConfigFilePathForBundle:(id)arg1;
+ (id)getUpdatePluginInBundleDirPath;
+ (id)getUpdateDataInBundleDirPath;
+ (BOOL)canExitOnEnteringBackground;
+ (id)formatUUID:(id)arg1;
+ (id)_getNativeUUIDs;
+ (id)getNativeUUIDs;
+ (id)getMatchedInfoForBundle:(id)arg1 checkClientVersion:(BOOL)arg2;
+ (BOOL)isInfoMatchNative:(id)arg1;
+ (BOOL)unzipFile:(id)arg1 toDir:(id)arg2;
+ (id)getDirOfUpdateTmp;
+ (BOOL)deobfAndUnzipFile:(id)arg1 to:(id)arg2;
- (unsigned long long)preserveStuff;
@end

