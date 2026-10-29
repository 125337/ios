@interface WACanvasFileHelper : NSObject <NSURLSessionDataDelegate, NSURLSessionTaskDelegate>
{
    NSURLSession * _session; // +0x8
    NSMutableDictionary * _dicCanvasId2TaskQueue; // +0x10
}
+ (id)pathOfCacheDir;
+ (id)pathForResWithUrl:(id)arg1;
+ (unsigned int)genDownloadTaskId;
+ (id)trimmingWhitespaceWithStr:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)subThread_syncGetFileDataWithUrl:(id)arg1 canvasId:(id)arg2;
- (void)cancelAllTask:(id)arg1;
- (void)addTaskToQueue:(id)arg1 canvasId:(id)arg2 taskId:(unsigned int)arg3;
- (void)removeTaskWithCanvasId:(id)arg1 taskId:(unsigned int)arg2;
- (id)syncDownloadFileWithUrl:(id)arg1 filePath:(id)arg2 canvasId:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (id)session;
- (void)setSession:(id)arg1;
- (id)dicCanvasId2TaskQueue;
- (void)setDicCanvasId2TaskQueue:(id)arg1;
- (void).cxx_destruct;
@end

