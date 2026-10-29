@interface FavCdnTaskInfo : NSObject
{
    int _retryCount; // +0x8
    long long _remainSize; // +0x10
    FavoritesDownloadCDNInfo * _downloadInfo; // +0x18
}
- (int)retryCount;
- (void)setRetryCount:(int)arg1;
- (long long)remainSize;
- (void)setRemainSize:(long long)arg1;
- (id)downloadInfo;
- (void)setDownloadInfo:(id)arg1;
- (void).cxx_destruct;
@end

