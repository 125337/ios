@interface MBFlattenedFileSystem : MBNonFlattenedFileSystem
- (void)dealloc;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (BOOL)unlink:(id)arg1 error:(id *)arg2;
- (BOOL)unzip:(id)arg1 targetDirectory:(id)arg2 native:(BOOL)arg3 error:(id *)arg4;
- (BOOL)writeFile:(id)arg1 data:(id)arg2 isAppend:(BOOL)arg3 error:(id *)arg4;
- (BOOL)saveFile:(id)arg1 specifiedPath:(id)arg2 error:(id *)arg3;
- (BOOL)copyFile:(id)arg1 destPath:(id)arg2 error:(id *)arg3;
- (BOOL)accept:(id)arg1;
- (id)readHomeDir:(id)arg1;
- (void)readFilesOfDirectoryAtPath:(id)arg1 localIDPrefix:(id)arg2 array:(id)arg3;
@end
