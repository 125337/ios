@interface StoreEmotionThumbImageDownloadMgr : MMUserService <ImageDownloadLoaderDelegate, MMServiceProtocol>
{
    NSMutableDictionary * m_downloadTaskListDic; // +0x8
}
- (void)preDownloadImgUrlStr:(id)arg1;
- (void)downloadImgUrlStr:(id)arg1 toPath:(id)arg2;
- (void)onDownloadFinishedWithLoader:(id)arg1 AndData:(id)arg2;
- (void).cxx_destruct;
@end
