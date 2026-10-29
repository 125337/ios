@interface DefaultFileSystem : NSObject <IMBFileSystem>
- (BOOL)access:(id)arg1 error:(id *)arg2;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (id)stat:(id)arg1 recursive:(BOOL)arg2 error:(id *)arg3;
- (BOOL)unlink:(id)arg1 error:(id *)arg2;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (BOOL)writeFile:(id)arg1 data:(id)arg2 isAppend:(BOOL)arg3 error:(id *)arg4;
- (BOOL)mkdir:(id)arg1 recursive:(BOOL)arg2 error:(id *)arg3;
- (BOOL)rmdir:(id)arg1 recursive:(BOOL)arg2 native:(BOOL)arg3 error:(id *)arg4;
- (BOOL)accept:(id)arg1;
- (BOOL)unzip:(id)arg1 targetDirectory:(id)arg2 native:(BOOL)arg3 error:(id *)arg4;
- (BOOL)saveFile:(id)arg1 specifiedPath:(id)arg2 error:(id *)arg3;
@end

