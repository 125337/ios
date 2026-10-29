@interface StoreEmoticonDownloadMgr : NSObject <EmoticonDownloadTaskInnerDelegate>
{
    int _concurrentCount; // +0x8
    NSMutableSet * _emoticonDownloading; // +0x10
    NSMutableArray * _downloadList; // +0x18
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x20
}
- (id)init;
- (void)startDownloadEmoticon:(id)arg1;
- (void)checkLocalOrStart:(id)arg1;
- (void)checkCanStartDownload;
- (void)startDownloadInternal:(id)arg1;
- (id)getExsitingThumbImgPath:(id)arg1;
- (id)tryGetThumbUrl:(id)arg1;
- (id)tryGetThumbPath:(id)arg1;
- (void)realStartDownload:(id)arg1;
- (void)fetchThumbFinished:(id)arg1 thumbPath:(id)arg2;
- (void)downloadFinish:(id)arg1 result:(BOOL)arg2 fromLocal:(BOOL)arg3;
- (void)handleThumbFinished:(id)arg1 thumbPath:(id)arg2;
- (void)handleDownloadFinish:(id)arg1 result:(BOOL)arg2 fromLocal:(BOOL)arg3;
- (BOOL)isEmoticonExistInLocal:(id)arg1;
- (void)onDownloadTaskFinished:(id)arg1 successful:(BOOL)arg2 filePath:(id)arg3;
- (void)onThumbDownloadFinished:(id)arg1 filePath:(id)arg2;
- (id)emoticonDownloading;
- (void)setEmoticonDownloading:(id)arg1;
- (id)downloadList;
- (void)setDownloadList:(id)arg1;
- (int)concurrentCount;
- (void)setConcurrentCount:(int)arg1;
- (id)workerQueue;
- (void)setWorkerQueue:(id)arg1;
- (void).cxx_destruct;
@end
