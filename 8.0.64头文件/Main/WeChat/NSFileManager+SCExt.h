@interface NSFileManager (SCExt)
- (BOOL)sc_copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)sc_copyItemAtPath:(id)arg1 toPath:(id)arg2 overwrite:(BOOL)arg3 error:(id *)arg4;
- (BOOL)sc_moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)sc_moveItemAtPath:(id)arg1 toPath:(id)arg2 overwrite:(BOOL)arg3 error:(id *)arg4;
- (BOOL)sc_linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (BOOL)sc_linkItemAtPath:(id)arg1 toPath:(id)arg2 overwrite:(BOOL)arg3 error:(id *)arg4;
- (BOOL)sc_performFileOperation:(unsigned long long)arg1 forItemAtPath:(id)arg2 toPath:(id)arg3 overwrite:(BOOL)arg4 error:(id *)arg5;
@end
