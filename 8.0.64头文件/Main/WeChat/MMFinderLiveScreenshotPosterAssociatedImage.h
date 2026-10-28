@interface MMFinderLiveScreenshotPosterAssociatedImage : NSObject
{
    NSString * _imageId; // +0x8
    UIImage * _image; // +0x10
    long long _layerLevel; // +0x18
    unsigned long long _layerOrder; // +0x20
    CGRect _normalizedFrame; // +0x28
}
- (id)init;
- (long long)order;
- (id)imageId;
- (void)setImageId:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (long long)layerLevel;
- (void)setLayerLevel:(long long)arg1;
- (unsigned long long)layerOrder;
- (void)setLayerOrder:(unsigned long long)arg1;
- (CGRect)normalizedFrame;
- (void)setNormalizedFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
