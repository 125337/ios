@interface MMKVNameSpace : NSObject
{
    NSString * _rootPath; // +0x8
    void * m_rootPath; // +0x10
}
- (id)initWith:(id)arg1;
- (void)dealloc;
- (id)rootPath;
- (void *)strRootPath;
- (id)mmkvWithID:(id)arg1;
- (id)mmkvWithID:(id)arg1 config:(struct)arg2;
- (id)mmkvWithID:(id)arg1 cryptKey:(id)arg2;
- (id)mmkvWithID:(id)arg1 cryptKey:(id)arg2 aes256:(BOOL)arg3;
- (id)mmkvWithID:(id)arg1 mode:(unsigned long long)arg2;
- (id)mmkvWithID:(id)arg1 cryptKey:(id)arg2 mode:(unsigned long long)arg3;
- (id)mmkvWithID:(id)arg1 cryptKey:(id)arg2 aes256:(BOOL)arg3 mode:(unsigned long long)arg4;
- (id)mmkvWithID:(id)arg1 expectedCapacity:(unsigned long long)arg2;
- (id)mmkvWithID:(id)arg1 cryptKey:(id)arg2 expectedCapacity:(unsigned long long)arg3;
- (id)mmkvWithID:(id)arg1 cryptKey:(id)arg2 aes256:(BOOL)arg3 expectedCapacity:(unsigned long long)arg4;
- (BOOL)backupOneMMKV:(id)arg1 toDirectory:(id)arg2;
- (BOOL)restoreOneMMKV:(id)arg1 fromDirectory:(id)arg2;
- (unsigned long long)backupAllToDirectory:(id)arg1;
- (unsigned long long)restoreAllFromDirectory:(id)arg1;
- (BOOL)isFileValid:(id)arg1;
- (BOOL)removeStorage:(id)arg1;
- (BOOL)checkExist:(id)arg1;
@end
