@interface ChatBotReceivedFileDownloadManager : NSObject
{
    NSCache * _pathCache; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (id)_pathCacheKeyForFileId:(id)arg1 aesKey:(id)arg2 msgSvrId:(long long)arg3 fileExt:(id)arg4;
- (id)_cdnFileKeyForFileId:(id)arg1 aesKey:(id)arg2;
- (id)cachePathForFileId:(id)arg1 aesKey:(id)arg2 fileName:(id)arg3 msgSvrId:(long long)arg4;
- (BOOL)hasCachedFileForFileId:(id)arg1 aesKey:(id)arg2 fileName:(id)arg3 msgSvrId:(long long)arg4;
- (void)downloadWithFileId:(id)arg1 aesKey:(id)arg2 fileName:(id)arg3 msgSvrId:(long long)arg4 progress:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)pathCache;
- (void)setPathCache:(id)arg1;
- (void).cxx_destruct;
@end
