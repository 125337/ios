@interface TAVSourceImageGenerator : NSObject
{
    BOOL _generating; // +0x8
    AVAssetImageGenerator * _imageGenerator; // +0x10
    NSObject<OS_dispatch_queue> * _thumbnailQueue; // +0x18
    NSMutableDictionary * _imageCache; // +0x20
    NSMutableArray * _requestedTimes; // +0x28
    NSMutableArray * _handleList; // +0x30
}
- (id)initWithSource:(id)arg1 imageSize:(CGSize)arg2;
- (void)generateThumbnailAtTime:(struct)arg1 completion:(id /* block */)arg2;
- (void)generateThumbnailAtTimes:(id)arg1 completion:(id /* block */)arg2;
- (void)addRequestedTimes:(id)arg1;
- (id)featchThumbnailAtTime:(struct)arg1;
- (id)validRequestTime:(id)arg1;
- (id)imageGenerator;
- (void)setImageGenerator:(id)arg1;
- (id)thumbnailQueue;
- (void)setThumbnailQueue:(id)arg1;
- (id)imageCache;
- (void)setImageCache:(id)arg1;
- (id)requestedTimes;
- (void)setRequestedTimes:(id)arg1;
- (id)handleList;
- (void)setHandleList:(id)arg1;
- (BOOL)generating;
- (void)setGenerating:(BOOL)arg1;
- (void).cxx_destruct;
@end

