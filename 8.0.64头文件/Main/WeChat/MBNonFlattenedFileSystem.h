@interface MBNonFlattenedFileSystem : DefaultFileSystem
{
    NSString * mBizName; // +0x8
    NSString * mPathPrefix; // +0x10
}
- (id)initWithPkgPath:(id)arg1 prefix:(id)arg2;
- (void)dealloc;
- (BOOL)access:(id)arg1 error:(id *)arg2;
- (BOOL)mkdir:(id)arg1 recursive:(BOOL)arg2 error:(id *)arg3;
- (BOOL)rmdir:(id)arg1 recursive:(BOOL)arg2 native:(BOOL)arg3 error:(id *)arg4;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (id)stat:(id)arg1 recursive:(BOOL)arg2 error:(id *)arg3;
- (BOOL)unlink:(id)arg1 error:(id *)arg2;
- (BOOL)unzip:(id)arg1 targetDirectory:(id)arg2 native:(BOOL)arg3 error:(id *)arg4;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (BOOL)writeFile:(id)arg1 data:(id)arg2 isAppend:(BOOL)arg3 error:(id *)arg4;
- (BOOL)saveFile:(id)arg1 specifiedPath:(id)arg2 error:(id *)arg3;
- (BOOL)accept:(id)arg1;
- (id)traversePath:(id)arg1;
- (void).cxx_destruct;
@end
