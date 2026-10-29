@interface HeadImgDownloaderByUrl : HeadImgBaseDownloader <IContactMgrExt>
{
    NSMutableArray * m_userRequestList; // +0x38
    NSMutableDictionary * m_dicUserRequestCount; // +0x40
}
- (id)init;
- (void)addDownloadRequestWithUrl:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (void)setDownloadFastMode;
- (void)setDownloadCommonMode;
- (void)createNetworkRequest:(id)arg1;
- (void)startDownloadWithMars:(id)arg1;
- (void)saveImageWithData:(id)arg1 request:(id)arg2;
- (void)onDownloadComplete:(id)arg1 request:(id)arg2 path:(id)arg3;
- (void)onDownloadHeadImageFail:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onModifyContact:(id)arg1;
- (void).cxx_destruct;
@end
