@interface MBMediaOpIdContext : NSObject
{
    int _canvasId; // +0x8
    NSNumber * _containerId; // +0x10
    NSString * _videoPath; // +0x18
    NSString * _videoThumbPath; // +0x20
}
- (id)containerId;
- (void)setContainerId:(id)arg1;
- (int)canvasId;
- (void)setCanvasId:(int)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)videoThumbPath;
- (void)setVideoThumbPath:(id)arg1;
- (void).cxx_destruct;
@end
