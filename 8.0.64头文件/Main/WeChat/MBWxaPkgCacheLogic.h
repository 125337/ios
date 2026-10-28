@interface MBWxaPkgCacheLogic : NSObject
{
    NSMutableDictionary * _dicCacheFileInfo; // +0x8
    NSMutableSet * _setUnpackedPkgFilePath; // +0x10
    long long _unpackTime; // +0x18
    NSMutableDictionary * _dicCacheFileAccessedTimeRecord; // +0x20
}
- (id)init;
- (void)dealloc;
- (BOOL)unpackPkgWithFilePath:(id)arg1 unpackLib:(void *)arg2;
- (BOOL)unpackPkgFromPath:(id)arg1 bizName:(id)arg2;
- (void)clearAllPkgInfo;
- (id)getMBCacheFileInfoWithFullUrl:(id)arg1;
- (id)contentsOfDirectoryWithFullUrl:(id)arg1 error:(id *)arg2;
- (BOOL)isString:(id)arg1 inArray:(id)arg2;
- (long long)getUnpackTime;
- (void)setAccessedTimeToCurrentTimeWithFullUrl:(id)arg1;
- (long long)getAccessedTimeWithFullUrl:(id)arg1;
- (void).cxx_destruct;
@end
