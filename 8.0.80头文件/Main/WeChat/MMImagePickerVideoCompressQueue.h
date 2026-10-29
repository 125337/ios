@interface MMImagePickerVideoCompressQueue : NSObject
{
    BOOL _cancelled; // +0x8
    NSMutableArray * _videoCompressTasks; // +0x10
    MMImagePickerVideoTask * _runningTask; // +0x18
}
- (id)init;
- (void)addCompressTask:(id)arg1 videoAsset:(id)arg2 videoUrl:(id)arg3 scene:(unsigned long long)arg4 complete:(id /* block */)arg5;
- (void)checkNextTask;
- (void)runTask:(id)arg1;
- (void)cancel;
- (id)videoCompressTasks;
- (void)setVideoCompressTasks:(id)arg1;
- (id)runningTask;
- (void)setRunningTask:(id)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (void).cxx_destruct;
@end
