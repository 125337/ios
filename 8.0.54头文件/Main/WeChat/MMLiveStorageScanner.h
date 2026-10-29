@interface MMLiveStorageScanner : NSObject
+ (id)scanPaths:(id)arg1 enableVerboseLogging:(BOOL)arg2;
+ (struct)scanWithPathComponents:(id)arg1 relativeToDirectory:(id)arg2 withSharedFileReferences:(id)arg3 atLevel:(unsigned long long)arg4 enableVerboseLogging:(BOOL)arg5;
+ (id)findOrCreateSubdirectoryInDirectory:(id)arg1 withName:(id)arg2 enableVerboseLogging:(BOOL)arg3;
+ (struct)scanSubdirectory:(id)arg1 inDirectory:(id)arg2 withSharedFileReferences:(id)arg3 enableVerboseLogging:(BOOL)arg4;
+ (struct)scanFile:(id)arg1 inDirectory:(id)arg2 withSharedFileReferences:(id)arg3 enableVerboseLogging:(BOOL)arg4;
@end

