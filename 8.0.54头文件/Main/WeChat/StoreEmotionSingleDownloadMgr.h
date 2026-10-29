@interface StoreEmotionSingleDownloadMgr : MMUserService <EmoticonDownloadProxyDelegate, MMServiceProtocol>
{
    NSMutableOrderedSet * m_downloadQueue; // +0x8
    EmoticonDownloadProxy * m_downloadCgi; // +0x10
}
- (id)init;
- (BOOL)downloadEmotionWithWrap:(id)arg1;
- (BOOL)saveToNotTempPathWithMD5:(id)arg1;
- (id)dataOfEmoticonIfExistedWithWrap:(id)arg1;
- (void)checkDownload;
- (void)finishDownloadEmotionWrap:(id)arg1;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void).cxx_destruct;
@end

