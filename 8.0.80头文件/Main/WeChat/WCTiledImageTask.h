@interface WCTiledImageTask : NSObject
{
    NSString * _taskId; // +0x8
    CGSize _imageSize; // +0x10
    CGSize _tileSize; // +0x20
}
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (CGSize)imageSize;
- (void)setImageSize:(CGSize)arg1;
- (CGSize)tileSize;
- (void)setTileSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
