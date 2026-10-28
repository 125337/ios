@interface TPAssetFileInfo : NSObject
{
    BOOL _usePollingMode; // +0x8
    int _fileId; // +0xc
    int _taskId; // +0x10
    unsigned long long _size; // +0x18
    NSString * _type; // +0x20
    NSString * _name; // +0x28
    NSString * _cacheDir; // +0x30
    NSString * _customPath; // +0x38
    NSString * _cachePath; // +0x40
}
- (id)initWithTaskId:(int)arg1 fileName:(id)arg2;
- (void)dealloc;
- (id)cachePath;
- (id)generateCacheFile;
- (id)getLibraryCachePath;
- (id)getReadPath;
- (id)description;
- (int)fileId;
- (void)setFileId:(int)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)cacheDir;
- (void)setCacheDir:(id)arg1;
- (id)customPath;
- (void)setCustomPath:(id)arg1;
- (BOOL)usePollingMode;
- (void)setUsePollingMode:(BOOL)arg1;
- (int)taskId;
- (void)setTaskId:(int)arg1;
- (void)setCachePath:(id)arg1;
- (void).cxx_destruct;
@end
