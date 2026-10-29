@interface TXYVideoCropHandle : NSObject
{
    double _cutVideoDuration; // +0x8
    long long _bitsPerPixel; // +0x10
    NSObject<OS_dispatch_queue> * _cropVideoQueue; // +0x18
}
- (id)cropVideoQueue;
- (id)init;
- (void)cropVideoWithFile:(id)arg1 resultPath:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)cropVideoWithFile:(id)arg1 resultPath:(BOOL)arg2 delOldFile:(BOOL)arg3 complete:(id /* block */)arg4;
- (void)deleteFile:(id)arg1;
- (id)videoToBase64WithoutputURL:(id)arg1;
- (void)cutVideoWithAVAsset:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 filePath:(id)arg4 completion:(id /* block */)arg5;
- (id)videoInputSettings;
- (id)videoOutputSettings;
- (double)cutVideoDuration;
- (void)setCutVideoDuration:(double)arg1;
- (long long)bitsPerPixel;
- (void)setBitsPerPixel:(long long)arg1;
- (void)setCropVideoQueue:(id)arg1;
- (void).cxx_destruct;
@end
