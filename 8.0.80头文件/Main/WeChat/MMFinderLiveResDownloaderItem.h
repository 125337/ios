@interface MMFinderLiveResDownloaderItem : NSObject
{
    BOOL _useProprietaryProtocol; // +0x8
    NSString * _itemId; // +0x10
    unsigned long long _retryCount; // +0x18
    NSString * _downloadUrl; // +0x20
    NSString * _downloadUrlHash; // +0x28
    NSString * _fileMD5; // +0x30
    NSURL * _downloadPath; // +0x38
    NSString * _resPath; // +0x40
    NSURL * _cachePath; // +0x48
    MMFinderLiveResChecker * _checker; // +0x50
    long long _totalLength; // +0x58
    id /* block */ _downloadCompletion; // +0x60
    unsigned long long _state; // +0x68
}
- (id)itemId;
- (void)setItemId:(id)arg1;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg1;
- (id)downloadUrlHash;
- (void)setDownloadUrlHash:(id)arg1;
- (id)fileMD5;
- (void)setFileMD5:(id)arg1;
- (id)downloadPath;
- (void)setDownloadPath:(id)arg1;
- (id)resPath;
- (void)setResPath:(id)arg1;
- (id)cachePath;
- (void)setCachePath:(id)arg1;
- (id)checker;
- (void)setChecker:(id)arg1;
- (long long)totalLength;
- (void)setTotalLength:(long long)arg1;
- (id /* block */)downloadCompletion;
- (void)setDownloadCompletion:(id /* block */)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)useProprietaryProtocol;
- (void)setUseProprietaryProtocol:(BOOL)arg1;
- (void).cxx_destruct;
@end
