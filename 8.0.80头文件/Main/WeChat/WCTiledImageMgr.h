@interface WCTiledImageMgr : MMRootService <MMServiceProtocol>
{
    BOOL _enableHDR; // +0x8
    NSObject<OS_dispatch_queue> * _tileImageQueue; // +0x10
    NSMutableDictionary * _imageTasks; // +0x18
    NSMutableDictionary * _imageDatas; // +0x20
}
- (void)onServiceInit;
- (void)createTileTaskWithImageData:(id)arg1 tileSize:(CGSize)arg2 complete:(id /* block */)arg3;
- (void)stopTask:(id)arg1;
- (void)getTileImageWithTaskId:(id)arg1 inRect:(CGRect)arg2 scale:(double)arg3 complete:(id /* block */)arg4;
- (void)_getTileImageWithTaskId:(id)arg1 inRect:(CGRect)arg2 complete:(id /* block */)arg3;
- (id)cpKey:(id)arg1;
- (id)stringFromTileRect:(CGRect)arg1;
- (id)tileImagePath:(id)arg1;
- (id)tileImagePath:(id)arg1 tileRect:(CGRect)arg2;
- (void)tileImageIfNeed:(id)arg1;
- (BOOL)isPNGImage:(id)arg1;
- (id)cropImage:(id)arg1 toRect:(CGRect)arg2;
- (void)resizeImage:(id)arg1 withScale:(double)arg2 complete:(id /* block */)arg3;
- (BOOL)enableHDR;
- (void)setEnableHDR:(BOOL)arg1;
- (id)tileImageQueue;
- (void)setTileImageQueue:(id)arg1;
- (id)imageTasks;
- (void)setImageTasks:(id)arg1;
- (id)imageDatas;
- (void)setImageDatas:(id)arg1;
- (void).cxx_destruct;
@end
