@interface MMHDHeadImgDownloader : MMObject <PBMessageObserverDelegate>
{
    id <HeadImgDownloaderDelegate> downloadDelegate; // +0x8
    NSMutableDictionary * _m_downloadTaskDic; // +0x10
}
- (id)init;
- (void)dealloc;
- (BOOL)isExistTheSameUsername:(id)arg1;
- (BOOL)addTask:(id)arg1;
- (id)getTaskForName:(id)arg1;
- (void)removeTaskForName:(id)arg1;
- (id)getTempFilePath:(id)arg1;
- (unsigned int)getFileSize:(id)arg1;
- (BOOL)downloadHDImg:(id)arg1 offset:(unsigned int)arg2 len:(unsigned int)arg3;
- (BOOL)saveData:(id)arg1 forTask:(id)arg2 file:(id)arg3;
- (void)stopDownloadForName:(id)arg1;
- (unsigned int)downloadHDHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (unsigned int)downloadHDHeadImg:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (BOOL)startDownloadHeadImageWithdDownloadTask:(id)arg1;
- (unsigned int)startDownloadTaskWithURLChannel:(id)arg1;
- (BOOL)startDownloadWithMars:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnCDN:(id)arg1 task:(id)arg2;
- (id)generateNormalHeadData:(id)arg1;
- (void)updateNormalHeadForTask:(id)arg1;
- (void)onDownloadCompleteForTask:(id)arg1;
- (void)onDownloadPartFailForTask:(id)arg1;
- (void)onDownloadPartOK:(id)arg1 task:(id)arg2;
- (id)downloadDelegate;
- (void)setDownloadDelegate:(id)arg1;
- (id)m_downloadTaskDic;
- (void)setM_downloadTaskDic:(id)arg1;
- (void).cxx_destruct;
@end

