@interface EmoticonCustomCreateVideoDownloadTask : EmoticonCustomCreateDownloadTask <WCPlayerDownloaderExt, WCFinderVideoDownLoadMgrExt>
{
    unsigned long long _targetBitrate; // +0x8
    WCFinderFeedMediaWrap * _downloadingWrap; // +0x10
    WCFinderMediaInfo * _mediaInfo; // +0x18
    id /* block */ _finderAlreadyExistBlock; // +0x20
    id /* block */ _finderProgressBlock; // +0x28
    id /* block */ _finderSucBlock; // +0x30
    NSString * _feedId; // +0x38
    NSString * _nonceId; // +0x40
}
- (id)initWithFinderFeedId:(id)arg1 nonceId:(id)arg2;
- (id)initWithFinderMediaInfo:(id)arg1;
- (void)dealloc;
- (void)startDownload;
- (void)prepareDownloadTask:(id /* block */)arg1;
- (BOOL)interruptDownload;
- (id)getLocalFinderMediaPath:(id)arg1 mediaInfo:(id)arg2;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (void)finderMediaVideoStreamDownloadFailedWithTid:(id)arg1;
- (unsigned long long)targetBitrate;
- (void)setTargetBitrate:(unsigned long long)arg1;
- (id)downloadingWrap;
- (void)setDownloadingWrap:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (id /* block */)finderAlreadyExistBlock;
- (void)setFinderAlreadyExistBlock:(id /* block */)arg1;
- (id /* block */)finderProgressBlock;
- (void)setFinderProgressBlock:(id /* block */)arg1;
- (id /* block */)finderSucBlock;
- (void)setFinderSucBlock:(id /* block */)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (void).cxx_destruct;
@end

