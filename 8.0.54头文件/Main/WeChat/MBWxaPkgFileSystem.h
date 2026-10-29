@interface MBWxaPkgFileSystem : DefaultFileSystem
{
    MBWxaPkgCacheMgr * pkgInfoCacheMgr; // +0x8
    NSString * _mBizName; // +0x10
    NSString * _mPath; // +0x18
    NSString * _mPrefix; // +0x20
    NSString * _mKey; // +0x28
}
- (id)initWithPkgPath:(id)arg1 bizName:(id)arg2 prefix:(id)arg3;
- (void)dealloc;
- (BOOL)loadPkg:(id)arg1;
- (BOOL)access:(id)arg1 error:(id *)arg2;
- (id)readDir:(id)arg1 error:(id *)arg2;
- (id)stat:(id)arg1 recursive:(BOOL)arg2 error:(id *)arg3;
- (BOOL)unlink:(id)arg1 error:(id *)arg2;
- (id)readFile:(id)arg1 position:(long long)arg2 length:(long long)arg3 error:(id *)arg4;
- (BOOL)writeFile:(id)arg1 data:(id)arg2 isAppend:(BOOL)arg3 error:(id *)arg4;
- (BOOL)accept:(id)arg1;
- (id)traversePath:(id)arg1;
- (id)mBizName;
- (void)setMBizName:(id)arg1;
- (id)mPath;
- (void)setMPath:(id)arg1;
- (id)mPrefix;
- (void)setMPrefix:(id)arg1;
- (id)mKey;
- (void)setMKey:(id)arg1;
- (void).cxx_destruct;
@end

