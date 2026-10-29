@interface MMHeadImageDownloader : MMObject <HeadImgDownloaderDelegate>
{
    HeadImgDownloaderByUrl * _urlDownloader; // +0x8
    HeadImgDownloaderByUsrName * _usrNameDownloader; // +0x10
    MMHDHeadImgDownloader * _hdHeadImgDownloader; // +0x18
    NSCache * _autoUpdatedUsrName; // +0x20
    id <HeadImgDelegate> delegate; // +0x28
}
- (id)init;
- (void)addDownloadRequest:(id)arg1 forCategory:(unsigned char)arg2;
- (void)addDownloadRequestWithUrl:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (void)cancelRequest:(id)arg1;
- (void)setDownloadFastMode;
- (void)setDownloadCommonMode;
- (id)getUsrHeadImgUrl:(id)arg1 withCategory:(unsigned char)arg2;
- (unsigned int)downloadHDHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (unsigned int)downloadHDHeadImg:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (BOOL)isNeedGetHDImg:(id)arg1;
- (void)removeUsrFromLastFailureList:(id)arg1;
- (BOOL)isNeedAutoUpdateHeadImgForUsr:(id)arg1;
- (id)getUsrHDHeadImgUrl:(id)arg1;
- (void)onHeadImgDownloadFinish:(id)arg1 Status:(id)arg2 Image:(id)arg3 Category:(unsigned char)arg4;
- (void)onHDHeadImgDownloadFinish:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

